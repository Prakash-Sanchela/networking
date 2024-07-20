// write a program to check the heart beat monitoring system in load balancer or HA
# keywords
# keepalived
  # keepalived is deamon service running on all the node in HA cluster.
  # need to install this on each node of HA cluster
  # need to configure keepalived.conf inside /etc/keepalived/keepalived.conf
  # helpes to assign VIP to active node and VIP we can say it's floating in between active-passive nodes.
  # whoever is active VIP assigned to that node. 
# vrrp 
# how are you achieve seamless traffic when failover happens -> duplicating sessions to passive node
# HA states
