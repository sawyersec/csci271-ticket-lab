# 🍿 CSCI-271: Theater Ticket Structs Lab

Welcome to the Structs and Data Hiding Lab! This project is designed to give you hands-on practice with C++ `struct`s, starting with simple data structures and moving to more complex data hiding with accessors and mutators.

## 🚀 Lab Objectives

* **Simple Struct:** Implement a `struct` with all `public` data members.
* **Data Hiding:** Implement a `struct` with `private` data members.
* **Accessors & Mutators:** Write public "getter" and "setter" methods to safely access and modify private data.
* **Implementation:** Separate a struct's definition (`.h`) from its implementation (`.cpp`).
* **Instantiation:** Use both `struct`s in `main.cpp` to create and display ticket information.
* **Build Process:** Compile a multi-file project using the provided `Makefile`.

## 🗃️ Data Dictionary

This lab involves two main data structures, `Ticket` and `Show`. Here is a visual diagram of their structure:

```text
+------------------+         +----------------------------+
|      Ticket      |         |            Show            |
| (Simple Struct)  |         |  (Data Hiding Struct)      |
|------------------|         |----------------------------|
| + section: string|         | - title: string            |
| + row: int       |         | - venue: string            |
| + seat: int      |         | - showTime: int            |
| + price: double  |         |----------------------------|
+------------------+         | + getTitle(): string       |
                             | + getVenue(): string       |
                             | + getShowTime(): int       |
                             | + setTitle(string)         |
                             | + setVenue(string)         |
                             | + setShowTime(int)         |
                             +----------------------------+

  [ + = public member,  - = private member ] 
