## What is a VPN (Virtual Private Network)?
A VPN extends a private network across a public network (like the Internet) and allows users to send and receive data securely as if their devices were directly connected to the private network.
##  Key Concepts:
| Term                | Description                                                                            |
| ------------------- | -------------------------------------------------------------------------------------- |
| **Tunneling**       | Encapsulation of data within another packet to securely transmit over public networks. |
| **Encryption**      | Scrambles data so unauthorized users can't read it.                                    |
| **Authentication**  | Confirms identity of devices/users to prevent unauthorized access.                     |
| **Protocols**       | Rules used to establish VPN communication (e.g., IPsec, PPTP, L2TP, OpenVPN).          |
| **Client & Server** | VPN client connects to a VPN server to access the private network.                     |

##  Common VPN Protocols
| Protocol        | Transport    | Description                                              |
| --------------- | ------------ | -------------------------------------------------------- |
| **IPsec**       | TCP/UDP      | Secure at network layer. Used with IKE for key exchange. |
| **L2TP**        | UDP 1701     | Often used with IPsec for added security.                |
| **PPTP**        | TCP 1723     | Obsolete and less secure. Easy to set up.                |
| **OpenVPN**     | TCP/UDP      | Highly secure, open-source, and widely used.             |
| **IKEv2/IPsec** | UDP 500/4500 | Fast and stable, especially for mobile.                  |
| **SSL VPN**     | TCP 443      | Uses TLS/SSL for encryption, easy to use over HTTPS.     |
| **WireGuard**   | UDP          | Lightweight, secure, modern VPN protocol.                |

## VPN Modes (IPsec)
| Mode               | Description                                                                             |
| ------------------ | --------------------------------------------------------------------------------------- |
| **Transport Mode** | Encrypts only the payload, leaves IP headers intact. Used for end-to-end communication. |
| **Tunnel Mode**    | Encrypts entire IP packet. Used in site-to-site VPNs.                                   |

## Types of VPN
| Type                   | Use Case                                                                    |
| ---------------------- | --------------------------------------------------------------------------- |
| **Remote Access VPN**  | For individual users connecting securely to a company network from outside. |
| **Site-to-Site VPN**   | Connects entire networks across different locations.                        |
| **Client-to-Site VPN** | One client connects to entire site’s network securely.                      |

Absolutely! Here's a set of **50 VPN-related multiple-choice questions (MCQs)** with correct answers marked. These cover **basic to intermediate** concepts to help you prepare for your exam.

---

### ✅ **VPN MCQs with Answers**

1. **What does VPN stand for?**\
   A. Virtual Public Network\
   B. Virtual Private Network ✅\
   C. Visible Private Network\
   D. Variable Protected Network\

2. **Which of the following is a commonly used VPN protocol?**\
   A. FTP\
   B. SMTP\
   C. IPsec ✅\
   D. SNMP\

3. **Which VPN protocol is open-source and highly secure?**\
   A. PPTP\
   B. OpenVPN ✅
   C. L2TP
   D. RIP

4. **Which protocol is considered obsolete and insecure?**
   A. IKEv2
   B. OpenVPN
   C. PPTP ✅
   D. IPsec

5. **Which mode in IPsec VPN encrypts the entire IP packet?**
   A. Transport Mode
   B. Tunnel Mode ✅
   C. Hybrid Mode
   D. Encapsulation Mode

6. **What is tunneling in VPN?**
   A. Sending unencrypted data
   B. Encrypting passwords only
   C. Wrapping data in another packet ✅
   D. Hiding browser history

7. **Which port does PPTP use?**
   A. 443
   B. 500
   C. 1723 ✅
   D. 1194

8. **Which VPN type connects entire networks across sites?**
   A. Remote Access
   B. Intranet VPN
   C. Site-to-Site VPN ✅
   D. Personal VPN

9. **At which OSI layer does IPsec operate?**
   A. Transport
   B. Network ✅
   C. Session
   D. Application

10. **What does IKE stand for?**
    A. Internet Knowledge Exchange
    B. Intranet Key Entity
    C. Internet Key Exchange ✅
    D. Intermediate Key Encryption

11. **Which VPN uses SSL/TLS encryption?**
    A. L2TP
    B. SSL VPN ✅
    C. PPTP
    D. GRE

12. **Default port of OpenVPN is:**
    A. 443
    B. 1723
    C. 1194 ✅
    D. 8080

13. **Main benefit of using VPN is:**
    A. Increased download speed
    B. Secure data transmission ✅
    C. Faster file transfers
    D. Unlimited internet access

14. **Which VPN protocol uses UDP by default?**
    A. L2TP
    B. OpenVPN
    C. WireGuard ✅
    D. PPTP

15. **What is the common encryption standard in VPNs?**
    A. SHA-1
    B. AES ✅
    C. DES
    D. RC4

16. **Which of the following is not a VPN protocol?**
    A. WireGuard
    B. FTP ✅
    C. IKEv2
    D. L2TP

17. **Which VPN protocol is known for fast reconnection and stability in mobile?**
    A. IKEv2 ✅
    B. PPTP
    C. SSL
    D. GRE

