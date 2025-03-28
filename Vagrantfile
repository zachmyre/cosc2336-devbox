# -*- mode: ruby -*-
# vi: set ft=ruby :

# All Vagrant configuration is done below. The "2" in Vagrant.configure
# configures the configuration version (we support older styles for
# backwards compatibility). Please don't change it unless you know what
# you're doing.
Vagrant.configure("2") do |config|
  # The most common configuration options are documented and commented below.
  # For a complete reference, please see the online documentation at
  # https://docs.vagrantup.com.

  # Every Vagrant development environment requires a box. You can search for
  # boxes at https://vagrantcloud.com/search.
  config.vm.box = "ubuntu/focal64"
  #config.vm.box_version = "20200617.0.0"

  # Disable automatic box update checking. If you disable this, then
  # boxes will only be checked for updates when the user runs
  # `vagrant box outdated`. This is not recommended.
  # config.vm.box_check_update = false

  # Create a forwarded port mapping which allows access to a specific port
  # within the machine from a port on the host machine. In the example below,
  # accessing "localhost:8080" will access port 80 on the guest machine.
  # NOTE: This will enable public access to the opened port
  # config.vm.network "forwarded_port", guest: 80, host: 8080

  # Create a forwarded port mapping which allows access to a specific port
  # within the machine from a port on the host machine and only allow access
  # via 127.0.0.1 to disable public access
  config.vm.network "forwarded_port", guest: 8080, host: 8080, host_ip: "127.0.0.1"

  # VNC Server is being served at port 5900 for desktop :0, additional desktops at 5901,5902,5903,etc
  # config.vm.network "forwarded_port", guest: 5900, host: 5900, host_ip: "127.0.0.1"
  
  # RDP Server is being served at standard port 3389 
  # config.vm.network "forwarded_port", guest: 3389, host: 3389, host_ip: "127.0.0.1"

  # Cloud9 IDE Server is being served at standard port 8080
  # current configuration conflicts with guacamole server at same port
  #config.vm.network "forwarded_port", guest: 8080, host: 8080, host_ip: "127.0.0.1"
  
  # Apache Guacamole htlm5 desktop Server is being served at standard port 8080
  #config.vm.network "forwarded_port", guest: 8080, host: 8080, host_ip: "127.0.0.1"

  
  # Create a private network, which allows host-only access to the machine
  # using a specific IP.
  # config.vm.network "private_network", ip: "10.0.2.15"

  # Create a public network, which generally matched to bridged network.
  # Bridged networks make the machine appear as another physical device on
  # your network.
  # config.vm.network "public_network"

  # Share an additional folder to the guest VM. The first argument is
  # the path on the host to the actual folder. The second argument is
  # the path on the guest to mount the folder. And the optional third
  # argument is a set of non-required options.
  # config.vm.synced_folder "../data", "/vagrant_data"
  # config.vm.synced_folder ".", "/vagrant", type:"nfs"
  config.vm.synced_folder ".", "/home/vagrant/sync"

  # Provider-specific configuration so you can fine-tune various
  # backing providers for Vagrant. These expose provider-specific options.
  # Example for VirtualBox:
  #
  config.vm.provider "virtualbox" do |vb|
    vb.name = "cosc2336-devbox"
    
    # Display the VirtualBox GUI when booting the machine
    vb.gui = false
  
    # Customize the amount of memory on the VM:
    vb.memory = "4096"
    vb.cpus = 1
    
    #vb.customize [ "modifyvm", :id, "--uart1", "0x3f8", "4" ]
    #vb.customize [ "modifyvm", :id, "--uartmode1", "file",
    #               File.join(Dir.pwd, "/log/ubuntu-focal-20.04-cloudimg-console.log") ]
    
    # Customize video memory
    #vb.customize ["modifyvm", :id, "--vram", "64"]
    # Enable 3D acceleration:
    # vb.customize ["modifyvm", :id, "--accelerate3d", "on"]
    #vb.customize ["modifyvm", :id, "--graphicscontroller", "VBoxSVGA"]
    # Shared Clipboard
    vb.customize ['modifyvm', :id, '--clipboard', 'bidirectional']
    # Enable Drag and Drop
    vb.customize ["modifyvm", :id, "--draganddrop", "bidirectional"]
    # Enable Remote Display
    #vb.customize ["modifyvm", :id, "--vrde", "on"]
    #vb.customize ["modifyvm", :id, "--vrdeport", "5000,5010-5012"]    
  end
  #
  # View the documentation for the provider you are using for more
  # information on available options.

  # Enable provisioning with a shell script. Additional provisioners such as
  # Ansible, Chef, Docker, Puppet and Salt are also available. Please see the
  # documentation for more information about their specific syntax and use.
  # config.vm.provision "shell", inline: <<-SHELL
  #   apt-get update
  #   apt-get install -y apache2
  # SHELL

  # bootstrap provisioners to be run on initial dev environment boot
  config.vm.provision "shell", path: "./scripts/bootstrap.sh"
  config.vm.provision "shell", inline: <<-SHELL
    echo "COSC 2336 class dev box successfully installed, code-server running!"
  SHELL
end
