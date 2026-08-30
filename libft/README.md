*This project has been created as part of the 42 curriculum by obhanja.*

Libft

Description


Libft is my own implementation of a C library, where I rebuilt a set of standard C library (libc) functions from scratch, along with additional utility functions for strings, memory, and file descriptor output. On top of that, the project also required building a singly linked list implementation from the ground up. The point of the project is to really understand how these functions work internally instead of just using them, and to get comfortable with core C concepts like pointers, memory allocation, and recursion along the way.

The library is split into three parts:

    Part 1: reimplementations of standard libc functions (ft_strlen, ft_memcpy, ft_strchr, ft_atoi, character checks like ft_isalpha, etc.)
    Part 2: additional string utilities built on top of Part 1 (ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa), function-pointer based functions (ft_striteri, ft_strmapi), and file descriptor output functions (ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd)
    Part 3: a singly linked list (t_list) with functions to create, add, count, iterate, transform, and free nodes

Every function follows the 42 Norm and compiles cleanly with -Wall -Wextra -Werror, with attention paid to memory leaks, invalid frees, and edge cases like NULL pointers and integer overflow.
Instructions
Compilation

make

This builds all the mandatory source files and creates the static library libft.a at the root of the repository.
Other rules

make clean    # removes object (.o) files
make fclean   # removes object files and libft.a
make re       # fclean then rebuild everything
make bonus    # compiles the Part 3 linked list functions

Using it in another project

Copy the libft folder into your project, then include the header:

#include "libft/libft.h"

And link against libft.a in your own Makefile, compiling it first with make -C libft.
Resources

    The man pages for the original libc functions (man strlcpy, man memmove, etc.) were my main reference for getting the exact expected behavior and edge cases right.
    Stack Overflow, for understanding how some of the trickier functions were supposed to behave, and for general Makefile syntax.
    YouTube tutorials, for help putting together the Makefile.
    Claude (AI): I used Claude throughout the project to help me understand the intricate parts of the logic that I was struggling with, especially recursion, loops, and how linked lists work. Rather than writing the code for me, it walked me through the logic with questions so I could work it out myself, and helped me debug compilation errors, segfaults, and norminette issues by tracing through my code with me.

Library description
Part 1 — Libc functions
Function 	Description
ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint 	Character classification checks.
ft_strlen 	Length of a string.
ft_memset, ft_bzero 	Fill a block of memory with a value (or zero).
ft_memcpy, ft_memmove 	Copy bytes between memory areas; memmove handles overlap safely.
ft_strlcpy, ft_strlcat 	Size-bounded string copy and concatenation.
ft_toupper, ft_tolower 	Case conversion.
ft_strchr, ft_strrchr 	Find first/last occurrence of a character in a string.
ft_strncmp 	Compare up to n characters of two strings.
ft_memchr, ft_memcmp 	Find a byte in / compare memory areas.
ft_strnstr 	Find a substring within the first n characters.
ft_atoi 	Convert a string to an integer.
ft_calloc 	Allocate and zero out memory.
ft_strdup 	Duplicate a string on the heap.
Part 2 — Additional functions
Function 	Description
ft_substr 	Extract a substring from a starting index and length.
ft_strjoin 	Concatenate two strings into a new one.
ft_strtrim 	Remove leading/trailing characters from a given set.
ft_split 	Split a string into an array of strings by a delimiter.
ft_itoa 	Convert an integer to a string.
ft_strmapi 	Apply a function to each character of a string, building a new string.
ft_striteri 	Apply a function to each character of a string in place.
ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd 	Output a character, string, string with newline, or number to a file descriptor.
Part 3 — Linked lists

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

Function 	Description
ft_lstnew 	Create a new node with the given content.
ft_lstadd_front 	Add a node to the beginning of the list.
ft_lstadd_back 	Add a node to the end of the list.
ft_lstsize 	Count the nodes in the list.
ft_lstlast 	Return the last node of the list.
ft_lstdelone 	Free a node's content and the node itself.
ft_lstclear 	Free the whole list.
ft_lstiter 	Apply a function to each node's content.
ft_lstmap 	Apply a function to each node's content, building a new list.