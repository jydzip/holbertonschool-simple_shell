# C - Simple Shell

## About this project
#### Linux Shell Project

This project is a simplified version of the Linux shell, developed as part of a group school project.

## Objective

The aim of this project is to create a shell capable of interpreting and executing simple commands, similar to those found in Linux-based operating systems.

## What is the shell?

The **shell** is a program that takes commands from the keyboard via the terminal, and gives them to the operating system to perform. [documentation shel](https://www.geeksforgeeks.org/introduction-linux-shell-shell-scripting/)

# Requirements
- [![MIT License](https://cdn.discordapp.com/attachments/1227887926935945216/1231344477428256868/images.png?ex=66369de8&is=662428e8&hm=f403c03b5f313bc107a1f44877011f7ebc46a605cb7e15370582f4a30ba2271c&)](https://gcc.gnu.org/)
GCC Language standard **gnu89**

- [![MIT License](https://cdn.discordapp.com/attachments/1227887926935945216/1231344200226836561/2048px-Logo-ubuntu_cof-orange-hex.svg.png?ex=66369da6&is=662428a6&hm=048e469c3d03d9076c91f408e514c20aaba94d72d499e7ee8a8eef87364ff63d& )](https://releases.ubuntu.com/focal/)Ubuntu
**20.04 LTS**

- And minimal understanding of C language


## List of allowed functions and system calls for this project
- access (man 2 access)
- chdir (man 2 chdir)
- close (man 2 close)
- closedir (man 3 closedir)
- execve (man 2 execve)
- exit (man 3 exit)
- _exit (man 2 _exit)
- fflush (man 3 fflush)
- fork (man 2 fork)
- free (man 3 free)
- getcwd (man 3 getcwd)
- getline (man 3 getline)
- isatty (man 3 isatty)
- kill (man 2 kill)
- malloc (man 3 malloc)
- open (man 2 open)
- opendir (man 3 opendir)
- perror (man 3 perror)
- read (man 2 read)
- readdir (man 3 readdir)
- signal (man 2 signal)
- stat (__xstat) (man 2 stat)
- lstat (__lxstat) (man 2 lstat)
- fstat (__fxstat) (man 2 fstat)
- strtok (man 3 strtok)
- wait (man 2 wait)
- waitpid (man 2 waitpid)
- wait3 (man 2 wait3)
- wait4 (man 2 wait4)
- write (man 2 write)



# USAGE
### Installation
**step 1:** Clone the repo
```bash
$ https://github.com/jydzip/holbertonschool-simple_shell.git
```
**Step 2:** Change directory to simple_shell:
``` bash 
$ cd simple_shell
```
**Step 3:** install **[GCC](https://www.cherryservers.com/blog/how-to-install-gcc-on-ubuntu#what-is-gcc)** to Ubuntu
**20.04 LTS**
```bash
$ sudo apt update
$ sudo apt install build-essential
```


### Compilation
```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
Run the **shell**
```bash
./hsh
```
### Exiting the hell: When  you want to exit the *shell*
1: Type the command "exit"
```
$ exit
```
2: Press on **Ctrl + x**

## Example of Usage
![img](https://cdn.discordapp.com/attachments/1210604243225026591/1232062330037211187/image.png?ex=662816f6&is=6626c576&hm=1e53ff557cb842fc8cfe9780ceb17ef28498f16130d79ed67deee6db31fc6727&)


# Files
- [main.c](https://github.com/jydzip/holbertonschool-simple_shell/blob/main/main.c)

- [path.c](https://github.com/jydzip/holbertonschool-simple_shell/blob/main/path.c)

- [shell.c](https://github.com/jydzip/holbertonschool-simple_shell/blob/main/shell.c)

- [shell.h](https://github.com/jydzip/holbertonschool-simple_shell/blob/main/shell.h)

- [split_line.c](https://github.com/jydzip/holbertonschool-simple_shell/blob/main/split_line.c)

- [AUTHORS](https://github.com/jydzip/holbertonschool-simple_shell/blob/main/AUTHORS) : listing all individuals having contributed content

- [README.md](https://github.com/jydzip/holbertonschool-simple_shell/blob/main/README.md) : Description about the project repo

## Contribution

This project is being developed in collaboration with other students as part of a team effort. Any additional contribution is welcome.

## Authors

This project was carried out by Jeremy Marc and youssoup as part of for [Holberton School](https://www.holbertonschool.fr/) taking part of the "Low-level programming & C - Simple Shell
