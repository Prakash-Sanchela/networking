1. De-fragment the packets
In an IP network, for every outgoing link, there is a limit to the length of the packet that can be transmitted out of that link. This is known as Maximum Transmission Unit (MTU) for a given link. When a packet whose length is greater than MTU has to be transmitted out of such link, the packet needs to be split into smaller units such that the length of each such fragmented packet is less than or equal to the MTU.
Your task is to write the code to gather the fragmented packets and construct one defragmented packet and return a pointer to the defragmented packet.
The rules for fragmentation are follows:
- Every fragmented packet header has a field called FO (Fragment Offset). This indicates the byte sequence number in the original un-fragmented packet that is carried over as the first byte sequence in this fragmented packet.
- Every fragmented packet header has a field called MF (More fragments). A value of 1 here indicates that this is NOT the last fragment.
- Every fragmented packet header has a field called length. This represents the length of the fragmented packet


Description on the expected input and output:
Input:
<NumFragments>
<FragmentedPktHeader1, Payload1>
<FragmentedPktHeader2,Payload2>
<FragmentedPktHeader3,Payload3>
<FragmentedPktHeader4,Payload4>
Note: You don't need to parse the input. The main function will parse the input and pass the fragment to you through recvPkt() function.
The sequence of the fragmented packets need NOT be in the order the packets were fragmented. In other words, the fragments can arrive out-of-order.
Output:
Pointer to the defragmented packet.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct hdr_ { 
   int MF; /* more fragments */
   int FO; /* fragment offset */
   int len;
} hdr_t;

typedef struct pkt_ { /* Holds a packet or packet fragment */
   hdr_t hdr;
   char payload[500];
   struct pkt_ *next;
} pkt_t;

pkt_t *head = NULL;  // Linked list head to hold fragments in sorted order

/*
 * Called once for every packet fragment. Gather the fragments here.
 */
void recvPkt(pkt_t *pkt) {
    // Insert pkt into the linked list based on FO in sorted order
    if (head == NULL || pkt->hdr.FO < head->hdr.FO) {
        pkt->next = head;
        head = pkt;
    } else {
        pkt_t *current = head;
        while (current->next != NULL && current->next->hdr.FO < pkt->hdr.FO) {
            current = current->next;
        }
        pkt->next = current->next;
        current->next = pkt;
    }
}

/* 
 * Called after receiving all fragments. Return a pointer to the defragmented
 * packet.
 */  
pkt_t *deFragment(void) {
    // Calculate the total size required for the defragmented packet
    int totalLength = 0;
    pkt_t *current = head;
    pkt_t *defragPkt = malloc(sizeof(pkt_t));
    if (!defragPkt) {
        return NULL; // Allocation failure
    }
    defragPkt->hdr.len = 0;
    defragPkt->hdr.FO = 0;
    defragPkt->hdr.MF = 0; // Initially assume it's the last fragment
    defragPkt->next = NULL;

    char *dest = defragPkt->payload;
    while (current != NULL) {
        // Copy current fragment's payload to the destination buffer
        memcpy(dest, current->payload, current->hdr.len);
        dest += current->hdr.len;
        defragPkt->hdr.len += current->hdr.len;

        // Check if current fragment has MF = 0, which means it's the last fragment
        if (current->hdr.MF == 0) {
            defragPkt->hdr.MF = 0; // Confirmed last fragment
        }

        // Move to the next fragment
        pkt_t *temp = current;
        current = current->next;
        free(temp); // Free memory of the current fragment
    }

    return defragPkt;
}

int main() {
    FILE *f = fopen(getenv("OUTPUT_PATH"), "w");
    
    char payload[80];
    int numFragments = 0;
    int MF, FO, len;
    pkt_t *pkt;
    pkt_t *defragPkt;
    int i;
    
    scanf("%d\n", &numFragments);
    
    for (i = 0; i < numFragments; i++) {
       scanf("%d %d %d %s\n", &MF, &FO, &len, payload);
       pkt = malloc(sizeof(pkt_t));
       if (!pkt) 
           break;
       pkt->hdr.MF = MF;
       pkt->hdr.FO = FO;
       pkt->hdr.len = len;
       memcpy(pkt->payload, payload, len);
       recvPkt(pkt);
    }

    defragPkt = deFragment();
    if (defragPkt) {
        defragPkt->payload[defragPkt->hdr.len] = '\0'; // Null-terminate the final payload
        fprintf(f, "%s\n", defragPkt->payload);
        free(defragPkt); // Free the defragmented packet
    }
    
    fclose(f);
    return 0;
}
