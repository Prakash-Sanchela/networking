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

