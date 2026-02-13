# Module C06: Command-line Arguments Processing

## 🎯 Module Objectives
Master program argument handling and implement sorting algorithms on variable input.

## 📚 Exercises Overview

| Exercise | Function | Concept |
|----------|----------|---------|
| **ex00** | `ft_print_program_name()` | Access program name from argv |
| **ex01** | `ft_print_params()` | Enumerate and display parameters |
| **ex02** | `ft_rev_params()` | Display parameters in reverse order |
| **ex03** | `ft_sort_params()` | Sort and display parameters |

---

## 💡 Key Concepts

### Program Arguments

The `main` function signature:
```c
int main(int argc, char **argv)
{
	// argc = argument count (program name counts as argv[0])
	// argv = array of argument strings
	
	// Example: ./program arg1 arg2 arg3
	// argc = 4
	// argv[0] = "./program"
	// argv[1] = "arg1"
	// argv[2] = "arg2"
	// argv[3] = "arg3"
}
```

### Program Name Access
```c
void	ft_print_program_name(void)
{
	extern char	**environ;
	char		*path;

	path = environ[???];  // Platform-dependent
	// Typical approach shown in argv[0] during main
}

// Better: Pass argv[0] or use from main
int main(int argc, char **argv)
{
	ft_putstr(argv[0]);  // Program path/name
	return (0);
}
```

### Parameter Enumeration
```c
void	ft_print_params(int argc, char **argv)
{
	int	i;

	i = 1;  // Skip program name (argv[0])
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}

// Usage: ./ft_print_params one two three
// Output:
// one
// two
// three
```

### Reverse Parameter Order
```c
void	ft_rev_params(int argc, char **argv)
{
	while (argc > 1)
	{
		argc--;
		ft_putstr(argv[argc]);
		write(1, "\n", 1);
	}
}

// Usage: ./ft_rev_params one two three
// Output:
// three
// two
// one
```

### Sorting Parameters
```c
void	ft_sort_params(int argc, char **argv)
{
	char	*tmp;
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}

// Usage: ./ft_sort_params zebra apple banana
// Output:
// apple
// banana
// zebra
```

---

## 🧪 Testing

### Compilation
```bash
gcc -Wall -Wextra -Werror c06/ex01/ft_print_params.c -o print_params
./print_params arg1 arg2 arg3
# Output:
# arg1
# arg2
# arg3
```

### Test Cases
```bash
# Program name
./ft_print_program_name

# Reverse parameters
./ft_rev_params hello world test
# Output: test world hello

# Sorting
./ft_sort_params zebra apple banana cherry
# Output:
# apple
# banana
# cherry
# zebra
```

---

## 📊 Complexity Analysis

| Function | Approach | Complexity |
|----------|----------|-----------|
| `ft_print_params()` | Linear iteration | O(n) |
| `ft_rev_params()` | Backward iteration | O(n) |
| `ft_sort_params()` | Bubble sort | O(n²) |

---

## 💡 Advanced Concepts

### String Comparison for Sorting
```c
// Lexicographic order (dictionary order)
ft_strcmp("apple", "banana")   // < 0 (apple comes first)
ft_strcmp("zebra", "apple")    // > 0 (zebra comes after)
ft_strcmp("test", "test")      // = 0 (equal)
```

### Environment Access
```c
// In some implementations, access global environ
extern char **environ;

// But argv is safer and more standard
char *program_name = argv[0];
```

---

## 🎓 Learning Outcomes

- ✅ Understand main() argc/argv parameters
- ✅ Access and process command-line arguments
- ✅ Implement parameter reversal logic
- ✅ Apply sorting to string arrays
- ✅ Work with variable-length input

---

## 🚀 Common Pitfalls

| Issue | Solution |
|-------|----------|
| Accessing argv[argc] | Remember: valid indices are 0 to argc-1 |
| Program name confusion | argv[0] is program name/path |
| Swap implementation | Use temporary variable for string pointers |
| Sorting logic | Use string comparison (not character comparison) |

---

<div align="center">
  <sub>Module c06: Final bridging to practical program development</sub>
</div>
