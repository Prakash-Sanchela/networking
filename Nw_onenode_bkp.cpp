1. Protocols :
	1. Physical Layer
	2. Data link Layer - MAC
		i. Ethernet, PPP, Frame Relay, ATM
		ii. 
		iii. Preamble
			i. Marks beginning and provide synchronization
			ii. 8 bytes 
		iv. Length/type
			i. Type of packet in data field, which recognize the many protocols that will go over the ethernet 
			ii. 0x0800 - ipv4
			iii. 0x0806 - ARP
			iv. 0x8100 - vlan tag 802.1Q
			v. 0x86DD - ipv6
			
	3. Network Layer (Internet Layer)  IP
	
		i. 
		ii. IP - Packets 
			i. Class A - 1-126
				i. Private IP - 10.0.0.0 to 10.255.255.255
			ii. Class B - 128-191
				i. Private IP - 172.16.0.0 to 172.31.255.255
			iii. Class C - 192-223
				i. Private IP - 192.168.0.0 to 192.168.255.255
			iv. Class D - 224-239
				i. Used for multicast, Class D used internally not publicly
			v. Class E - 240-255
				i. Experimental purpose
				
			vi. For e.g
				i. IP -                           192.168.100.250
				ii. Subnet mast :        255.255.255.0
				iii. Default Gateway : 192.168.100.1
				
				iv. This is IP is class C IP we can decide by first octoate and that is why subnet mast first 3 bytes are 255 as first 3 byte of IP represents network address for class C.
				v. Another way to represent IP is : 
				vi. IP -                           192.168.100.250/24 : here 24 means 24 bits are for subnet mask.
				vii. Subnet mast :        255.255.255.0
				viii. Default Gateway : 192.168.100.1
				ix. If 172.123.100.224/16 -> class B as /16 means 2 byte for network address and 172 os om range of class B

				i. Valid IP Range
				Network ID : 192.168.100.0 (fist ip of any network is called net ID)
				Valid IP address starts : 192.168.100.0 to 192.168.100.254
				Broadcast Id                  : 192.168.100.255 
				ii. Calculate number of host :
					a) Depends on how many bits is reserved for host. 
					b) For upper example we have 8 bits that is (2 to the power of 8 -2) = 254.
				iii. Ip address and gateway should have same network bytes. 
			
		i. Subnetting
			i. Why we need subnetting?
			When there's more host in single subnet for an example class B there are 65,534 possible host are there, but it's not at all possible to manage this much of host. So subnetting is the technique to break the network into smaller manageable network. 
			CISCO says ideal  number of host per network should not be more than 500, because anything more than 500 the broadcast traffic is so massive that network is gonna be very inefficient.
			Subnetting is borrowing a bit from host bits part. For example in class C /24 means 24 bit is for nw id and 255 for host id, now if we want to divide 255 host into two subnet,
			Will borrow 1 bit from host bits that means /25 is reserved for network.
			So 255 got divided into two part, one subnet is from 0-127 and another is from 128 -255
			§ So the subnet now is 255.255.255.128 instead of 255.255.255.0 as 128 is 7th bit of last byte which we borrow from host byte 
			
		ii. ARP - Frames IP to MAC (Media Access Control address) 
			i. Network layer Protocol
			ii. Find the known hardware address of a host from known IP address.
			iii. When IP has a data to send, it must inform a network access protocol, such as Ethernet or Token Ring, of the destination's hardware address on the local network. (It has already been informed by upper layer protocols of the destination's IP address).
			iv. If IP doesn't find the destination host's MAC address in the ARP cache, it uses ARP to find this information
			v. As IP's detective, ARP interrogates the local network by sending out a broadcast asking the Machine with the specified IP address to reply with it's hardware address. 
			vi. So basically, ARP translates the logical address IP into a hardware address (MAC).
			vii. In LAN, let's say host A wants to communicate with host B. A will send out the broadcast msg with broadcast MAC, when B receives broadcast msg it will reply with it's MAC. 
			viii. ARP request is broadcast and ARP response is Unicast
		iii. RARP - Frames MAC to IP
			i. Network Layer Protocol
			ii. When an machine is diskless, it has now way of initially knowing its IP address. But it does knows its MAC address. 
			iii. RARP sends out the packet that includes its MAC address and a request for the IP address assigned to that MAC address. 
			iv. A designated machine called RARP server, responds with the answer and the identity crisis is over. 
		iv. Proxy ARP
		v. ICMP - Internet Control Message Protocol
			i. Network layer protocol  
			ii. Used by IP for many different services
			iii. ICMP is a management protocol and messaging service provider for IP.
				i. They can provide hosts with information about network problems
				ii. They are encapsulated within IP datagrams
			iv. Common events and messages that ICMP relates to:
				i. Destination unreachable :
				If router can't send an IP datagram any further, it uses ICMP to send a message back to the sender, advising it of the situation
				ii. Buffer Full :
				If router's memory buffer for receiving incoming datagrams is full, it will use ICMP to send out this message until the congestion abates.
				iii. Hops :
				Each IP datagram is allotted a certain number of routers, called hops, to pass through. If it reaches its limit of hops before arriving it's destination, the last router to receive that datagram deletes it. The executioner router then uses ICMP to send an obituary message, informing the sending machine of the demise of its datagram.
				iv. Ping : (Packet Internet Groper)
				Uses ICMP echo request and reply messages to check the physical and logical connectivity of machines of an internetwork.
				
		vi. IGMP
		vii. NAT 
			i. Network address translation
			ii. NAT translate
				1) Private IP to public IP
				2) Public IP to private IP
			iii. In order to prevent the end of public ip address, engineers developed NAT
		
	1. Transport Layer
		i. TCP - Segments 
			i. 
			ii. Protocols using TCP
				1) Http, ftp, smtp, DNS	
		ii. How 3-way handshaking works internally. 
			i. Give packet level information
			ii. On each 1 packet what information we are giving 
		iii. UDP - Segments
			i. 
			ii. Protocols using UDP
				1) DNS, DHCP
	2. Application
		i. SNMP
			i. Basics
				1) Simple Network Management Protocol
				2) Used to monitor and manage the devices connected over the network.
				3) Monitoring consist device performance, collect statistics, monitor resource utilization(cpu, memory etc) and configure device parameters remotely.
				4) Snmp administrator can also configure device parameters remotely, update firmware and deploy patches across the network.
				5) Devices like routers, switches, CCTV cameras, load balancers, servers.
				6) SNMP collects the data from these devices,
				7) Organize them and sends them for nw monitoring and management with fault detection
				8) Application Layer Protocol. 
				9) It gathers data by polling the devices on the network from management station at fixed or random intervals.
				10) This protocol stands as watchdog over the networks, quickly notifies the managers in case of any sudden turns or events. 
				11) These network watchdogs are called agents.
				12) When something wrong happens, agent sends alert called a trap to management station.
			 
			ii. SNMP Port Number
			iii. SNMP generally uses User Datagram Protocol (UDP) port number 161/162.
				1) Why UDP?
					a) Because TCP is slow,
					b) For each packet request, sender will wait for acknowledge, and here we don't need this. 
					c) TCP will be slow. 
			iv. SNMP monitoring requires an admin to configure the SNMP agent to send the monitoring data to an SNMP Manager. 
			v. SNMP works by sending protocol data units, also know as SNMP GET request, to network devices that respond to SNMP. All these communications are tracked and network monitoring tools use them to fetch data from SNMP.
			vi. SNMP Components
				1) SNMP Manager
					a) Used to monitor the SNMP network
					b) Also know as Network management Station (NMS)
					c) Responsible for communicating with the SNMP agent, implemented network devices.
					d) Manager queries the agents, gets response, sets variable in them, and acknowledges events from them. 
				2) Managed devices
					a) A managed device is an SNMP-enabled network entity that is managed  by SNMP manager. These are usually routers, switches, printer, or wireless devices.
				3) SNMP agents
					a) An SNMP agent is a software process that responds to SNMP queries to provide status and statistics about a network node. 
					b) SNMP agents play the most important role in management. 
					c) They are locally located & associated with SNMP network devices from which they collect, store and transmit monitoring data. 
					d) Data is transmitted to the designated SNMP manager when queried. 
				4) SNMP MIB
					a) A management information Base (MIB) forms an integral part of network management models. 
				5) SNMP OID
					a) Object Identification
			vii. SNMP Commands
				1) Get
					a) Request from SNMP Manager to managed device. Performing the GET command retrieves one or more values from managed device. 
				2) GET NEXT
					a) Similar to GET command, GET NEXT retrieves the value of the next OID in the MIB tree
				3) GET BULK
					a) Used to retrieve bulk data from a large MIB table
				4) SET
					a) Used by managers to modify or assign the value of the managed device.
			viii. SNMP message types
			ix. SNMP version
				1) SNMP v1 was defined in 1988
				2) SNMP v2
				3) SNMP v3 Defined in 2002, 
					a) includes the advantages of SNMP v2c and adds security solutions like user accounts, authentication, and optional encryption of data packages. 
					SNMP v3 has three different security levels:
					• NoAuthNoPriv – Stands for No Authentication, No Privacy. No authentication is required and messages are not encrypted. For obvious reasons, this should only be used in closed, secure networks.
					• AuthNoPriv – Stands for Authentication, No Privacy. Messages must be authenticated to be acted upon; however, they are not encrypted during transmission. Theoretically, a malicious actor could still intercept data that was sent between agent and manager during authorized transmissions but could not introduce additional Get or Set requests.
					• AuthPriv – Stands for Authentication and Privacy. This is the most secure implementation of SNMPv3. SNMP messages must be authenticated and all data is encrypted during transmission. This way, a malicious actor is prevented from sending their own Get or Set requests and from seeing the data generated by legitimate requests.
					
				
				
			x. SNMP Security types
		ii. How DHCP works
			DHCP server
			DHCP client
			1. Dynamic Host Configuration Protocol
			2. Way to assign IP automatically to computers over the network without having to do manually.
			3. Handles IP, DNS, default Gateway
			4. DHCP server is handling the.
			5. So let's say DHCP client is installed in one of the system in the network and now after reboot it requires to setup the IP, that is handling in 4 step,
				i. DHCP Discover (DHCP client -> Broadcast)
					1) Broadcast msg saying "Hey I am looking for DHCP server"
				ii. DHCP Offer (DHCP server -> DHCP client)
					1) If there's DHCP server finds in that network, it sends(Offer) the IP address that client can user along with default gateway and DNS server details. 
				iii. DHCP Request (DHCP Client -> DHCP Server (broadcasted msg just to let other node know about the ip ))
					1) Client sends the request saying "IP offered by you looks good to me, I will go ahead and I'll take it"
				iv. DHCP ACK (DHCP server -> DHCP client) // DHCPNAK
					1) DHCP will acknowledge that I am okay with the IP you've choose along with additional information.
				v. DHCPRELEASE
				vi. DHCPINFORM
			6. To remember this sequence
				i. DORA (Discover, Offer, Request, Acknowledgement)
			7. Renewable time for IP, 
		iii. HTTP vs HTTPS
			a. HTTPS = HTTP + Cryptographic protocols (SSL/TLS etc)
			b. HTTP default port 80
			c. HTTPS default port 443
			d. In short  with HTTPS, first secured connection between web browser and web server happened by exchanging encryption key using certificates and then actual data can be transferred and that's is the reason it cost the more processing time. 
			e. HTTP works at Application layer, HTTPS also works on application layer but heavily relies on Transport layer to establish secure connection
		
		iv. DNS
		v. FTP
		vi. TFTP
		vii. SMTP
		viii. SSH
	3. PPPOE
		i. Three steps to configure PPPoE
			a. Dialer interface
				i. Logical interface uses ethernet as physical interface
				ii. Ethernet interface gets its IP from ISP using IPCP
			b. Physical Interface
				i. Ethernet interface has no IP adress
			c. Mapping with each other
		ii. PPPOE client side configuration
	4. RIP - 
		i. Routing Information Protocol
		ii. Used by the router to find the shortest path to destination
		
	5. TCP used by the below services
		i. SMTP
		ii. FTP
		iii. HTTP
	6. UDP used by below services
		i. DHCP
		ii. SNMP
		iii. TFTP
	7. Default port number for protocol
	
	Protocol	Port Number	Transport Protocol	Meanings
	FTP 	20 - Data channel	TCP	
		21 - Control Channel
	SSH	22	TCP/UDP	
	TELNET	23	TCP	
	SMTP	25	TCP	
	DNS	53	TCP/UDP	
	TFTP	69	UDP	
	HTTP	80	TCP	
	DHCP	67/68	UDP	
	POP3	110	TCP	
	SNMP	161/162	TCP/UDP	
	HTTPS	443	TCP	
	ARP	3389	TCP	
	BGP	179	TCP	
	IGMP	2	TCP	
	ICMP		PING	
	NAT	3022	TCP/UDP	
	RIP	520		
	IMAP	143		
	NTP	123	UDP	

