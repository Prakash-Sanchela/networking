	1. Why to use Docker? 
		a. Docker makes it really easy to install and run software without worrying about setup/dependencies.
		b. Docker is a platform or ecosystem around creating and running containers. 
		c. Docker wants to make it really easy and really straightforward for you to install and run software on any given computer.
		d. Not just your computer, not just your personal laptop, your personal desktop, but on web servers as well or any cloud based computing platform.
	2. What is docker?
		a. Container is an instance of docker image.
		b. Container is a program with its own set of hardware resources and own little space of memory, has own little space of networking tech.
	A. Docker ecosystem 
			§ Docker client
			§ Docker server
			§ Docker machine
			§ Docker images
			§ Docker hub
			§ Docker compose
	B. If someone says I am using docker container in my project, they might be using docker client/docker server or machine or docker images, anything from the docker ecosystem. 
	
	For e.g. if I want to install VS on my machine, what I will do is 
		○ Download the installer
		○ Install the vs
		○ While in this process I may get some error. 
		○ I will google it and whatever it needs I will provide
		○ Again restart the installation
		○ May be again the error because of some dependencies, 
		○ So user has to do it all manually. 
	C. Docker container is independent of OS.
	D. Image vs container
		a. Image contains the application plus it's dependencies for e.g. chrome. 
		b. Where as container additional contains the resources on which application's image will run. 
		c. Container is a running process along with a subset of physical resources on your computer that are allocated to that process specifically. 
		

Install docker on ubuntu
	https://www.digitalocean.com/community/tutorials/how-to-install-and-use-docker-on-ubuntu-18-04
	
Udemy commands : 
	1. Docker run hello-world  
		a. Docker run [operation] [image name]
		b. Here with this command docker client will take the input that I want the image of "hello-world" to the docker server
		c. Docker server checks if the image is present in image cache(local machine).
		d. So when we hit this command first time, cache is empty. 
		e. So docker server will reach out to docker hub where several images are already present for the public use.
		f. So docker server will download the hello-world image to image cache. 
		g. Container is the instance of image.
		h. Now by using this image it will get's printed the "hello-world".
	2. Docker run busybox echo hi there
		a. Here docker client will get the image of busybox and echo is the command available in busybox tool, it will display "hi there" on console. 
	3. Docker run busybox ls
		a. Ls will display the files and directory under the busybox image container
	4. Docker ps 
		a. Display the active container
	5. Docker ps -all
		a. Display all the container you have created in past
	6. Docker run hello-world
		a. Run I combination of two commands
		b. Docker run = docker create + docker start
	7. Sudo docker exec -it docker id /bin/bash
		a. If you want to go to root to that container, in case if you're out of docker container
	8. docker load -i <export_image_name>.tar
		a. This we are using to replace the docker image into sonic vm
	9. Sudo docker stop dockerID
	10. Docker stop containerID - SIGTERM
	11. Docker kill containerID - SIGKILL
		a. When you want to stop the docker
	2. What container is?
		d
31/01/2023
	- To expose used ports while running docker run use -p 
		○ Docker run -p 3000:3000 <image_id>
	- Docker volume 
		○ Useful to setup the directories inside the docker.
		○ Normal approach would be to copy necessary source file to docker container using COPY command. Issue here is if we make any changes on source file it will not reflect on docker file, will have to build docker image again. 
		○ With Docker Volume will setup some directories as reference inside docker container. 
		○ Docker run -p 3000:3000 -v /app/node_modules -v $(pwd):/app <image_id>
	- Docker compose 
		○ To make executing docker run easier. 
		
		
		

What is kubernetes and why to use it
	A. Used to manage the containers
	B. It is a system for running many different containers over multiple machines.
	C. When you need to run many different containers with different images. 
	D. Kebernetes clusters can be created which may contains multiple container over the multiple machine. 
	E. In kubernetes containers exist in a form of pods
	F. Minikube is used to create and run the kubernetes cluster on your local development machine.
	G. Cubectl 

Intel SmartNIC specific:
	- Talking about kubernetes, there are three packages we need to install
		○ Kubectl - used in our command, Command line interface for interacting with our Master 
		○ Kubelet -  a service that must and should be up to make run kubernetes successfully. 
		○ Kubeadm - kubernetes administration. Can Initiate your cluster. We can make master/controller node by using this package. 


