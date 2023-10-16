                ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄
                ██░▄▄▄░█▄░▄██░▄▀▄░██░▄▄░██░█████░▄▄▄████░▄▄▄░██░██░██░▄▄▄██░█████░███
                ██▄▄▄▀▀██░███░█░█░██░▀▀░██░█████░▄▄▄████▄▄▄▀▀██░▄▄░██░▄▄▄██░█████░███
                ██░▀▀▀░█▀░▀██░███░██░█████░▀▀░██░▀▀▀████░▀▀▀░██░██░██░▀▀▀██░▀▀░██░▀▀░
                ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
                                        By: SaadM33 - saad484
## Introduction
This is a simple UNIX command line interpreter implemented in C. It provides a basic shell environment where users can execute commands.

## Requirements
Simple_shell is designed to run in the `Ubuntu 14.04 LTS` linux environment and to be compiled using the GNU compiler collection v. `gcc 4.8.4` with flags `-Wall, -Werror, -Wextra, and -pedantic`.

## Installation and Compilation
Do you need clone [this repository](https://github.com/SaadM33/simple_shell/):
```
	git clone https://github.com/SaadM33/simple_shell/
```
And then you can compile with this command:
```
	gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
After the compilation you can excecute with this command:
```
	./hsh
```

## How to Use

- Compile the program to create the `hsh` executable file (see instructions above).
- run the executable as follows `./hsh`
- Enter basic commands like: `ls`, you can add flags along with `ls` command such as `-l`, `-la`(`ls -l`, `ls -la`)
- Press enter after entering the command
- to end the execution of the `simple_shell` program press `ctrl + d` or write the word `exit`

### Interactive mode

```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

### non-Interactive mode
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
```


