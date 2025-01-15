# Libft

Libft is a custom implementation of the standard C library functions. This project is part of the 42 curriculum and aims to deepen the understanding of C programming by recreating commonly used functions from scratch.

## Table of Contents

- [Introduction](#introduction)
- [Functions](#functions)
	- [Memory Functions](#memory-functions)
	- [String Functions](#string-functions)
	- [Character Functions](#character-functions)
	- [List Functions](#list-functions)
- [Usage](#usage)
- [License](#license)

## Introduction

Libft is a library of functions that are commonly used in C programming. These functions include memory manipulation, string manipulation, character checks, and linked list operations. By implementing these functions, you will gain a deeper understanding of how they work and improve your C programming skills.

## Functions

### Memory Functions

- `ft_memset`: Fills a block of memory with a specified value.
- `ft_bzero`: Sets a block of memory to zero.
- `ft_memcpy`: Copies a block of memory from one location to another.
- `ft_memccpy`: Copies a block of memory until a specified character is found.
- `ft_memmove`: Copies a block of memory, handling overlapping regions correctly.
- `ft_memchr`: Searches for a character in a block of memory.
- `ft_memcmp`: Compares two blocks of memory.

### String Functions

- `ft_strlen`: Calculates the length of a string.
- `ft_strdup`: Duplicates a string.
- `ft_strcpy`: Copies a string to another string.
- `ft_strncpy`: Copies a specified number of characters from one string to another.
- `ft_strcat`: Concatenates two strings.
- `ft_strncat`: Concatenates a specified number of characters from one string to another.
- `ft_strlcat`: Concatenates two strings, ensuring the result is null-terminated.
- `ft_strchr`: Searches for a character in a string.
- `ft_strrchr`: Searches for a character in a string, starting from the end.
- `ft_strstr`: Searches for a substring in a string.
- `ft_strnstr`: Searches for a substring in a string, within a specified length.
- `ft_strcmp`: Compares two strings.
- `ft_strncmp`: Compares two strings up to a specified number of characters.

### Character Functions

- `ft_isalpha`: Checks if a character is an alphabetic letter.
- `ft_isdigit`: Checks if a character is a digit.
- `ft_isalnum`: Checks if a character is alphanumeric.
- `ft_isascii`: Checks if a character is an ASCII character.
- `ft_isprint`: Checks if a character is printable.
- `ft_toupper`: Converts a character to uppercase.
- `ft_tolower`: Converts a character to lowercase.

### List Functions

- `ft_lstnew`: Creates a new list element.
- `ft_lstdelone`: Deletes a single list element.
- `ft_lstdel`: Deletes a list and its elements.
- `ft_lstadd`: Adds a new element to the beginning of a list.
- `ft_lstiter`: Iterates over a list and applies a function to each element.
- `ft_lstmap`: Iterates over a list, applies a function to each element, and creates a new list with the results.

## Usage

To use the libft library in your project, follow these steps:

1. Clone the repository:
	 ```
	 git clone https://github.com/yourusername/libft.git
	 ```
2. Navigate to the project directory:
	 ```
	 cd libft
	 ```
3. Compile the library:
	 ```
	 make
	 ```
4. Include the library in your project:
	 ```c
	 #include "libft.h"
	 ```

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
