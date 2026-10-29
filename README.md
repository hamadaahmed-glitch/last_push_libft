*This project has been created as part of the 42 curriculum by hait-h-m.*

## Description

Libft is a custom C library that reimplements standard libc functions and adds additional utilities for strings, memory, and linked lists.

## Instructions

Run `make` to build `libft.a`. Use `make clean` to remove object files, `make fclean` to remove objects and the library, and `make re` to rebuild everything.

## Resources

- man pages for `strlen`, `memcpy`, `strlcpy`, etc.
- geeksforgeeks.org
- 42 subject PDF


## Description

Libft is my first own library in C. The goal of this project is to understand how some basic functions from the C standard library work by writing them myself.

The library has three parts:

1. **Part 1 – Libc functions:** I rewrote functions that already exist in the C library, like `strlen`, `memcpy`, `strchr`, and `atoi`. The only difference is that my functions start with `ft_`, for example `ft_strlen`.

2. **Part 2 – Additional functions:** I wrote new functions that are useful when working with strings and memory, like `ft_substr` (to take a part of a string), `ft_split` (to cut a string into words), `ft_strtrim` (to remove characters from the start and end), and `ft_itoa` (to turn a number into a string).

3. **Part 3 – Linked list:** I wrote functions to work with linked lists using a structure called `t_list`. A linked list is a chain of nodes, where each node has some data and a pointer to the next node. Functions like `ft_lstnew`, `ft_lstadd_front`, and `ft_lstclear` help create, add, and delete nodes.

All the functions are compiled together into one library file called `libft.a`. This library can be used in future C projects at 42 \ 1337.

## How it works

- Each function is written in its own `.c` file.
- All the function declarations are in `libft.h`.
- The `Makefile` compiles all the `.c` files into object files (`.o`) and then uses `ar` to put them into `libft.a`.

## Instructions

To compile the library, run:

```bash
make
```

This creates `libft.a` in the same folder.

Other commands:

- `make clean` – deletes the `.o` files.
- `make fclean` – deletes the `.o` files and `libft.a`.
- `make re` – deletes everything and compiles again from zero.

## Resources

- The Libft subject PDF from 42.
- Man pages for C functions like `strlen`, `memcpy`, `strlcpy`, and `atoi`.
- geeksforgeeks.org
- Discussions with other students to understand how some functions should behave.
