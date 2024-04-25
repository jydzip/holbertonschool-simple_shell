# C - Simple Shell

## About this project
#### Simple Shell Project
This project is a simplified version of the Linux shell, developed as part of a group school project.

## Objective
The aim of this project is to create a shell capable of interpreting and executing simple commands, similar to those found in Linux-based operating systems.

## What is the shell?
The **shell** is a program that takes commands from the keyboard via the terminal, and gives them to the operating system to perform. [documentation shell](https://www.geeksforgeeks.org/introduction-linux-shell-shell-scripting/).

# Requirements
- [![GCC Logo](https://cdn.discordapp.com/attachments/1227887926935945216/1231344477428256868/images.png?ex=66369de8&is=662428e8&hm=f403c03b5f313bc107a1f44877011f7ebc46a605cb7e15370582f4a30ba2271c&)](https://gcc.gnu.org/) GCC Language standard **gnu89**

- [![Ubuntu Logo](https://cdn.discordapp.com/attachments/1227887926935945216/1231344200226836561/2048px-Logo-ubuntu_cof-orange-hex.svg.png?ex=66369da6&is=662428a6&hm=048e469c3d03d9076c91f408e514c20aaba94d72d499e7ee8a8eef87364ff63d& )](https://releases.ubuntu.com/focal/)Ubuntu **20.04 LTS**

- And minimal understanding of C language

# USAGE
### Installation
**Step 1:** Clone the repo
```bash
$ git clone https://github.com/jydzip/holbertonschool-simple_shell.git
```
**Step 2:** Change directory to `holbertonschool-simple_shell`:
``` bash 
$ cd holbertonschool-simple_shell
```
**Step 3:** install **[GCC](https://www.cherryservers.com/blog/how-to-install-gcc-on-ubuntu#what-is-gcc)** to Ubuntu
**20.04 LTS**
```bash
$ sudo apt update
$ sudo apt install build-essential
```

# Compilation
```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
Run the **shell**
```bash
$ ./hsh
```
### Exiting the "hell": When  you want to exit the *shell*
**Option 1**: Type the command "exit"
```
$ exit
```
**Option 2**: Press on **Ctrl+D**

## Example of Usage
![img](https://cdn.discordapp.com/attachments/1210604243225026591/1232062330037211187/image.png?ex=662816f6&is=6626c576&hm=1e53ff557cb842fc8cfe9780ceb17ef28498f16130d79ed67deee6db31fc6727&)

# Files
| File name | Description |
| :---------------: |:---------------:|
| [main.c](https://github.com/jydzip/holbertonschool-simple_shell/blob/main/main.c) | Main File, loop of the prompt |
| [split_line.c](https://github.com/jydzip/holbertonschool-simple_shell/blob/main/split_line.c) | Split input of the shell in tokens |
| [path.c](https://github.com/jydzip/holbertonschool-simple_shell/blob/main/path.c) | Retrieve and check the PATH and command exist |
| [shell.c](https://github.com/jydzip/holbertonschool-simple_shell/blob/main/shell.c) | Execute the command |

## Flowchart
![Flowchart](https://raw.githubusercontent.com/jydzip/holbertonschool-simple_shell/main/Simple_Shell_Simplify.png)

- [Draw.io Visual online](https://drive.google.com/file/d/1SPcrbn4VGkgl-Heq1jjZTIhxc7W8HNeZ/view?usp=sharing)

## Functions and system calls+ used
- access (`man 2 access`)
- execve (`man 2 execve`)
- exit (`man 3 exit`)
- fflush (`man 3 fflush`)
- fork (`man 2 fork`)
- free (`man 3 free`)
- getline (`man 3 getline`)
- isatty (`man 3 isatty`)
- malloc (`man 3 malloc`)
- printf (`man 3 printf`)
- fprintf (`man 3 fprintf`)
- strtok (`man 3 strtok`)
- waitpid (`man 2 waitpid`)

## Contribution
This project is being developed in collaboration with other students as part of a team effort. Any additional contribution is welcome.

## Authors
This project was carried out by [Youssoup](https://github.com/my-holber), [Jeremy](https://github.com/jydzip) and [Marc](https://github.com/Marc93x) as part of for [Holberton School](https://www.holbertonschool.fr/).