Links :
https://www.cisco.com/c/en/us/support/docs/ip/dynamic-address-allocation-resolution/13718-5.html

https://www.cisco.com/c/en/us/support/docs/ip/dynamic-address-allocation-resolution/13718-5.html

https://infoverload.github.io/2018/02/02/how-does-ping-work/

Topics Covered :
01/07/2022
	- OSI Model vs TCP IP model
	- Protocols on each layer
	- Communication types
		○ Duplex, half duplex, full duplex
		○ Synchronous vs asynchronous communication
	- IP addressing 
	- TCP vs UDP
	- Tuple
	- Port Number
	- MAC vs IP (Why MAC why IP?)
	

		Layer
Segment	Port (TCP/UDP)	Transport
Packets	IP	Network
Frames	MAC Address	Data link
Bits		Physical

	- DHCP
	- Broadcast Addresses :
		○ IP - 255.255.255.255 - 4 bytes
		○ MAC - FF:FF:FF:FF:FF:FF - 6 bytes
	
04/07/2022
	- ARP (Address Resolution Protocol - Data link layer)
		○ IP ->ARP-> MAC
	- RARP
		○ MAC -> RARP-> IP
	- Proxy ARP
	- DNS
	- Subnetting 
	- IPV4 Addressing 
	- Loop back IP 
	- IP classes
	
	Class A		
			
			
			
	Class E		
			

