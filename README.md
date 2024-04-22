# C - Simple Shell

In this project, we are creating Shell "ls" "-l"

## List of allowed functions and system calls+
all functions from string.h
- access (man 2 access)
- chdir (man 2 chdir)
- close (man 2 close)
- closedir (man 3 - closedir)
- execve (man 2 execve)
- exit (man 3 exit)
- exit (man 2 _exit)
- fflush (man 3 fflush)
- fork (man 2 fork)
- free (man 3 free)
- getcwd (man 3 getcwd)
- getline (man 3 getline)
- getpid (man 2 getpid)
- isatty (man 3 isatty)
- kill (man 2 kill)
- malloc (man 3 malloc)
- open (man 2 open)
- opendir (man 3 opendir)
- perror (man 3 perror)
- printf (man 3 printf)
- fprintf (man 3 fprintf)
- vfprintf (man 3 vfprintf)
- sprintf (man 3 sprintf)
- putchar (man 3 putchar)
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

# Requirements
- [![MIT License](https://cdn.discordapp.com/attachments/1227887926935945216/1231344477428256868/images.png?ex=66369de8&is=662428e8&hm=f403c03b5f313bc107a1f44877011f7ebc46a605cb7e15370582f4a30ba2271c&)](https://gcc.gnu.org/)
GCC Language standard **gnu89**

- [![MIT License](https://cdn.discordapp.com/attachments/1227887926935945216/1231344200226836561/2048px-Logo-ubuntu_cof-orange-hex.svg.png?ex=66369da6&is=662428a6&hm=048e469c3d03d9076c91f408e514c20aaba94d72d499e7ee8a8eef87364ff63d& )](https://releases.ubuntu.com/focal/)Ubuntu
**20.04 LTS**


## Testing
#### Your shell should work like this in interactive mode:



```bash
example


$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

But also in non-interactive mode.

```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```
## Installation
1.Clone the repo 
```bash
https://github.com/jydzip/holbertonschool-simple_shell.git
```

2.install **GCC** "ubuntu"
```bash
sudo apt update
sudo apt install build-essential
```


## Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
# Files
- [main.c](https://github.com/jydzip/holbertonschool-simple_shell/blob/main/main.c) 

- [path.c](https://github.com/jydzip/holbertonschool-simple_shell/blob/main/path.c)

- [shell.c](https://github.com/jydzip/holbertonschool-simple_shell/blob/main/shell.c)

- [shell.h](https://github.com/jydzip/holbertonschool-simple_shell/blob/main/shell.h)

- [split_line.c](https://github.com/jydzip/holbertonschool-simple_shell/blob/main/split_line.c)

- [AUTHORS](https://github.com/jydzip/holbertonschool-simple_shell/blob/main/AUTHORS) : listing all individuals having contributed content

- [README.md](https://github.com/jydzip/holbertonschool-simple_shell/blob/main/README.md) : Description about the project repo