==========================
	1. Dive into Docker
		a. Why to use Docker? 
			i. Docker makes it really easy to install and run software without worrying about setup/dependencies.
			ii. Docker is a platform or ecosystem around creating and running containers. 
			iii. Docker wants to make it really easy and really straightforward for you to install and run software on any given computer.
			iv. Not just your computer, not just your personal laptop, your personal desktop, but on web servers as well or any cloud based computing platform.
		b. What is docker?
			i. Container is an instance of docker image.
			ii. Container is a program with its own set of hardware resources and own little space of memory, has own little space of networking tech.
		c. Docker ecosystem 
				□ Docker client
				□ Docker server
				□ Docker machine
				□ Docker images
				□ Docker hub
				□ Docker compose
		d. If someone says I am using docker container in my project, they might be using docker client/docker server or machine or docker images, anything from the docker ecosystem. 
		
		For e.g. if I want to install VS on my machine, what I will do is 
			§ Download the installer
			§ Install the vs
			§ While in this process I may get some error. 
			§ I will google it and whatever it needs I will provide
			§ Again restart the installation
			§ May be again the error because of some dependencies, 
			§ So user has to do it all manually. 
		e. Docker container is independent of OS.
		f. Image vs container
			i. Image contains the application plus it's dependencies for e.g. chrome. 
			ii. Where as container additional contains the resources on which application's image will run. Image contains the file system snapshot and start-up command. 
			iii. Container is a running process along with a subset of physical resources on your computer that are allocated to that process specifically. 
		g. Namespace and cgroups concept are specific to linux OK. 
			i. Those concepts are used to separate the OS resources so that perticular namespace can use that specific resources or we can say limit the resources based on application needs by using namespace and cgroups concepts.
			ii. But this concepts are not on windows and mac operating systems.
			iii. Then question is how does docker containers are running on windows and mac as container also needs it's independent resources.
				1) Answer is under the hood when we install docker client it will also install linux vm on the top op windows/mac. That perticular kernel is responsible to separate or divide the resources among the containers. 
		h. Docker lifecycle
		i. Container isolation
		j. Building custom images through docker server [Udemy]
		k. Creating docker image
			i. Create sample docker file
			ii. Copy paste the content
			iii. Save the file
			iv. Cmd : docker build .
			v. So for any docker image, there's two main things should be there. 
				1) Base image plus it's dependencies
				2) Start up command. 
				3) Let's create the file for redis container
					a) # use an existing docker image as base image 
					FROM alpine
					
					#download and install the dependencies
					RUN apk add --update redis
					#tell the image what needs to be done when it starts
					Cmd ["redis-server"]
					b) Run docker build . Command
						i) Or to give the image name use below command called image tagging
						ii) Docker build -t prakash/redis:latest
					c) Run docker run <container id>
			vi. Docker cache
		l. Section 4: Making Real projects with docker
			i. Create simple Node JS web app container and run it from browser.
			ii. Port mapping while running command docker run
			iii. Docker build 
			iv. Docker run -p 8080:8080 <container_name> // port mapping
		m. Section5  : number of visits on site using redis database
			i. Docker-compose
				1) Separate cli gets installed along with Docker
				2) Used to start up multiple docker containers at the same time.
				3) Automates some of the long winded arguments we were passing to 'docker run'
				4) When we want to run multiple docker's which can be able to communicate, docker-compose can be used.
				5) Docker-compose down
					a) Stop and delete the running containers by docker-compose
			ii. Container maintenance :
			iii. Automatic container restart
	Install docker on ubuntu
	https://www.digitalocean.com/community/tutorials/how-to-install-and-use-docker-on-ubuntu-18-04
	
	2. Manipulating containers with the Docker client
		a. Docker run hello-world  
			i. Docker run [operation] [image name]
			ii. Here with this command docker client will take the input that I want the image of "hello-world" to the docker server
			iii. Docker server checks if the image is present in image cache(local machine).
			iv. So when we hit this command first time, cache is empty. 
			v. So docker server will reach out to docker hub where several images are already present for the public use.
			vi. So docker server will download the hello-world image to image cache. 
			vii. Container is the instance of image.
			viii. Now by using this image it will get's printed the "hello-world".
		b. Docker run busybox echo hi there
			i. Here docker client will get the image of busybox and echo is the command available in busybox tool, it will display "hi there" on console. 
		c. Docker run busybox ls
			i. Ls will display the files and directory under the busybox image container
		d. Docker ps 
			i. Display the active container
		e. Docker ps -all
			i. Display all the container you have created in past
		f. Docker run hello-world
			i. Run I combination of two commands
			ii. Docker run = docker create + docker start
		g. Docker system prune
			i. This will remove all stopped containers. 
			ii. All networking not used by at least one container.
			iii. All dangling images
			iv. All build cache
		h. Docker logs <docker_ID>
		i. Sudo docker exec -it docker id /bin/bash
			i. If you want to go to root to that container, in case if you're out of docker container
			ii. It- allow us to provide input to the container. 
			iii. /bin/bash -> provides the shell to the container from where user can write input commands 
		j. docker load -i <export_image_name>.tar
			i. This we are using to replace the docker image into sonic vm
		k. Sudo docker stop dockerID
		l. Docker stop containerID - SIGTERM
		m. Docker kill containerID - SIGKILL
			i. When you want to stop the docker
		n. Executing command in running container. 
			i. Docker run redis => this command will start the redis server on container, now we need to run the  as well inside the container.
			ii. So what we can do is
			iii. Docker exec -it <container_ID> redis-cli
		o. What container is?
		
		
		
		
Kubernetes Udemy
What is kubernetes and why to use it
	A. Used to manage the containers
	B. It is a system for running many different containers over multiple machines.
	C. When you need to run many different containers with different images. 
	D. Kebernetes clusters can be created which may contains multiple container over the multiple machine. 
	E. In kubernetes containers exist in a form of pods
	F. Minikube is used to create and run the kubernetes cluster on your local development machine.
	G. Cubectl 

Intel SmartNIC specific:
	- Talking about kubernetes, there are three packages we need to install
		○ Kubectl - used in our command, Command line interface for interacting with our Master 
		○ Kubelet -  a service that must and should be up to make run kubernetes successfully. 
		○ Kubeadm - kubernetes administration. Can Initiate your cluster. We can make master/controller node by using this package. 



