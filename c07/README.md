# Module C07: Dynamic Memory & Advanced String Management

## 🎯 Module Objectives
Master dynamic memory allocation and implement advanced string operations with proper memory management.

## 📚 Exercises Overview

| Exercise | Function | Concept |
|----------|----------|---------|
| **ex00** | `ft_strdup()` | String duplication with malloc |
| **ex01** | `ft_range()` | Dynamic array creation |
| **ex02** | `ft_ultimate_range()` | Enhanced range with error handling |
| **ex03** | `ft_strjoin()` | Dynamic string concatenation |

---

## 💡 Core Concepts

### 1. Dynamic Memory Allocation

```c
// Allocate memory at runtime
char	*ptr = malloc(size * sizeof(type));

// Check for allocation failure
if (ptr == NULL)
	return (NULL);

// Use the memory
ptr[0] = 'a';

// Always free when done
free(ptr);
ptr = NULL;  // Good practice: nullify
```

**Why malloc?**
- ✅ Size determined at runtime
- ✅ Allocate only what's needed
- ✅ Memory persists until freed
- ✅ Essential for flexible data structures

### 2. String Duplication

```c
char	*ft_strdup(char *src)
{
	char	*dest;
	int	i;

	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
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

**Key Points:**
- Allocate `strlen(src) + 1` for null terminator
- Copy character by character
- Return allocated memory
- Caller must free returned pointer

### 3. Dynamic Array Creation

**Basic Range:**
```c
int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = malloc((max - min) * sizeof(int));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
```

**Enhanced with Error Handling:**
```c
int	*ft_ultimate_range(int min, int max, int *size)
{
	int	*tab;
	int	i;

	if (min >= max)
	{
		*size = 0;
		return (NULL);
	}
	*size = max - min;
	tab = malloc(*size * sizeof(int));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < *size)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
