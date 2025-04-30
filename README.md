# 📚 Library Management System (C Language)

This is a simple **Library Management System** written in C that runs in the terminal.  
It allows users to add books, view all registered books, and search for a book by its title.

## 🚀 Features

- 📖 **Add a new book** (Title, Author, Genre)
- 📚 **View all registered books**
- 🔍 **Search for a book by title**
- ❌ **Exit the system**

## 🛠 How It Works

- The program stores book data in arrays (`titles`, `authors`, `genres`).
- It supports up to **10 books** (`MAX_BOOKS` limit).
- It uses simple `scanf` and `strcmp` for input and string comparison.
- Search functionality uses pointers to display the found book's data.

## 📦 Compilation and Usage

To compile the program, use a C compiler like `gcc`:

```bash
gcc library.c -o library
./library
