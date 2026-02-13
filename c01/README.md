# Module C01: Pointers & Memory Management

## 🎯 Module Objectives
Master pointer concepts and memory manipulation - critical foundation for advanced C programming.

## 📚 Exercises Overview

| Exercise | Function | Concept |
|----------|----------|---------|
| **ex00** | `ft_ft()` | Pointer dereferencing |
| **ex01** | `ft_ultimate_ft()` | Double pointer |
| **ex02** | `ft_swap()` | Variable swapping via pointers |
| **ex03** | `ft_div_mod()` | Pass-by-pointer for output |
| **ex04** | `ft_ultimate_div_mod()` | Advanced parameter passing |
| **ex05** | `ft_putstr()` | String output using pointers |
| **ex06** | `ft_strlen()` | String length calculation |
| **ex07** | `ft_rev_int_tab()` | Array reversal |
| **ex08** | `ft_sort_int_tab()` | Bubble sort algorithm |

---

## 💡 Key Concepts

### 1. Pointer Basics
```c
int		ft_ft(int *nbr)
{
	*nbr = 42;  // Dereference pointer to modify value
	return (0);
}
```
- `int *ptr` = pointer to integer
- `*ptr` = dereference (access value)
- `&var` = address-of (get address)

### 2. Swapping Using Pointers
```c
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
```
- Modify caller's variables directly
- No return value needed

### 3. Multiple Output Parameters
```c
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
```
- Pointers enable returning multiple values
- Clean API design

### 4. String Pointer Iteration
```c
void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;  // Pointer arithmetic
	}
}
```
- `char *` is pointer to string
- Increment moves to next character
- `*str` is null ('\0') at end

### 5. Array Manipulation
```c
char	*ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
	return (tab);
}
```
- Arrays are pointers in C
- Array indexing: `arr[i]` = `*(arr + i)`

### 6. Bubble Sort Algorithm
```c
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
```
- Nested loops for comparison
- Swap larger elements right
- Time: O(n²), Space: O(1)

---

## 🧪 Testing

### Compile
```bash
# Pointer dereferencing
gcc -Wall -Wextra -Werror c01/ex00/ft_ft.c -o ft_ft

# Swapping
gcc -Wall -Wextra -Werror c01/ex02/ft_swap.c -o ft_swap

# String functions
gcc -Wall -Wextra -Werror c01/ex06/ft_strlen.c -o ft_strlen

# Sorting
gcc -Wall -Wextra -Werror c01/ex08/ft_sort_int_tab.c -o ft_sort
```

### Test Cases
```c
// Test ft_strlen
strlen("")     → 0
strlen("a")    → 1
strlen("hello") → 5
strlen("test string") → 11

// Test ft_swap
Before: a=5, b=10
After:  a=10, b=5

// Test ft_sort_int_tab
[3, 1, 4, 1, 5] → [1, 1, 3, 4, 5]
[9, 2, 7]       → [2, 7, 9]
[1]             → [1]
```

---

## 📝 Memory Concepts

### Stack vs Heap
```c
// Stack allocation (automatic)
int num = 42;
int *ptr = &num;  // Points to stack

// Heap allocation (manual)
int *heap_ptr = malloc(sizeof(int));
*heap_ptr = 42;
free(heap_ptr);  // Must free!
```

### Pointer Arithmetic
```c
int arr[5] = {1, 2, 3, 4, 5};
int *ptr = arr;

ptr++;          // Points to arr[1]
*(ptr + 2);     // Access arr[3]
ptr[-1];        // Access arr[-1] (dangerous!)
```

---

## 🎯 Learning Outcomes

After completing c01:
- ✅ Fully understand pointers and dereferencing
- ✅ Master pointer arithmetic
- ✅ Implement algorithms that modify data
- ✅ Work with strings as character arrays
- ✅ Understand array-pointer relationships
- ✅ Implement classic sorting algorithm
- ✅ Write functions with multiple outputs

---

## 🚀 Common Mistakes

| Issue | Solution |
|-------|----------|
| Dereferencing NULL | Always check before dereferencing |
| Pointer arithmetic | Remember: `ptr++` increments by size_of(type) |
| Array bounds | Check loop conditions |
| Forgetting `&` or `*` | Use consistently |
| Uninitialized pointers | Always initialize before use |

---

## 📊 Complexity Analysis

| Function | Time | Space |
|----------|------|-------|
| `ft_strlen()` | O(n) | O(1) |
| `ft_rev_int_tab()` | O(n) | O(1) |
| `ft_sort_int_tab()` | O(n²) | O(1) |
| `ft_putstr()` | O(n) | O(1) |

---

## 🎓 Key Takeaways

1. **Pointers = Addresses** - They hold memory locations
2. **Dereferencing** - `*ptr` accesses the value at that address
3. **Modification by Reference** - Pointers enable modifying caller's data
4. **Array-Pointer Duality** - Arrays decay to pointers in most contexts
5. **Pointer Arithmetic** - Move through memory efficiently

---

<div align="center">
  <sub>Module c01 is the bridge to advanced C programming</sub>
</div>
