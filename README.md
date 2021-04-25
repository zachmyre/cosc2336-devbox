# Data Structures and Algorithms Assignments #

Class assignments and configuration for COSC 2336 Data Structures and
algorithms, [Texas A&M University - Commerce](https://www.tamuc.edu/).

# Who is this repository for? #

This repository is for students taking COSC 2336: Data
Structures and Algorithms.  You should start by following the
Getting Started instructions next, to get your required
class box set up for the assignments and class activities for this
course.  Our class box is a virtual box instance running an Ubuntu
Linux distribution with a standard Gnome desktop.  Your class box
virtual instance has all of the tools, compilers, libraries and editors
that you need to work on the assignments and tests you are required
to complete for this class. In essence the class box you will use
provides a standard set up, as in a computer lab, but that you can
obtain and run on your own personal computing system.  A laptop with
4GB of main memory should be sufficient to run the class box, though
8GB or more would be ideal.

Additional information about the class textbooks and materials can also
be found below in this README, or should also be available on the
[MyLeoOnline](https://myleoonline.tamuc.edu/d2l/home)
D2L course shell created for this semester's class.

## Getting Started

The primary goal of this course is to learn and become familiar with
the use and implementation of basic data structures, such as stacks,
queues and trees, and to understand their algorithmic complexity.
Thus a large part of this class involves using and implementing
these data structures and algorithms for class assignments.

We have made available a Linux code development environment and
desktop environment in a Vagrant
virtual box.  It is imperative that you have your environment up and
running, preferably by Tuesday of the first week.  I will usually
ask all students to send me a report or submit some work within the
first few days of class that shows you have completed setting up
your class box.

In general, no matter which OS you have on your personal computing system, you need
to perform the following steps:

1. Install [git](https://git-scm.com/)
distributed revision control system tools if they are not
already available on your personal computing system.
2. Install Oracle's [VirtualBox](https://www.virtualbox.org/)
open source virtualization solution on your system to run the
Vagrant virtual server box.
3. Install the [Vagrant](https://www.vagrantup.com/)
virtualization management tools.
4. Clone this course's repository to your system using `git clone`.
5. Use `vagrant up` to boot up and provision your class development box.

The first 3 steps are system dependent, but should only require use of
a standard OS installer to accomplish.  Once you have git, VirtualBox
and Vagrant on your  system, you should be able to clone the class
repository, start the vagrant virtual box and provision it, and then
run and access your development desktop in a similar manner
no matter which OS you are using.

Video tutorials for performing the following installs and setup can be found here.

- [Video Instructions for Windows OS](https://youtu.be/jFHY9gN9LRM)
- [Video Instructions for Mac OS](https://youtu.be/mWLjYXxLS7o): This video was made
  for a different class, but the first 3 steps to install git, VirtualBox and 
  Vagrant are the same and shown.  Watch this video up to time 14:30.  Then you can
  watch the Windows OS Getting Started video starting at time
  [26:07](https://youtu.be/jFHY9gN9LRM?t=1567), to see
  instructions for cloning the repository from the command line and for starting
  the virtual box.

#### 1. Download and Install git client

If you are on MacOS or Linux you most likely have git already installed.

**Windows OS Instructions**

- Download the git installer for Windows from the official
[git-scm Downloads](https://git-scm.com/download/win)
site that develops the git tools.
- **NOTE**: This is a standard windows installer, so once downloaded run it.  You can
accept most of the suggested defaults, except when it asks about how to handle
newlines/line feeds/carriage returns.  For this default select the third
option to leave newlines as they are, without translating them.  
- After installing, open a
[command line terminal](https://www.computerhope.com/issues/chusedos.htm)
and test that you have the git command line tool available:
```
C:\Users\username> where git
C:\Program Files\Git\cmd\git.exe
```
```
C:\Users\username> git --version
git version 2.27.0.windows.1
```
If you instead see the message `INFO: Could not find files for the given patern(s).` then git was either not installed, or it was not added to your
[PATH environment variable](https://www.computerhope.com/issues/ch000549.htm)
correctly.  Make sure git is installed and runnable
from the command line before proceeding to the next step.

**MacOS and Linux Instruction**

Git should most likely already be installed on your system by default.
To test, open a terminal ([How To Open a Terminal in MacOS](https://www.businessinsider.com/how-to-open-terminal-on-mac))
and try finding the `git` command:
```
$ which git
/usr/bin/git
```
```
$ git --version
git version 2.25.1
```

On MacOS if you need to install Git, you can go to the link above for
the Windows OS and download the git installer for MacOS.  This is a
standard MacOS based app installer.  Alternatively I recommend installing
the [brew package manager](https://brew.sh/),
which adds open source package management to a
standard MacOS system.  With brew installed, you can use it to install git:

```
$ sudo brew install git
```

On a Linux OS system, use your distributions package manager to
install the git package.  This is most likely something like the `apt` or `yum`
command, depending on which distribution of Linux you are using:
```
# debian based systems like Ubuntu use apt package manager
$ sudo apt install git
```
```
# Fedora based systems like CentOS likely use yum, or dnf for more recent distros
$ sudo yum install git
```

#### 2. Install VirtualBox Virtualization Tools

You will need to install VirtualBox on your system to use the vagrant box
setup given to you for this class.  A standard app installer/package is provided
on the [VirtualBox Downloads](https://www.virtualbox.org/wiki/Downloads)
site for Windows, MacOS X and Linux distributions.  Download the
installer and install it in the standard way for your operating system.
You should be able to accept all the defaults offered by the installer for your
system.

Once installed, a graphical interface for VirtualBox is available that you
should be able to search for from your start menu and run.  Also a command
line tool should be installed and working.  Open a command line terminal
or shell on your system and test that the `VBoxManage` command is available
and in your path.  On Linux and MacOS X it should be installed in a standard
location that will be on your usual system path:
```
# on MacOX and Linux use the which command, on Windows use where instead
# MacOS / Linux
$ which VBoxManage
/usr/bin/VBoxManage
$ VBoxManage --version
6.1.12r138449
```

On Windows OS the installer does not add the location of the VirtualBox command
line tools to your PATH.  You can either add `C:\Program Files\Oracle\VirtualBox` to your PATH, or you can change to this directory or specify the full path name to run the `VBoxManage.exe` tool from the command
line:
```
# Windows
> "C:\Program Files\Oracle\VirtualBox\VBoxManage.exe" --version
6.1.12r138449
```
The location of the PATH where the executable resides and the version
number may differ slightly.  As of the writing of this README,
you should have at least VirtualBox version 6.1.12 or higher installed on
your system.


#### 3. Install Vagrant Virtualization Management Tools

Vagrant greatly simplifies managing and spinning up virtual box instances.
You have been given a Vagrantfile in the class repository that should
spin up and provision a full Linux desktop development vagrant box.

Again standard install packages are provided on the
[Vagrant Download](https://www.vagrantup.com/downloads)
site for Windows, MacOS X and Linux systems.
Download the installer or package appropriate for your OS and
install it.  Accept the suggested defaults for all questions for the install.
Both VirtualBox and Vagrant may require a system reboot (especially on Windows),
so once you have Vagrant successfully installed, it is a good idea to reboot
your system at this point before continuing.

**NOTE Windows Users** Before rebooting, you should check and disable Hyper-V
if it is enabled on your system.  If you don't see the Hyper-V feature, you
may instead have Virtualization Based Security (VBS).  If so, you may (or may not)
see issues when you try and install/bootstrap your virtual box. If you have VBS
and run into inssues, contact the instructor.

- [Virtualization applications do not work together with Hyper-V](https://support.microsoft.com/en-us/help/3204980/virtualization-applications-do-not-work-together-with-hyper-v-device-g)

**Reboot System**

When you reboot your system to make sure that the VirtualBox and the
Vagrant installs completely take effect, we suggest you also
check your BIOS settings and make sure that you have hardware virtualization
enabled.  VirtualBox and Vagrant will not work if hardware virtualization
is not enabled.  This is probably enabled now a days by default?  but best
to explicitly check it.

When booting up, enter your system BIOS

- [How to Enter the BIOS on Any PC: Access Keys by Manufacturer](https://www.tomshardware.com/reviews/bios-keys-to-access-your-firmware,5732.html)

Usually the `F2` key should work, but if not there should usually be
a message on your first boot screen telling you what the BIOS access
key is.

In your BIOS, find the setting for hardware Virtualization

- [Enabling Virtualization in your PC BIOS](https://bce.berkeley.edu/enabling-virtualization-in-your-pc-bios.html)

This setting should be in your BIOS menu under the Processor or CPU settings.
And as the link says, it will probably be called either `VT-x` or  `AMD-V`.
Make sure it is enabled.

**After Reboot**

Again once installed it is a good idea to confirm that the command line
tools are available before moving on.  Since `vagrant` is mainly intended
to be used from the command line, this time if you are a Windows user you should
find that the command has been added to your PATH for you.

To test, use the `where` or `which` command, and try running `vagrant` asking
for the installed version.  If the command cannot be found, you need to
stop and check your install and insure your PATH is set correctly.

```
# MacOS / Linux use which to see if vagrant tool in PATH
$ which vagrant
/usr/bin/vagrant
```
```
# WindowsOS use where instead
> where vagrant
C:\HashiCorp\Vagrant\bin\vagrant.exe
```
```
# if it is on your path, test you can run it by determining which version you are on
$ vagrant --version
Vagrant 2.2.9
```
As of the writing and testing of this README, you should have installed Vagrant
version 2.2.9 or higher on your system now.


#### 4. Clone the Class Git Repository

At this point you should successfully have all of the tools you need for the
class installed.  We will now use them to clone the class repository and
create and provision our class dev environment box.

The clone step is easy.  You can use graphical git tools if you are more
familiar with them. We will not be using git in the usual way in this class,
for shared software development.  You will simply use git to pull down the
class files and assignments onto your system, and to receive updates and
fixes while the class is being conducted.

To clone the class repository from the command line, change to the directory you
want to clone a copy of the class files into, then run the git command. I
usually recommend to have a directory named `repos` in my home directory where I
keep all of my repositories.  On Windows, MacOS and Linux you can use `mkdir`,
`cd`, and the `git` command to accomplish this from a command line terminal
or shell:
```
# create a directory called repos, this assumes you are currently in your home directory
$ mkdir repos
```
```
# change into the repos directory to be your current working subdirectory
$ cd repos
```
```
# clone the class repository into your current directory
$ git clone https://bitbucket.org/dharter/cosc2336-ds-alg.git
```

The clone is basically like a download of the files.  If you are in the
`repos` directory, there will now be a new subdirectory named `cosc2336-ds-alg`
that contains all of the files for the class that were just downloaded.

#### 5. Start and Provision your Class Development Box

Assuming you just completed the previous step 4, you are now in the `repos`
directory, and you just cloned a copy of the `cosc2336-ds-alg` directory.
Change into the class repository directory from the command line:
```
$ cd cosc2336-ds-alg
```

In the next step we will attempt to start and provision your vagrant box.
The box will download and start a new virtual machine, install all of the
needed development tools and editors, and configure some of the tools
for you.

To start the vagrant box and have it provision itself run the following command
from a terminal in your `cosc2336-ds-alg` repository directory:
```
$ vagrant up
```

This step will take some time.  On my rural Texas DSL I tend to get 100 to
500 k/sec download when I run this.  The base `virtualbox.box` image will
first be downloaded.  This usually takes about 20-40 minutes or so from my
home to complete.  If the base image successfully downloads, the installer
will then attempt to install and configure the development environment tools.
This will again take probably 20-40 minutes depending on your internet speed.

If no errors occurs, close to the last thing you will see when the install finishes is a message from our Bootstrap provisioning script:
```
...
Cosc2336 class dev boxen successfully installed, desktop running!
```

If you instead see error messages in your terminal at the end, please copy them
and e-mail them to your instructor for advice on proceeding.

At this point, assuming no errors, your vagrant box instance is actually
up and running.  The box needs to be shutdown and brought back up again for
all of the kernal installations to take effect.  It should have automatically
shutdown for you.  But if the terminal windows of your virtual machine
remains up, you should first halt your box using the command:

```
$ vagrant halt
==> default: Unmounting NFS shared folders from guest...
==> default: Forcing shutdown of VM...
```

You should see that the box is shutdown and not get any error messages.
Then bring the box back up again.  Once the base image is downloaded,
and the box is provisioned and set up, bringing it up again should be
relatively quick.  It will boot in a minute or less usually.

```
$ vagrant up
Bringing machine 'default' up with 'virtualbox' provider...
==> default: Checking if box 'ubuntu/focal64' version '20200702.0.0' is up to date...
==> default: Clearing any previously set forwarded ports...
==> default: Clearing any previously set network interfaces...
==> default: Preparing network interfaces based on configuration...
    default: Adapter 1: nat
==> default: Forwarding ports...
    default: 22 (guest) => 2222 (host) (adapter 1)
==> default: Running 'pre-boot' VM customizations...
==> default: Booting VM...
==> default: Waiting for machine to boot. This may take a few minutes...
    default: SSH address: 127.0.0.1:2222
    default: SSH username: vagrant
    default: SSH auth method: private key
==> default: Machine booted and ready!
[default] GuestAdditions 6.1.10 running --- OK.
==> default: Checking for guest additions in VM...
==> default: Mounting shared folders...
    default: /home/vagrant/repos/cosc2336-ds-alg => c:/Users/dash/repos/cosc2336-ds-alg
==> default: Machine already provisioned. Run `vagrant provision` or use the `--provision`
==> default: flag to force provisioning. Provisioners marked to run always will still run.

```

Things to check here.  You might get some warnings, like your base box is
out of date, or other things.  Usually warnings are not issues you need to
worry about, but if you have a question send me the warning message.

What you want to ensure here includes:

- You should see that port 22 on the guest is forwarded to some port on your
  host.  This provides ssh access into your guest machine if needed.
- Hopefully you will see that the GuestAdditions are running ok.  These
  can sometimes have problems.  
- Finally your repository should be mounted from your host machine to
  your guest.  This is the line that says
  ```
  default: /home/vagrant/repos/cosc2336-ds-alg => c:/Users/dash/repos/cosc2336-ds-alg
  ```
  The location of the directory on your host will differ, but it should be
  the location of the repository you cloned in step 4 above.  This
  sharing and mounting of your repository directory allows you to access
  and open the files and share them between your host computer OS and
  your guest virtual box.

If you see that the machines is booted and ready! now, you can then
proceed to try and log into your class development box.

# Using Your Class Dev Box

When you reboot your class dev box it should bring up a window already
automatically logged in to the default `vagrant` user.  You can use
this desktop to run your editors, compilers and other tools.

There are 2 users defined for your box, both with `sudo` privileges, which
means they are both considered super user accounts and can both install
software and modify the system.

- Username: vagrant  Password: vagrant
- Username: ubuntu   Password: ubuntu

If you want to modify your box, add software, etc. you may need one or the
other of these account passwords to perform admin tasks.

You may want to familiarize yourself with basic Linux command line
tools and commands.  A recommended resource is the
[Software Carpentry Unix Command Line Lessons](http://swcarpentry.github.io/shell-novice/).

You can resize the desktop window.  However resizing the window by dragging
a corner might not work well (because of video driver issues).  You should
instead use the VirtualBox menu at the top and choose
`View->Full Screen Mode` to use your full window, or else use
`View->Virtual Screen 1->resolution` to pick a standard display resolution
that will work for the video driver and keep your desktop in a window on
your host OS.

The following code editors should be installed.  It is recommended that
you use Visual Code as the editor of choice for this class.

- Emacs [tutorial](https://opensource.com/article/20/3/getting-started-emacs)
- Vim [tutorial](https://www.openvim.com/)
- Visual Code [tutorial](https://code.visualstudio.com/docs/introvideos/basics)
- Atom [tutorial](https://flight-manual.atom.io/)
- Sublime [tutorial](https://www.tutorialspoint.com/sublime_text/index.htm)

When you want to shut down your class dev box, you should either use
the standard Ubuntu OS shutdown procedure from within your dev box
(accessed on upper right hand corner with the system settings), or
use the `vagrant halt` command on your host machine at a command line
terminal.

# Additional Course Information and Resources

## Course textbooks

The required course textbooks are:

- Malik, D. S. “C++ Programming: From Problem Analysis to Program Design”, 6ed. (or higher) Cengage Learning, 2013. (ISBN: 978-1133626381). ([7 th edition published in 2014](https://www.amazon.com/Programming-Problem-Analysis-Program-Design/dp/1285852745/ref=sr_1_2?dchild=1&keywords=malik+c%2B%2B+programming+7th+edition&qid=1597330250&sr=8-2) or newer edition should work).

- Shaffer, C.A. “Data Structures and Algorithm Analysis”, Dover Publications. http://people.cs.vt.edu/~shaffer/Book/

## Class Video Lectures

- [COSC 2336 Official Class YouTube Video Lecture Playlist](https://www.youtube.com/playlist?list=PLKELFBqOW0CcnGb7vCvkMxKJeGmucafQH)

# Who do I talk to? #

* Course Instructor: derek dot harter at tamuc dot edu
