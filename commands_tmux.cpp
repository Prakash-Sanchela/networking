    Tmux commands      
Creating new session	      | tmux new -s session_name
Detaching from tmux session	| Ctrl+b d
List tmux session	          | tmux ls
Attach to existing session	| Tmux attach-session -t session_name (0,1,2 etc)
Create a new window	        | Ctrl+b c
Choose window from a list	  | Ctrl+b w
Split screen vertically 	  | Ctrl+b %
Split screen horizontally	  | Ctrl+b "
Toggle between panes	      | Ctrl+b o
Close current pane	        | Ctrl+b x
Switch to next window	      | Ctrl + b n
Switch to previous window	  | Ctrl + b p
Destroy current session	    | Ctrl +b &                                                                                    


GDB commands 
a. Gdb commands
	i. Sudo gdb ppe (binary location)
	ii. If process already running and you need to attach it to gdb
	iii. Sudo gdb attach -p "Process id"
b. Lavelle services configuration files location
	/etc/init/lavelle-ppe-conf
c. Tailf to continue checking the logs
	i. Tailf /var/log/upstart/lavelle-ppe.log
	
	
Iperf commands

d. Server : sudo iperf -s -p 4001
	i. -s for server
	ii. -p port
	iii. -i : -i1 -> every 1 second it will update
e. Client : iperf -c 10.201.12.10 -t20 -p 4001 -i1 -b 1M
	i. -c client
	ii. Destination server ip
	iii. -t time in seconds 
	iv. -p port
	v. -i1
	vi. -b bandwidth