18. **In IPsec Transport mode:**
    A. Whole packet is encrypted
    B. Only data payload is encrypted ✅
    C. Header and payload are both visible
    D. Used in site-to-site VPNs only

19. **Port used by IPsec/IKE:**
    A. 69
    B. 443
    C. 500 ✅
    D. 161

20. **L2TP is commonly used with which protocol for security?**
    A. SSL
    B. IPsec ✅
    C. PPTP
    D. GRE

21. **Which protocol is most commonly used in modern SSL VPNs?**
    A. TLS ✅
    B. GRE
    C. RC4
    D. DES

22. **What does a VPN client do?**
    A. Hosts the VPN server
    B. Connects to VPN server ✅
    C. Encrypts only metadata
    D. Routes all traffic publicly

23. **Which VPN type is best for remote employees?**
    A. Site-to-Site VPN
    B. Remote Access VPN ✅
    C. Client-to-Client VPN
    D. DMZ VPN

24. **Which protocol encapsulates PPP frames for VPN use?**
    A. GRE ✅
    B. SSL
    C. TCP
    D. UDP

25. **What does NAT traversal in VPN help with?**
    A. Increasing VPN bandwidth
    B. Bypassing firewalls ✅
    C. Blocking traffic
    D. Encrypting IP header

26. **Which layer is used by SSL VPN?**
    A. Session
    B. Presentation
    C. Transport ✅
    D. Data Link

27. **VPN can prevent which of the following?**
    A. Phishing
    B. IP address tracking ✅
    C. Malware
    D. Software updates

28. **VPN encryption ensures:**
    A. IP spoofing
    B. Faster DNS resolution
    C. Confidentiality ✅
    D. Domain blocking

29. **Which algorithm is used for VPN integrity checking?**
    A. AES
    B. MD5
    C. SHA ✅
    D. LZW

30. **IKEv2 uses which port along with IPsec?**
    A. TCP 443
    B. UDP 500 ✅
    C. UDP 161
    D. TCP 110

31. **What is VPN split tunneling?**
    A. Splitting a connection in two
    B. Routing only some traffic through VPN ✅
    C. Encrypting tunnels twice
    D. VPN load balancing

32. **Which protocol uses both UDP 500 and UDP 4500?**
    A. L2TP
    B. IKEv2/IPsec ✅
    C. SSL VPN
    D. PPTP

33. **Which of these supports multi-platform including Linux/Windows?**
    A. OpenVPN ✅
    B. PPTP
    C. RIP
    D. OSPF

34. **VPN server can be hosted:**
    A. Only on routers
    B. Only on mobile
    C. On servers, routers, or cloud ✅
    D. On switches

35. **Which VPN protocol is best for performance and simplicity?**
    A. L2TP
    B. OpenVPN
    C. WireGuard ✅
    D. PPTP

36. **ESP in IPsec stands for:**
    A. Encapsulating Security Payload ✅
    B. Encryption Security Path
    C. Encoded Secure Packet
    D. External Secure Packet

37. **Which is not a component of IPsec?**
    A. AH
    B. ESP
    C. SSL ✅
    D. IKE

38. **In IPsec, AH stands for:**
    A. Authentication Header ✅
    B. Authorization Header
    C. Algorithmic Header
    D. Access Handler

39. **Which of the following works at Layer 3 of the OSI model?**
    A. SSL VPN
    B. IPsec ✅
    C. PPTP
    D. SSH

40. **VPN masks:**
    A. Physical address
    B. Email ID
    C. IP address ✅
    D. DNS entries

41. **VPN tunneling protocols include:**
    A. TCP and UDP
    B. L2TP and PPTP ✅
    C. DNS and DHCP
    D. HTTP and FTP

42. **Which is the most secure VPN tunneling method?**
    A. PPTP
    B. L2TP
    C. IPsec ✅
    D. GRE

43. **VPN helps prevent:**
    A. Antivirus updates
    B. IP-based tracking ✅
    C. Password expiration
    D. Server outages

44. **IKEv2 offers improved:**
    A. Hashing
    B. Tunnel fragmentation
    C. Connection stability and re-establishment ✅
    D. DNS binding

45. **VPNs encrypt data in:**
    A. Transit ✅
    B. Storage only
    C. Header only
    D. Boot time

46. **Split tunneling is mostly used in:**
    A. Site-to-site VPNs
    B. Remote access VPNs ✅
    C. Mesh VPNs
    D. Intranet

47. **OpenVPN supports:**
    A. Only TCP
    B. Only UDP
    C. Both TCP and UDP ✅
    D. Only SSL

48. **WireGuard is written in:**
    A. C ✅
    B. Python
    C. Java
    D. Go

49. **The main purpose of VPN is to:**
    A. Increase storage
    B. Provide secure and private connection ✅
    C. Boost CPU
    D. Replace routers

50. **Which is NOT a use-case for VPN?**
    A. Secure remote access
    B. Bypassing region restrictions
    C. Blocking all ads ✅
    D. Connecting remote offices
