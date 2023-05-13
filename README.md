<p align = "center">
<img width="700px" height="250" src=./pictures/alx-se-logo.jpg>
</p>

## Background Context
This is a team project for ALX SE Programme . We have to create a Simple shell !

Our team - Nacer-eddine and Aderinlola - respectively - :

![Team project Simple Shell](./pictures/)

## Learning Objectives

At the end of this project, we are expected to be able to explain to anyone, without the help of Google:
#### General

    - Who designed and implemented the original Unix operating system
    - Who wrote the first version of the UNIX shell
    - Who invented the B programming language (the direct predecessor to the C programming language)
    - Who is Ken Thompson
    - How does a shell work
    - What is a pid and a ppid
    - How to manipulate the environment of the current process
    - What is the difference between a function and a system call
    - How to create processes
    - What are the three prototypes of main
    - How does the shell use the PATH to find the programs
    - How to execute another program with the execve system call
    - How to suspend the execution of a process until one of its children terminates
    - What is EOF / “end-of-file”?
    
## Requirements

#### General

    Allowed editors: vi, vim, emacs
    All of our files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
    All of our files should end with a new line
    A README.md file, at the root of the folder of the project is mandatory
    Our code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    Our shell should not have any memory leaks
    No more than 5 functions per file
    All of our header files should be include guarded
    We use system calls only when you need to

## Requirements

#### Output
   - Unless specified otherwise, your program must have the exact same output as sh (/bin/sh) as well as the exact same error output.
   - The only difference is when you print an error, the name of the program must be equivalent to your argv[0] (See below)
 Example of error with 'sh':
 ```
 $ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
```
Same error with your program 'hsh':
```
$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$
```

### List of allowed functions and system calls
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
- getpid (man 2 getpid)
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

### Compilation
Our shell will be compiled this way:

```gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh```

### Testing
Our shell should work like this in interactive mode:
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
But also in non-interactive mode:
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

### Checks
The Checker will be released at the end of the project (1-2 days before the deadline). We strongly encourage the entire class to work together to create a suite of checks covering both regular tests and edge cases for each task. See task 8. Test suite.

## Challenges and group work

### *First part*

Aderinlola and I started the project by learning the concepts. The first part, has been doing some exercises. This part was about to learn the main functions we were expected to use for the simple_shell program. This part was very intensive, interesting and collaborative.

### *Second part*

????????????

### *Last part*

????????????

## Tools

| emacs | google doc | vim |
|:---:|:---:|:---:|
| <img width="50" height="50" src=./pictures/logo_emacs.png> | <img width="55" height="55" src=./pictures/logo_google_doc.png> | <img width="55" height="55" src=./pictures/logo-vim.png>

## Cloning the repo
To clone thid repository, run the command:
```
git clone git@github.com:Nacer-eddine1/simple_shell.git
```

## Authors

| Nacereddine Kheireddine | Aderinlola Daramola |
|:---:|:---:|
|<a href="https://www.linkedin.com/in/k-nacereddine/"> <img alt="NACER-EDDINE KHEIREDDINE Linkedin" width="40px" src=./pictures/logo_linkedin.png> <a href="https://github.com/Nacer-eddine1"> <img alt="NACER-EDDINE KHEIREDDINE Github" width="40px" src=./pictures/logo_github.png> | <a href="https://www.linkedin.com/in/aderinlola-daramola-4974a823a/"> <img alt="Aderinlola Daramola Linkedin" width="40px" src=./pictures/logo_linkedin.png> <a href="#"> <img alt="Aderinlola Daramola Github" width="40px" src=./pictures/logo_github.png> |