```

### 4. Dynamic String Concatenation

```c
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int	len;
	int	i;
	int	j;

	len = ft_calculate_total_length(size, strs, sep);
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL || size == 0)
		return (dest);
	j = 0;
	i = 0;
	while (i < size)
	{
		j = ft_copy_string(dest, j, strs[i]);
		if (i < size - 1)
			j = ft_copy_string(dest, j, sep);
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
```

---

## 🎯 Memory Management Best Practices

### The Memory Lifecycle

```
1. ALLOCATE      2. USE          3. FREE
malloc()   →    access/modify   →  free()
```

### Proper Pattern
```c
char *str = malloc(100 * sizeof(char));  // Step 1: Allocate
if (str == NULL)                          // Step 2: Check
	return (ERROR);
ft_strcpy(str, "data");                  // Step 3: Use
free(str);                                // Step 4: Free
str = NULL;                               // Step 5: Nullify
```

### Memory Leak Example

❌ **WRONG - Memory Leak:**
```c
char *str = malloc(100);
str = some_other_pointer;  // Original pointer lost!
free(str);                  // Frees wrong memory
// Original malloc'd memory never freed!
```

✅ **CORRECT:**
```c
char *str = malloc(100);
char *temp = some_other_pointer;
free(str);  // Free original first
str = temp; // Then reassign
```

---

## 📊 Memory Size Calculations

### String Allocation
```c
// String length + null terminator
int len = ft_strlen("hello");  // Returns 5
char *dup = malloc((len + 1) * sizeof(char));  // Allocate 6 bytes
```

### Array Allocation
```c
// Element count × size of each element
int count = 10;
int *arr = malloc(count * sizeof(int));  // 10 × 4 bytes = 40 bytes

// String array
char **strs = malloc(3 * sizeof(char*));  // 3 pointers
for (int i = 0; i < 3; i++)
	strs[i] = malloc(50 * sizeof(char));  // Each string 50 bytes
```

---

## 🧪 Testing Memory Management

### Using Valgrind for Memory Leak Detection
```bash
# Compile
gcc -Wall -Wextra -Werror c07/ex00/ft_strdup.c -o ft_strdup

# Run with Valgrind
valgrind --leak-check=full ./ft_strdup

# Output should show:
# "ERROR SUMMARY: 0 errors from 0 contexts"
```

### Memory Leak Symptoms
```
valgrind output:
==1234== HEAP SUMMARY:
==1234==     in use at exit: 1,234 bytes in 10 blocks
==1234==   total heap alloc:  1,234 bytes in 10 blocks
==1234== LEAK SUMMARY:
==1234==    definitely lost: 1,234 bytes in 10 blocks ❌ LEAK!
```

### Clean Memory Output
```
valgrind output:
==1234== HEAP SUMMARY:
==1234==     in use at exit: 0 bytes in 0 blocks
==1234== LEAK SUMMARY:
==1234==    definitely lost: 0 bytes in 0 blocks ✅ CLEAN!
```

---

## 🔍 Complex Example: ft_strjoin

**Challenge:** Concatenate multiple strings with separator
**Solution:** Calculate total size, then build result

```
Input: ft_strjoin(3, {"Hello", "World", "!"}, " ")
Logic:
1. Calculate total: 5 + 1 + 5 + 1 + 1 = 13 bytes
2. Allocate: malloc(13)
3. Build: "Hello" + " " + "World" + " " + "!"
4. Return: "Hello World !"
5. Caller frees when done
```

---

## 💡 Advanced Concepts

### Double Pointers (Pointers to Pointers)
```c
// Modify pointer itself, not just data
void	modify_pointer(char **ptr)
{
	*ptr = malloc(10);  // Allocates memory
}

// Usage
char *str = NULL;
modify_pointer(&str);  // Pass address of pointer
// Now str points to allocated memory
```

### Array of Strings
```c
// Allocate array of string pointers
char **strs = malloc(3 * sizeof(char*));

// Allocate individual strings
strs[0] = malloc(20);  // First string
strs[1] = malloc(20);  // Second string
strs[2] = malloc(20);  // Third string

// Free in reverse order
free(strs[0]);
free(strs[1]);
free(strs[2]);
free(strs);
```

---

## 📈 Size & Complexity

| Function | Allocates | Time | Space |
|----------|-----------|------|-------|
| `ft_strdup()` | 1 string | O(n) | O(n) |
| `ft_range()` | 1 array | O(n) | O(n) |
| `ft_ultimate_range()` | 1 array | O(n) | O(n) |
| `ft_strjoin()` | 1 string | O(n+m) | O(n+m) |

---

## 🧪 Testing Examples

```bash
# String Duplication
gcc -Wall -Wextra -Werror c07/ex00/ft_strdup.c -o strdup
valgrind --leak-check=full ./strdup

# Range Creation
gcc -Wall -Wextra -Werror c07/ex01/ft_range.c -o range
./range  # Should be silent if all correct

# String Join
gcc -Wall -Wextra -Werror c07/ex03/ft_strjoin.c -o strjoin
valgrind --leak-check=full ./strjoin
```

### Expected Test Results
```c
// ft_strdup("hello") should:
// - Allocate 6 bytes
// - Copy "hello"
// - Return pointer to new string
// - Original unmodified

// ft_range(5, 10) should:
// - Allocate 20 bytes (5 ints)
// - Fill: [5, 6, 7, 8, 9]
// - Return array pointer

// ft_strjoin(3, ["a", "b", "c"], "-") should:
// - Return "a-b-c"
// - Proper memory allocation
// - No memory leaks
```

---

## 🎓 Learning Outcomes

After completing c07:
- ✅ Master `malloc()` and `free()`
- ✅ Calculate correct allocation sizes
- ✅ Detect and prevent memory leaks
- ✅ Use Valgrind for verification
- ✅ Implement complex dynamic structures
- ✅ Work with arrays of strings
- ✅ Design reusable string functions
- ✅ Handle NULL pointer cases

---

## 🚀 Common Mistakes

| Issue | Solution |
|-------|----------|
| Forgot to add 1 for '\0' | Always `strlen + 1` |
| Memory leak | Always `free()` what you `malloc()` |
| NULL pointer dereference | Check return of `malloc()` |
| Free already freed | Set freed pointer to NULL |
| Valgrind errors | Run with `--leak-check=full` |

---

## 💼 Professional Takeaways

1. **Memory is resource** - Always consider allocation/deallocation
2. **Testing matters** - Use Valgrind to verify memory safety
3. **Defensive coding** - Always check malloc return
4. **Size calculation** - Get it right: `count * sizeof(type)`
5. **Code cleanliness** - Consistent allocation/deallocation patterns

---

<div align="center">
  <sub>Module c07: The bridge to professional memory-safe C development</sub>
</div>
