// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>
using namespace std;

bool isDigit(char *ptr)
{
    return (ptr[0] >= '0' || ptr[0] <= '9') && 
           (ptr[1] >= '0' || ptr[1] <= '9') && 
           (ptr[2] >= '0' || ptr[2] <= '9');
}
bool isValidIP(const char *ip)
{
    int num, dots = 0;
    const char *ptr =0;
    if (ip == nullptr || strlen(ip)==0)
    {
        return false;
    }
    ptr = strtok((char*)ip,".");
    while(ptr)
    {
        // check digit
        if (!isDigit((char*)ptr)){
            return false;
        }
        num = atoi(ptr);
        cout << num <<endl;
        if (num < 0 || num > 255)
        {
            return false;
        }
        if (strlen(ptr)>1 && ptr[0]=='0')
        {
            return false;
        }
        dots++;
        ptr = strtok(NULL, ".");
    }
    return dots == 4;
}
int main() {
    // Write C++ code here
    char ptr[] = "192.168.10.255"; 
    if (isValidIP(ptr))
    {
        cout << "valid IP"<<endl;
    }
    else
        cout << "Not valid IP" <<endl;
    
    return 0;
}