07/07/2022
	- SD-WAN
	- IP Routing process
		○  From CCNA book (Page 327)

	- NAT - Network Address Translation
	- PAT - Port Address Translation
	- Gateway vs router
	- Basic routing
	- Network devices
	- Collision domain
		○ Consider a scenario where a power source has one on off switch and 3 person are connected to that power source using cable, when switch turned on, all 3 person will get electric shock. 
		○ Because it has one source of power connected to all 3 person, all will get affected so we can say it has only one collision domain, such scenario is with HUB, hub does not separate the node connected to it, it will broadcast the msges, so HUB has one collision domain
		○ Switch will separate all 3 nodes, It's like putting 3 electric switch in between the power source and 3 person, so if switch 1 is ON, person 1 will get the power. 
		○ Same with the switch, so with 3 port switch it has 3 collision domain.
		○ Router and switches has per-port collision domain. 
		
	- Broadcast domain
		○ Set of all devices that receives the broadcast frames originating from any device within the LAN setup.
		○ Router over the network will not propagate the broadcast msg originating from one LAN
		○ Every LAN will consider as 1 broadcast domain
		○ Router has per-port broadcast domain.
	- 10 ports with HUB
		○ How many collision Domain it has? - 1
			§ Only 1 device can send/receive a packet at a time
		○ How many Broadcast Domain it has? -1 
	- 10 ports with Switch
		○ How many collision Domain it has? - 10
		○ How many Broadcast Domain it has? - 1
	- 10 ports with Router
		○ How many collision Domain it has?
		○ How many Broadcast Domain it has? - 10 
	- VLAN :
		○ Virtual LAN
		○ Let's say in once office there are many departments, developers, finance portal, sharepoint portal, portals used by HR. So to connect all this because of switch has only 1 broadcast domain, we need to provide a switch for each departments, and that's way costly business. 
		○ To avoid this within 1 switch we can use VLAN concept, to make use of switch effectively. Within one switch we can serve multiple departments
		○ Use VLAN to divide broadcast domain
		○ Breaks up broadcast domains in a layer 2 switch internetwork 
		○ Ideally 1 switch has only 1 broadcast domain, so to use this switch effectively we use VLAN concept. 
		○ If we want to talk in between VLANs we need to have router.
		○ Video source
			§ Divides  a single broadcast domain into multiple broadcast domain.
			§ A layer 2 security
			§ VLAN 1 is the default VLAN
			§ We can crate vlans from 2-1001, Default vlan is 1 means one broadcast domain. 
			§ Can be configured on manageable switch only.
		○ Advantage :
			§ Minimize the number of broadcast
			§ Better performance
			§ Also helps to provide the L2 security
		○ How to create VLAN
		○ Static VLAN
			§ Based on port number
			§ We need to create a VLAN using switch CLI in config mode
			§ Let's say we have 20 ports, and created 5 VLAN's for different department. So we need to assign ports to this vlans so broadcast can happen within VLAN
			§ Commands used on switch side 
				□ Creating vlan
				□ Config t
				□ Vlan 10
				□ Name prakash
				□ Exit 
				□ Vlan 20
				□ Name himani
				□ // Single port 
				□ Int f0/8
				□ Switchport mode access
				□ Switchport access vlan 30
				□ // multiple port range
				□ Interface range fa0/1-3
				□ Switcport mode access
				□ Switchport access vlan 10
			§ Port 1-3 now belongs to vlan10 Prakash
				□ Interface range fa0/4-6
				□ Switcport mode access
				□ Switchport access vlan 20
			§ Port 4-6 now belongs to vlan 20 Himani
			§ Can be verified by using show vlan brief
				□ 
				
		○ Dynamic VLAN
			§ Based on MAC address of PC
			§ Switch automatically assign the port to VLAN
			§ Each port can be a member of multiple VLANs
			§ For Dynamic VLAN configuration, a software called VMPS (VLAN Membership Policy Server) is needed.
	- STP
		○ STP (802.1D)
		○ Stop loops with occurs when you have multiple links between switches
		○ Avoiding broadcast storms, multiple frame copues & database instability
		○ Open standard 802.1D
		○ STP is enabled by default on all Cisco catalyst switches
		○ How STP works
			§ Select the Root bridge
			§ Select the Root Port
			§ Select the designated port(forwarding ports) & non designated port(blocking ports)
			§ 
			§ PVST -  Per Spanning Tree Protocol
			§ BPDU : Bridge priority Data Unit
				□ STP network device has to exchange messages to run a loop-free topology smoothly.
				□ All switches exchange BPDU to select the root bridge.
				□ The switch with lowest priority Bridge ID is chosen as the root bridge. 
			§ Root bridge
				□ Basically a centralized switch.
				□ It selects based on bridge id:
					Bridge ID = Priority + MAC address.(2 bytes Priority + 6 bytes MAC address)
					Default priority of CISCO switch is 32768
				□ Every 2 seconds each switch in the LAN sends the packets with Bridge ID and receives other's switch bridge ID. 
				And then it selects the root bridge based on lowest priority number and if each switch has same priority then tie breaker will 
				Be the MAC address. 
				□ There must be only one root bridge in one LAN other switches considered as non root bridges
				□ No ports will be blocked in root bridge.
				
			§ Root Port
				□ Shortest path to root bridge
				□ Every non root bridge looking for best way to go to root bridge
				□ For every one non root bridge there's only one root port
				□  So if I have 5 Switches on LAN,
					® One switch will be root bridge and for other 4 non root bridge 4 root ports will be available.
				□ What if there's two path with equal cost to root bridge, then it will check Lowest bridge it. 
					® Lease cost(Speed)
					® The lowest forwarding switch ID (Priority + MAC)
					® Lowest forwarding Physical port number
					® Cost based on speed
					® 4 Mbps      - 250
					® 10 Mbps    - 100
					® 100 Mbps  - 19
					® 1 Gbps       - 4
					® 10 Gbps     - 2
			§ Designated port & Non designated port
				□ Forwarding ports
					® These are designated ports
					® Root ports are the forwarding ports
				□ Blocked ports
					® Non-designated ports
					® Non-forwarding ports
				□ Ports with highest bridge ID (MAC address + priority) is Blocked.
				
			§ Ports states
				□ Blocking
					® Non-designated port
					® Does not take part in the forwarding of frames. 
					® Switch port are kept in the blocking sate for 20 seconds, after that they change to the listening state.
				□ Listening
					® First state of STP after the blocking state
					® STP decides whether to use the port in frame forwarding or not. 
					® The ports stay in the listening state for 15 seconds and then move on the next state. 
				□ Learning
					® Helps to prepare STP to take part in the forwarding state.
					® STP discards frames received on the port in learning state.
					® Receives the BPDUs
					® Learns the addresses
					® Learning state lasts for 15 seconds.
				□ Forwarding
					®  forwards the frames received to the other ports in this state.
					® Receives BPDUs in this state
					® Also learns the address
					® Ports remain in the forwarding state until any change occurs.
				□ Disabled
					® When and administrator commands the port to get disabled, the port enters the disabled state. 
					® Then discards the frames received on the port. 
					® Stop learning the LAN address. 
					® Does not receive BPDUs. 
			§ Commands
				□ Show Spanning-tree
				□ Show Spanning-tree vlan
				□ Show Spanning-tree root
			§ BackboneFast 
			§ Uplinkfast
			§ Portfast
			§ Root guard
			§ BPDUguard
			From <https://www.howtonetwork.com/ccnasimplified/module-11-exam/> 
			
			
	- CSMA/CD 
		○ Carrier Sense Multiple Access/Collision Detection
		○ Is the protocol for carrier transmission access in ethernet networks.
		○ Collisions is identified using access method called CSMA/CD and CSMA/CA
		○ CSMA/CD works in wired LAN and CSMA/CA works in wireless LAN.
		○ Consider a scenario where few PC is connected through switch, it's small LAN. 
		○ So if host 1 wants to send packet to host 5, it will first sense that the path is available or any other host are transferring the data? That's why it's called Carrier Sense, just like we check the road before crossing the road. 
		○ Ensuring the way from host 1 to 5 is empty, if not it will wait for the path is available. 
		○ It is called Multiple access because all host use the same media to communicate with each other, like cable, switch. 
	- Collision detection
	- Collision avoidance
	- 

	- MPLS :
		i. https://www.networkworld.com/article/2297171/network-security-mpls-explained.html
		ii. Multi Protocol Label switching
		iii. Layer 2.5 service
		iv. Provides labelling and it makes ip routing fast
		v. MPLS header size is 32 bits (4 bytes)
		vi. IP routing on the Internet works. When an internet router receives an IP packet, that packet carries no information beyond a destination IP address. There is no instruction on how that packet should get to its destination or how it should be treated along the way.
		vii. Each router has to make an independent forwarding decision for each packet based solely on the packet’s network-layer header. Thus, every time a packet arrives at a router, the router has to “think through” where to send the packet next. The router does this by referring to complex routing tables.
		viii. The process is repeated at each hop along the route until the packet eventually reaches its destination. All of those hops and all of those individual routing decisions result in poor performance for time-sensitive applications like videoconferencing or voice over IP (VoIP).
		ix. Multi-protocol label switching (MPLS), is a tried and true networking technology that has powered enterprise networks for over two decades. Unlike other network protocols that route traffic based on source and destination address, MPLS routes traffic based on predetermined “labels”. 
		x. Businesses use MPLS to connect remote branch offices that require access to data or applications that reside in the organization's data centre or company headquarters.
		xi. How it works
		xii. The fastest, low-latency path would be reserved for real-time apps like voice and video, thereby ensuring that quality is high. Separating traffic based on performance is impossible to do with other routing protocols.
		xiii. MPLS Pros & cons
			1) Scalable
			2) Better performance
			3) Better bandwidth utilization
			4) Reduce network congestion and better end user experience. 
		xiv. Disadvantage of MPLS
			i. Much more expensive than a standard internet connection. 
			ii. MPLS was designed for organizations that have multiple remote branch offices that are geographically dispersed across the country or the world. 
			iii. When the company expands, MPLS implementation is costly business
			iv. Once the business transition to the cloud, the MPLS based model becomes inefficient because it routes the traffic through corporate headquarters, which act as central choke point.
			v. It is more efficient to send traffic directly to the cloud.
			vi. Traditional WAN is 
				1) Inadequate
				2) Slow
				3) Unsafe
				4) Too Rigid
	
	- SD-WAN
		a. Software Defined-Wide Area Network
		b. SD-WAN is a concept in which you can configure and control your WAN (within a city, state, country or world wide) by using software.
		c. A lightweight replacement for traditional WAN routers (i.e. Support MPLS, internet, 4G)
		d. Support for load sharing traffic across multiple WAN connections.
		e. Simplify the complexity associated with management, configuration and orchestration of WANs. 
		f. Improves network security by encrypting WAN traffic.
		g. Problems with traditional WAN
			i. Need to configure the control plane & routing policy for every router who's in the network. 
			ii. Failover (switching to a standby server or system when your primary application goes down) is completely dependent upon the state of the link (up/down).
		h. Consider an office having 500 branches in world and it is connected through network. 
		i. If there's any small thing needs to be change, that can be done by giving commands to each and every router, that is heavy task. 
		j. Management of network becomes difficult with the traditional approach
		k. By using software in central server, SD-WAN can configure and control this things intelligently.
		l. There are many vendors who provides SD-WAN solutions.
			i. CISCO (Meraki SD-WAN solution)
			ii. CISCO based Viptela
			iii. ARUBA
			iv. Juniper Networks 
			v. Velo cloud etc
		m. ZTP : 
			i. Zero Touch Provisioning
				
		n. Advantage of SDWAN:
			i. Zero touch configuration
			ii. Centralized Management 
			iii. Ease of deployment
		o. Disadvantage or challenges with SD-WAN
			i. Completely dependent on Internet
		p. SDWAN Components
			i. Data plane
			ii. Control plane (vSmart)
			iii. Management (vManage)
			iv. vBond

	- 
	- L3 Routing
		○ In network, there are number of routes available to route the packet from one host to another, the network layer specifies the some of the best policies/strategies which find out the best possible route. This process is called as Routing. 
	- L3 Forwarding
		○ There could be multiple routers in a network. Forwarding here referring as forward the packet which is received from one attached network(interface) of the router to another attached network or some attached network (multicast)
	- Routing Protocol
		○ Used by routers to dynamically find all the networks in the internetwork and to ensure that all routers have the same routing table. 
		○ Basically, a routing protocol determines the path of a packet through an internetwork. 
		○ E.g. RIP, OSPF, BGP
		○ Autonomous system
		○ Dynamic Routing Protocol
		
			§ 
			
			§ IGP
				□ Distance vector
				The route with the least number of hops to the network is determined to be the best route.
				Basically if two route present to reach to certain network, Distance vector choose the shortest path to reach that network even though the speed of that link is slowest compared to other present route.
				The vector indicates the direction to the remote network.
				They send the entire routing table to directly connected neighbours. 
				□ Routing Loops Problem
					® RIP - Routing Information Protocol
						◊ True distance-vector routing protocol.
						◊ RIP sends the complete routing table out to all active interfaces every 30 seconds.
						◊ RIP only uses hop count to determine the best way to a remote network, but it has a maximum allowable hop count of 15 by default, meaning that 16 is deemed unreachable. 
						◊ RIP works well in small networks, but it’s inefficient on large networks with slow WAN links or on networks with a large number of routers installed.
						◊ If RIP finds more than one link with the same hop count to the same remote network, it will automatically perform a round-robin load balancing. 
						◊ RIP can perform load balancing for up to six equal-cost links (four by default).
						◊ RIPv1 uses only classful routing, which means all the device in the network must use same subnet mask.
						◊ RIPv2 provide something called prefix routing and sends the subnet mask information along with route updates. This is called classless routing.  
					® IGRP - Interior Gateway Routing Protocol
						◊ Cisco-proprietary distance-vector routing protocol.
						◊ This means that to use IGRP in your network, all your routers must be Cisco routers.
						◊ Cisco created this routing protocol to overcome the problems associated with RIP.
						◊ IGRP has a maximum hop count of 255 with the default being 100 (same as EIGRP). This is helpful in larger networks and solves the problem of 15 hops being the maximum possible in a RIP network.
						◊ Cisco no longer supports IGRP.
					® Disadvantage
						◊ Routers exchange routing tables periodically which could take more bandwidth. 
						◊ Full route tables are exchanged
				□ Link state
				Also called shortest-path-first protocols.
				Routers each create three separate tables. Neighbor table, topology table, routing table
				Link state routers know more about the internetwork than any distance- vector routing protocol.
				□ Advantage :
					® Incremental updates, it exchanges the information only when there's change in network like new router added or router went down.  
					® Only missing routes are exchanged.
					® Classless routing protocol.
					® Updated through multicast instead of broadcast in distance vector.
					® OSPF
						◊ Works within a single AS(Autonomous System)
						◊ Standard protocol, can be used in any vendors hardware.
						◊ OSPF uses Shortest Path First or the Dijkstra algorithm.
							} https://www.geeksforgeeks.org/introduction-to-dijkstras-shortest-path-algorithm/
						◊ First, a shortest path tree is constructed, and then the routing table is populated with the resulting best paths.
						◊ Unlimited hope count.
						◊ Default Administrative Distance : 110
						◊ Uses : 
							} Mainly used in large enterprise networks. 
							} Quickly adapts to network changes (like link failures, new router added).
						◊ Characteristics:
							} Hierarchical routing
							} Link state Advertisements(LSAs) : exchange LSAs to build the consistent view of network topology. 
							} Faster convergence than distance vector protocol like RIP. 
							} Authentication : supports for securing routing updates. 
						◊ OSPF tables:
							} Neighbor table
								– Directly connected OSPF routers, if we see show ip ospf neighbor, 
								– it will only show us the directly connected routers entry.
								– State of Adjacency
							} Topology table
								– Everything OSPF knows about
								– Topology tables also known as Link State Database (LSDB) in OSPF.
								– Every router knows about every router in topology. 
								– Every router has identical similar Link state database.
							} Routing table
								– Typical routing table
								– OSPF will contribute it's best routes to routing table using topology table
							} Link State Database(LSDB)
							} Link State Advertisement(LSA)
						◊ OSPF packets
							} Hello : 
								– sends every 10 seconds to multicast address 224.0.0.5 neighbors to check if neighbors is alive or dead. If till 40 seconds doesn't get any reply it will delete this router from neighbor table. 
								– 224.0.0.5 is the multicast address for all OSPF routers. 
								– Based on multicast IP router will discover the other OSPF routers.
								– When we configure the ospf router starts listening to this address 224.0.0.5 and other routes are sending hello packets to same address. 
								– Establish the neighborship and to do that there are certain parameters should be matched. 
								– NOTE : While sending hello packet to other ospf Router below parameters should be match otherwise neighborship won't happen. 
									w Hello and dead intervals 
									w Area id
									w Authentication if enables
									w Stub are flag
							} DBD database description
								– Exchanges the routing information in between. 
								– What ever network router has it will send it to neighbors and same with all neighbors which exchanges the route information. 
								– In DBD routers will exchanges it's LSDB basically a Link state database information basically topology table. 
								– LSDB has entries of LSA which is being exchanged between routers. 
								– When let's say R1 sends LSDB to R2, It's not necessary R2 will accept complete LSDB, it will only update the missing LSDBs not the complete table.
								– Also router R2 or R1 can request for specific LSA from neighbor routers using LSR
							} LSR - Link state Request
								– If R2 router has new route, R1 will do request using LDR to R2.
								– R2 will update the R1 with additional route information with packet called LSU
								– This LSU will be sent from multicast IP, to propagate this new route to all neighbors
							} LSU - Link state update
							} LSA - Link state Ack
								– R1 will send the LSA to R2.
						◊ OSPF states
							} Down
							} Attempt
							} Init
								– This state specifies that the router has received a hello packet from it's neighbor. 
							} 2-way
								– Bidirectional communication has been established between two routers. Bi-directional means that each router has seen the each other's hello packet. 
						◊ OSPF router talks to DR using IP multicast address 224.0.0.6
						◊ DR and BDR communicate with all OSPF routers using the 224.0.0.5
						◊ OSPF questions
							1. How OSPF form the neighborship?
						
							
					® IS-IS - Intermediate system to intermediate system
						◊ ISP network internally uses the ISIS protocol.
						◊ Use Dijkstra algorithm.
						◊ Not based on IP
						◊ Integrated IS-IS supports IP
						◊ Level 1 routing : within an area
						◊ Level 2 routing : between areas
						◊ Why do many ISPs still use the IS-IS instead of the OSPF?
				□ Hybrid
					® EIGRP - Enhanced IGRP
						◊ Advanced distance vector protocol.
						◊ Classless routing protocol
						◊ Includes all features of IGRP
						◊ Max hope count is 255 (100 by default)
						◊ Administrative distance is 90
						◊ Multicast and unicast instead of broadcast.
						◊ Also contains three tables
							Neighbour tables - contains list of directly connected routers.
							Topology tables - list of all the best routes learned from neighbour. 
							Routing tables - The best route to the destination. 
						◊ Updates are through multicast address (224.0.0.10). All the routers listen on this address
						◊ Hello messages or keepalive messages are sent every 5 min but routes get's update only if there's change in network. 
			§ EGP
				□ Path vector
					® BGP
						◊ Exterior Gateway Protocol. 
						◊ Designed to exchange routing information between different autonomous systems over the internet.
						◊ Default Administrative Distance of eBGP: 20 
						◊ Default Administrative Distance of iBGP: 200 
					® BGP Packets
						◊ BGP operates over TCP (port 179).
						◊ BGP doesn't just broadcast updates periodically like other routing protocols but instead it sends updates when there's a change in network. (event-driven.)
						◊ Each message has Type field in Each bgp message header. 
					® BGP peer messages
						◊ OPEN Message
							} Establishes a BGP session between peers.
							} Message has
								– Marker : ffffffffffffff
									w Indicate if we used MD5 authentication or not.
									w If all 1's it means we are not using authentication.
								– BGP version
									w Current version is 4
								– Local AS number
								– BGP router ID
								– HOLD time : 
									w If BGP doesn't receive any KEEPALIVE message within hold time from other side. It will consider as dead and it will tear down the BGP session. 
									w Default hold time is 180. 
									w IF the hold time is 0, no keepalive messages will be send to peer bgp routers. 
									
						◊ KEEPALIVE Message
							} Continuously sending keepalive messages to each other at fix interval just to know that neighbor is alive. 
							} Every 60 seconds keepalive message should be sent. 
							} Generally KEEPALIVE messages have been exchanged at every one-third of the hold time. 
						◊ UPDATE message
							} Once two router become BGP neighbors. They can start exchanging the routing information using UPDATE messages.
							} ROUTE add : Route  information which needs to be add has been exchanged using The advertised prefix or the Network Layer Reachability Information(NLRI) information is included in UPDATE message. 
							} NLRI includes prefix and associated BGP peers. 
							} ROUTE remove : UPDATE message is also used in withdrawing advertised BGP routes, and it includes just the prefix only in the message.  
							} Important BGP fields for Update messages:
								– Total path Attribute Length : length of path attributes field.
								– Path Attributes
									w Attributes flags : 
									w Attribute type code : attribute type code. 
										w ORIGIN : 1
										w AS_PATH : 2 (prevent routing loops)
										w NEXT_HOP : 3
										w MULTI_EXIT_DISC : 4
										w COMMUNITIES : 8
						◊ NOTIFICATION message
							}  This message will be sent if errors are detected in the BGP session.
							} When NOTIFICATION message is sent, the BGP neighbor adjacency will be terminated and BGP connection will be closed. 
							} The TCP session and the BGP table will be cleared of all entries from the BGP neighbor.
							} Route withdrawals are done by sending UPDATE message which will be sent to other BGP peers. 
					® BGP routing table process
					® BGP Stats
						◊ Idle (init TCP connection)
							} Connection initialization using ConnectRetryTimer. 
							} Initiate the TCP connection to BGP peer and also listen for a new connection established by a BGP peer. 
							} If BGP succeeds in this stage it will move to connect state.
							} If it fails, ConnectRetryTimer reset to 60 seconds and decrement to 0 for the connection to be initiated again.
						◊ Connect (OPEN/TCP)
							} OPEN message
							} If succeeded, move to active state
							} If failed, BGP attempt a new three-way TCP handshake. 
							} If other error comes, it goes to idle state back.
						◊ Active (OPEN/TCP)
							} BGP attempts 3 way TCP handshaking to establishes a connection with BGP neighbor. 
							} If succeeds OPEN message will be send to neighbor and hold timer will be set. 
							} State 
							} If TCP connection fail or ConnectRetryTimer gets depleted, state will return back to connect state.
						◊ Open connect (OPEN OK, Verify OPEN parameters)
							} After Sending OPEN message to the neighbor, BGP waits for and OPEN message from neighbor as well. 
							} Both OPEN messages are checked and compared for errors such as,
								– BGP version
								– AS number
								– BGP router ID
								– Security parameters
						◊ Open confirm (KEEPALIVE)
							} BGP waits for KEEPALIVE messages from BGP neighbor. If BGP router receives KEEPALIVE message the state will move to Established state and neighbor adjacency will be complete. 
							} If NOTIFICATION message is received, or if hold timer get's depleted, if stop event manifests then the state will be back to idle. 
						◊ Established(UPDATE & KEEPALIVE)
							} Last state of BGP state
							} BGP peers sends UPDATE messages to exchange routing information, when UPDATE and KEEPALIVE bgp messages are received, the hold timer will be reset. 
							} IF NOTIFICATION message is received state will move back to idle. 
						◊ indicates the preferred exit point from the AS LOCAL_PREF
						◊ 
					
					® BGP Questions
						1. How bgp neighbor adjacency achieved?
							} BGP doesn't use multicast/broadcast address to form the neighborship.
							} BGP forms a BGP session through a TCP connection on TCP port 179.
						2. How does the BGP attributes works in UPDATE message?
							1. ORIGIN
							2. AS_PATH
							3. NEXT_HOP
						3. How best route has been selected in BGP?
							1. Router will check below param to select the best route
								First. Weight - High is preferred
								Second. Local preference : High is preferred
								Third. Default AS_PATH : shorter AS_PATH is preferred
								Fourth. ORIGIN : (IGP, EGP, Incomplete) : IGP has highest prioritu
								Fifth. If abov all weigh local preference and AS_PATH are equal, and ORIGIN value is IGP of one of the path, that path will get selected. 
							2. If above all are equal MED (Multi-exit discriminator MULTI_EXIT_DISC) lowest values has been selected for best path selection.
							
							
	- Routed protocol
		○ Once all routers know about all networks, a routed protocol can be used to send user data (packets) through the established enterprise. 
		○ Routed protocols are assigned 
		
	- IP Routing (Packet routing)
		○ Routers don't really care about hosts, they only care about the networks and the best path to each network.
		○ To be able to route the packets, a router must know at min following,
			§ Destination address
			§ Neighbour routers from which it can learn about remote networks
			§ Possible route to all remote network.
			§ The best route to each remote network
			§ How to maintain and verify routing information
		○ Static routing
			§ Administrator is responsible to hand type all network locations into the routing table.  
		○ Dynamic routing

