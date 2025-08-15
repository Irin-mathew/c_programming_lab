# Data Structures & Algorithms in C

A comprehensive collection of fundamental data structures, algorithms, and operating system concepts implemented in the C programming language.

## 📁 Repository Structure

```
├── data-structures/
│   ├── linked-lists/
│   │   ├── common-elements.c       # Find common elements in two linked lists
│   │   ├── position-based-ops.c     # Operations based on position in linked list
│   │   └── student-records.c        # Student record management using linked lists
│   └── queues/
│       ├── circular-queue.c         # Circular queue implementation
│       └── deq.c                    # Double-ended queue (deque) implementation
├── operating-systems/
│   ├── scheduling/
│   │   ├── fcfs.c                   # First Come First Serve scheduling
│   │   └── cscan.c                  # C-SCAN disk scheduling algorithm
│   └── memory-management/
│       ├── fifo.c                   # FIFO page replacement algorithm
│       ├── lru.c                    # Least Recently Used page replacement
│       ├── lfu.c                    # Least Frequently Used page replacement
│       └── optimal.c                # Optimal page replacement algorithm
├── algorithms/
│   ├── sorting/
│   │   ├── quicksort.c              # Quick sort algorithm
│   │   └── mergesort.c              # Merge sort algorithm
│   └── polynomial.c                 # Polynomial operations (add, subtract, evaluate)
└── README.md
```

## 🚀 Quick Start

### Prerequisites

- GCC compiler
- Linux/Unix environment (recommended)

### Compilation

```
# For individual programs
gcc -o program_name program_name.c

# For programs requiring math library
gcc -o program_name program_name.c -lm

# Example
gcc -o student-records student-records.c
gcc -o polynomial polynomial.c -lm
```

### Running Programs

```
./program_name
```

## 📊 Programs Overview

### Data Structures

- **common-elements.c**: Find common elements in two linked lists.
- **position-based-ops.c**: Operations based on position in a linked list.
- **student-records.c**: Complete student record management system- Insert, delete, search, update operations
  - Memory-safe implementation with input validation
  - Features: Roll number-based operations, display all records


- **circular-queue.c**: Circular queue with fixed size
  - Enqueue, dequeue, display operations
  - Handles queue full/empty conditions
  - Menu-driven interface
- **deq.c**: Double-ended queue implementation
  - Insert/delete from both ends
  - Flexible data structure for various applications

### Algorithms

- **quicksort.c**: Divide and conquer sorting
  - Average time complexity: O(n log n)
  - In-place sorting algorithm
  - Recursive implementation
- **mergesort.c**: Stable divide and conquer sorting
  - Time complexity: O(n log n) guaranteed
  - Stable sorting algorithm
  - External sorting capable


- **polynomial.c**: Polynomial arithmetic operations- Addition and subtraction of polynomials
  - Polynomial evaluation at given points
  - Proper display formatting

### Operating System Concepts

- **fcfs.c**: First Come First Serve scheduling- Non-preemptive scheduling
  - Calculates waiting time and turnaround time
  - Simple FIFO-based process scheduling


- **cscan.c**: Circular SCAN disk scheduling- Reduces head movement variance
  - Circular elevator algorithm
  - Calculates total seek time


- **fifo.c**: First In First Out page replacement
  - Simple queue-based replacement
  - Page fault calculation
  - Memory frame simulation
- **lru.c**: Least Recently Used replacement
  - Optimal for temporal locality
  - Stack-based or counter-based implementation
  - Realistic page replacement strategy
- **lfu.c**: Least Frequently Used replacement
  - Counter-based frequency tracking
  - Good for programs with locality
  - Frequency-based decision making
- **optimal.c**: Optimal page replacement (Belady's algorithm)
  - Theoretical best performance
  - Future reference prediction
  - Benchmark for other algorithms

## 🛠️ Features

### Code Quality

- ✅ Memory-safe implementations
- ✅ Input validation and error handling
- ✅ Well-commented and readable code
- ✅ Modular function design
- ✅ Menu-driven interfaces

### Educational Value

- 📚 Clear algorithm implementations
- 📚 Step-by-step execution display
- 📚 Performance analysis outputs
- 📚 Real-world problem solving

## 📈 Performance Characteristics

## 🔧 Usage Examples

### Linked List Operations

```
// Add student record
insert(&head, 101, "John Doe", 85);

// Search by roll number
search(head, 101);

// Display all records
display(head);
```

### Queue Operations

```
enqueue(10);    // Add element
int val = dequeue();  // Remove element
display();      // Show queue contents
```

### Sorting Arrays

```
int arr[] = {64, 34, 25, 12, 22, 11, 90};
int n = sizeof(arr)/sizeof(arr[0]);
quickSort(arr, 0, n-1);
```

## 📝 Notes

- All programs are written in standard C (C99/C11 compatible)
- Tested on GCC compiler
- Some programs may require additional libraries (mentioned in comments)
- Input validation is implemented where necessary
- Memory management is handled properly to prevent leaks

## 🐛 Known Issues

- Some older compilers may require explicit casting for malloc
- Windows users may need to adjust include statements
- Large input sizes may require stack size adjustments for recursive algorithms

## 👨‍💻 Author

**\[Irin Mathew\]**

- GitHub: [@yourusername](https://github.com/Irin-mathew)
- Email: [irinmathew264@gmail.com](mailto:your.email@example.com)

## 🙏 Acknowledgments

- Data Structures and Algorithms course materials
- Operating System concepts reference books
- C programming community resources

---

**⭐ Star this repository if you find it helpful!**
