#  Libft — 100/100 ✅


##  Overview

**Libft** is a library of fundamental C functions implemented from scratch as part of the **42 School curriculum**.
It includes a wide range of tools for **string manipulation**, **memory management**, **linked list operations**, and **input/output handling**.

The goal is to rebuild many standard C library functions to better understand their internal behavior, memory handling, and efficiency.

### What I learned

* Dynamic memory allocation and management (`malloc`, `free`).
* String and character manipulation.
* Linked list operations.
* Handling various data types.
* Creating and maintaining a reusable C library.

---

##  Getting Started

###  Prerequisites

* CC (GNU Compiler Collection)
* Make

###  Installation

Clone the repository:

```bash
git clone https://github.com/thorfinn61/libft.git
cd libft
```

Build the library:

```bash
make
```

This will create the static library:

```
libft.a
```

---

##  Functions

Libft is divided into several categories of functions:

###  Character Checking

* `ft_isalnum`
* `ft_isalpha`
* `ft_isascii`
* `ft_isdigit`
* `ft_isprint`

###  Conversion

* `ft_atoi`
* `ft_itoa`
* `ft_tolower`
* `ft_toupper`

###  Memory

* `ft_bzero`
* `ft_calloc`
* `ft_memchr`
* `ft_memcmp`
* `ft_memcpy`
* `ft_memmove`
* `ft_memset`

###  String

* `ft_split`
* `ft_strchr`
* `ft_strdup`
* `ft_striteri`
* `ft_strjoin`
* `ft_strlcat`
* `ft_strlcpy`
* `ft_strlen`
* `ft_strmapi`
* `ft_strncmp`
* `ft_strnstr`
* `ft_strrchr`
* `ft_strtrim`
* `ft_substr`

###  Linked List

* `ft_lstadd_back`
* `ft_lstadd_front`
* `ft_lstclear`
* `ft_lstdelone`
* `ft_lstiter`
* `ft_lstlast`
* `ft_lstmap`
* `ft_lstnew`
* `ft_lstsize`

###  Write

* `ft_putchar_fd`
* `ft_putendl_fd`
* `ft_putnbr_fd`
* `ft_putstr_fd`

---

##  Compilation

To compile the library, simply run:

```bash
make
```

This will build `libft.a`.

You can clean object files or rebuild everything:

```bash
make clean
make re
```

---

##  Usage

To use **Libft** in your own project:

1. Include the header file in your source files:

```c
#include "libft.h"
```

2. Link the library when compiling:

```bash
cc -Wall -Wextra -Werror -L. -lft your_program.c
```

---

##  Results

| Category         | Result                                |
| ---------------- | ------------------------------------- |
| Moulinette grade | 💯 **100/100**                        |
| Norminette       | ✅ Passed                              |
| Memory leaks     | 🚫 None                               |
| Functionality    | ✅ Matches standard C library behavior |
