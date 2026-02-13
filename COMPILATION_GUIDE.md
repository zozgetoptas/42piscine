# Compilation & Testing Guide

## 📋 Quick Start

### Compile Individual Programs
```bash
# Example: Compile ft_putchar
gcc -Wall -Wextra -Werror c00/ex00/ft_putchar.c -o ft_putchar
./ft_putchar
```

### Compile with Strict Flags
```bash
gcc -Wall -Wextra -Werror -pedantic c00/ex00/ft_putchar.c -o ft_putchar
```

---

## 🔧 Compilation by Module

### **Module c00: Basic I/O**
```bash
# Character output
gcc -Wall -Wextra -Werror c00/ex00/ft_putchar.c -o ft_putchar
./ft_putchar

# Alphabet printing
gcc -Wall -Wextra -Werror c00/ex01/ft_print_alphabet.c -o ft_print_alphabet
./ft_print_alphabet

# Numbers
gcc -Wall -Wextra -Werror c00/ex03/ft_print_numbers.c -o ft_print_numbers
./ft_print_numbers

# Combinations
gcc -Wall -Wextra -Werror c00/ex05/ft_print_comb.c -o ft_print_comb
./ft_print_comb
```

### **Module c01: Pointers**
```bash
# Pointer dereferencing
gcc -Wall -Wextra -Werror c01/ex00/ft_ft.c -o ft_ft
./ft_ft

# Swapping with pointers
gcc -Wall -Wextra -Werror c01/ex02/ft_swap.c -o ft_swap
./ft_swap

# Sorting arrays
gcc -Wall -Wextra -Werror c01/ex08/ft_sort_int_tab.c -o ft_sort_int_tab
./ft_sort_int_tab
```

### **Module c02: String Functions**
```bash
# String copy
gcc -Wall -Wextra -Werror c02/ex00/ft_strcpy.c -o ft_strcpy
./ft_strcpy

# Case checking
gcc -Wall -Wextra -Werror c02/ex02/ft_str_is_alpha.c -o ft_str_is_alpha
./ft_str_is_alpha

# Case conversion
gcc -Wall -Wextra -Werror c02/ex07/ft_strupcase.c -o ft_strupcase
./ft_strupcase
```

### **Module c03: String Operations**
```bash
# String comparison
gcc -Wall -Wextra -Werror c03/ex00/ft_strcmp.c -o ft_strcmp
./ft_strcmp

# Concatenation
gcc -Wall -Wextra -Werror c03/ex02/ft_strcat.c -o ft_strcat
./ft_strcat

# Substring search
gcc -Wall -Wextra -Werror c03/ex04/ft_strstr.c -o ft_strstr
./ft_strstr
```

### **Module c04: Parsing**
```bash
# String to integer
gcc -Wall -Wextra -Werror c04/ex03/ft_atoi.c -o ft_atoi
./ft_atoi

# Integer output
gcc -Wall -Wextra -Werror c04/ex02/ft_putnbr.c -o ft_putnbr
./ft_putnbr
```

### **Module c05: Recursion & Algorithms**
```bash
# Factorial
gcc -Wall -Wextra -Werror c05/ex00/ft_iterative_factorial.c -o ft_factorial
./ft_factorial

# Power
gcc -Wall -Wextra -Werror c05/ex02/ft_iterative_power.c -o ft_power
./ft_power

# Fibonacci
gcc -Wall -Wextra -Werror c05/ex04/ft_fibonacci.c -o ft_fibonacci
./ft_fibonacci

# Square root
gcc -Wall -Wextra -Werror c05/ex05/ft_sqrt.c -o ft_sqrt
./ft_sqrt

# Prime checking
gcc -Wall -Wextra -Werror c05/ex06/ft_is_prime.c -o ft_is_prime
./ft_is_prime
```

### **Module c06: Command-line Arguments**
```bash
# Program name
gcc -Wall -Wextra -Werror c06/ex00/ft_print_program_name.c -o ft_program_name
./ft_program_name

# Print parameters
gcc -Wall -Wextra -Werror c06/ex01/ft_print_params.c -o ft_print_params
./ft_print_params arg1 arg2 arg3

# Reverse parameters
gcc -Wall -Wextra -Werror c06/ex02/ft_rev_params.c -o ft_rev_params
./ft_rev_params one two three

# Sort parameters
gcc -Wall -Wextra -Werror c06/ex03/ft_sort_params.c -o ft_sort_params
./ft_sort_params zebra apple banana
```

### **Module c07: Dynamic Memory**
```bash
# String duplication
gcc -Wall -Wextra -Werror c07/ex00/ft_strdup.c -o ft_strdup
./ft_strdup

# Range creation
gcc -Wall -Wextra -Werror c07/ex01/ft_range.c -o ft_range
./ft_range

# String join
gcc -Wall -Wextra -Werror c07/ex03/ft_strjoin.c -o ft_strjoin
./ft_strjoin
```

