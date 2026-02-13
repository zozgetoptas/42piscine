# C Module Structure & Conventions

## 📐 Code Organization

### File Naming Convention
```
c{module_number}/
├── ex{exercise_number}/
│   └── ft_{function_name}.c
```

**Examples:**
- `c00/ex00/ft_putchar.c` - Module 0, Exercise 0
- `c05/ex06/ft_is_prime.c` - Module 5, Exercise 6

---

## ✨ 42 Norm - Code Quality Standard

### 1. **Function Length**
- Maximum 25 lines per function
- Encourages modularization and clarity
- Forces thinking about code complexity

### 2. **Variable Declaration**
- One variable per line
- **Forbidden:** `int a, b, c;`
- **Correct:** 
```c
int a;
int b;
int c;
```

### 3. **Indentation**
- Use tab characters (represents 4 spaces visually)
- Consistent indentation throughout
- No mixed tabs and spaces

### 4. **Function Structure**
```c
/*
** FILENAME.C for Piscine in C
**
** Made by Student <login@epitech.eu>
** Started on Thu Jan 1 00:00:00 2024 Login
** Last update Thu Jan 1 00:00:00 2024 Login
*/

#include <unistd.h>

int	ft_example(int param)
{
	int	result;

	result = param * 2;
	return (result);
}
```

### 5. **Spacing Rules**
- Space before opening brace: `if (condition) {`
- No space inside function calls: `function(a, b)`
- Space around operators: `a = b + c;`

### 6. **Prohibited Practices**
- ❌ Pre/post increment in conditions: `if (++i < 5)`
- ❌ Nested functions
- ❌ More than 4 parameters per function
- ❌ Assignment in conditionals: `if (a = b)`
- ❌ Using restricted functions early modules

### 7. **Header Comments**
Only header comments allowed:
```c
/*
** FILENAME.C for Piscine in C
*/
```
**Forbidden:** Inline comments explaining code

---

## 🎨 Code Style Examples

### ✅ GOOD - Clean and Norm Compliant
```c
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
```

### ❌ BAD - Non-compliant
```c
#include <stdio.h>

// Calculate string length - THIS IS FORBIDDEN
int ft_strlen(char* str) {
    int len = 0; // Comments not allowed
    while (str[len]) len++; // Too much on one line
    return len; // Missing semicolon on return statement
}
```

---

## 📋 Module-Specific Patterns

### Pattern: Void Function with Pointer Output
Used in modules c01-c02
```c
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
```

### Pattern: Character Processing
Used in modules c02-c03
```c
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
```

### Pattern: Safe String Operations
Used from module c02 onward
```c
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
```

### Pattern: Recursion with Base Cases
Used in module c05
```c
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
```

### Pattern: Dynamic Memory Allocation
Used in module c07
```c
char	*ft_strdup(char *src)
{
	char	*dest;
	int	i;

	dest = malloc(ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
```

---

## 🔍 Code Review Checklist

Before submitting each exercise:

### Compilation
- [ ] Compiles with `-Wall -Wextra -Werror`
- [ ] No compiler warnings
- [ ] No undefined behavior

### 42 Norm
- [ ] All functions ≤ 25 lines
- [ ] One variable per line
- [ ] Proper indentation (tabs)
- [ ] No inline comments
- [ ] Only header comment allowed
- [ ] Correct brace placement

### Functionality
- [ ] Main function works correctly
- [ ] Handles edge cases (empty strings, zero, etc.)
- [ ] Correct return values
- [ ] No infinite loops

### Memory
- [ ] No memory leaks (check with Valgrind)
- [ ] All malloc() has corresponding free()
- [ ] Buffer overflow protection
- [ ] Null pointer checks

### Input Handling
- [ ] Handles NULL pointers safely
- [ ] Handles empty strings
- [ ] Handles negative numbers
- [ ] Handles maximum integer values

---

## 📚 Function Template

Use this template for new functions:

```c
/*
** FILENAME.C for Piscine in C
**
** Made by Login
** Started on [Date]
** Last update [Date]
*/

#include <unistd.h>

type_return	ft_function_name(param_type param_name)
{
	type_variable	variable_name;

	variable_name = initial_value;
	return (variable_name);
}

int	main(void)
{
	ft_function_name(argument);
	return (0);
}
```

---

## 🎯 Quality Metrics

### Code Complexity
- **Cyclomatic Complexity:** Minimize nested loops/conditions
- **Function Length:** Keep under 25 lines
- **Readability:** Clear variable names, logical flow

### Performance
- **Time Complexity:** Choose efficient algorithms
- **Space Complexity:** Minimize extra memory usage
- **Edge Cases:** Handle boundaries efficiently

### Robustness
- **Error Handling:** Check malloc/memory operations
- **Input Validation:** Verify parameter validity
- **Boundary Conditions:** Test limits and edge cases

---

## 🚀 Best Practices Developed

1. **Constraint-Driven Design** - Working within norm limitations improves code quality
2. **Clear Variable Naming** - `index` instead of `i`, `length` instead of `l`
3. **Function Decomposition** - Breaking problems into sub-functions
4. **Defensive Programming** - Checking for NULL, buffer overflow
5. **Algorithm Optimization** - Balancing readability with efficiency

---

## 📖 Related Resources

- **42 School Norm:** GitHub 42 School Norm repository
- **C Standards:** C99/C11 specification
- **System Calls:** `man` pages for `write()`, `malloc()`, etc.

---

<div align="center">
  <sub>Following these standards ensures professional, maintainable C code</sub>
</div>