---

## 🧪 Testing Strategies

### Test for Crashes
```bash
# Test with edge cases
./ft_strlen ""           # Empty string
./ft_strlen "a"          # Single character
./ft_putnbr 0            # Zero
./ft_putnbr -2147483648 # Min int
```

### Test Output
```bash
# String function verification
gcc -Wall -Wextra -Werror c02/ex00/ft_strcpy.c -o test
echo "Characters" | ./test
```

### Memory Leak Detection (with Valgrind)
```bash
# Check for memory leaks in c07 programs
valgrind --leak-check=full ./ft_strdup
valgrind --leak-check=full ./ft_range
valgrind --leak-check=full ./ft_strjoin
```

---

## ✅ Code Quality Validation

### 42 Norm Checking
```bash
# Install norminette (if not already installed)
# Then validate your code:
norminette c00/
norminette c01/
norminette c02/
norminette c03/
norminette c04/
norminette c05/
norminette c06/
norminette c07/

# Or validate all at once
norminette
```

### Compiler Warnings
```bash
# Strict compilation (recommended)
gcc -Wall -Wextra -Werror -pedantic -std=c99 *.c -o program

# This will catch:
# - Unused variables
# - Missing prototypes
# - Type mismatches
# - Implicit conversions
```

---

## 🐛 Debugging Tips

### Using printf for debugging
```c
#include <unistd.h>

// Simple debug output
write(1, "Debug point reached\n", 20);

// Variable inspection
printf("Variable value: %d\n", variable);  // If printf is allowed
```

### Testing with different inputs
```bash
# Create test scripts
echo "test input" | ./ft_program
./ft_program arg1 arg2 arg3
```

### GDB Debugging
```bash
# Compile with debug symbols
gcc -g -Wall -Wextra -Werror c05/ex00/ft_iterative_factorial.c -o ft_factorial
gdb ./ft_factorial

# In GDB:
# run          - Execute the program
# break <line> - Set breakpoint
# next         - Step through code
# print var    - Inspect variable
# continue     - Resume execution
```

---

## 📝 Common Compilation Issues

### Issue: "undefined reference to main"
**Solution:** Ensure your file has a `main()` function:
```c
int main(void) {
    ft_putstr("Hello\n");
    return (0);
}
```

### Issue: "format string requires..." warning
**Solution:** Check printf/sprintf format specifiers:
```c
printf("%d\n", integer);     // %d for int
printf("%c\n", character);   // %c for char
printf("%s\n", string);      // %s for char*
```

### Issue: Unused parameter warning
**Solution:** Mark unused parameters in function declaration:
```c
int ft_function(int unused __attribute__((unused)))
```

Or use the parameter:
```c
int ft_function(int param) {
    (void)param;  // Mark as deliberately unused
    // code
}
```

---

## 🚀 Batch Compilation Script

Create a `compile_all.sh` script:
```bash
#!/bin/bash

# Compile all c00 exercises
for ex in c00/ex*/; do
    filename=$(basename "$ex"/*)
    gcc -Wall -Wextra -Werror "${ex}${filename}.c" -o "${filename%.c}"
done

# Compile all c01 exercises
for ex in c01/ex*/; do
    filename=$(basename "$ex"/*)
    gcc -Wall -Wextra -Werror "${ex}${filename}.c" -o "${filename%.c}"
done

# ... repeat for other modules ...

echo "Compilation complete!"
```

Run with:
```bash
chmod +x compile_all.sh
./compile_all.sh
```

---

## 📊 Sample Test Cases

### String Functions
```c
// Test ft_strlen
ft_strlen("")        → 0
ft_strlen("hello")   → 5

// Test ft_strcpy
strcpy(dest, "test")  → "test" copied to dest

// Test ft_strcmp
strcmp("abc", "abc")  → 0
strcmp("abc", "abd")  → -1 (or negative)
strcmp("abd", "abc")  → 1  (or positive)
```

### Numeric Functions
```c
// Test ft_atoi
atoi("42")           → 42
atoi("-42")          → -42
atoi("  +100")       → 100
atoi("2147483647")   → 2147483647

// Test ft_putnbr
putnbr(0)            → 0
putnbr(42)           → 42
putnbr(-42)          → -42
```

### Algorithm Functions
```c
// Test ft_is_prime
is_prime(2)          → 1 (true)
is_prime(4)          → 0 (false)
is_prime(17)         → 1 (true)

// Test ft_fibonacci
fibonacci(0)         → 0
fibonacci(5)         → 5
fibonacci(10)        → 55
```

---

<div align="center">
  <sub>For more information, refer to the exercise specifications in each module folder</sub>
</div>
