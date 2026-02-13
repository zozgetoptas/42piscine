# Module C00: Basic I/O & Logic

## 🎯 Module Objectives
Master fundamental C programming concepts through character output and control flow.

## 📚 Exercises Overview

| Exercise | Function | Concept |
|----------|----------|---------|
| **ex00** | `ft_putchar()` | Character output via `write()` |
| **ex01** | `ft_print_alphabet()` | Character iteration |
| **ex02** | `ft_print_reverse_alphabet()` | Reverse iteration |
| **ex03** | `ft_print_numbers()` | Number output |
| **ex04** | `ft_is_negative()` | Conditional logic |
| **ex05** | `ft_print_comb()` | Nested loops & combinations |
| **ex06** | `ft_print_comb2()` | Advanced combinations |
| **ex07** | `ft_putnbr()` | Number formatting |

---

## 💡 Key Concepts

### 1. Character Output with write()
```c
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
```
- `write()` system call writes to file descriptor
- File descriptor 1 = standard output
- Second parameter: address of data
- Third parameter: number of bytes

### 2. Loops for Character Generation
```c
void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}
```
- Iterate through ASCII values
- Character increment moves through alphabet

### 3. Conditional Logic
```c
void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}
```
- if/else decision making
- Output based on conditions

### 4. Nested Loops for Combinations
```c
void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_putchar(a + '0');
				ft_putchar(b + '0');
				ft_putchar(c + '0');
				if (!(a == 7 && b == 8 && c == 9))
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
```

---

## 🧪 Testing

### Compile and Run
```bash
# Single character
gcc -Wall -Wextra -Werror c00/ex00/ft_putchar.c -o ft_putchar
./ft_putchar

# Alphabet
gcc -Wall -Wextra -Werror c00/ex01/ft_print_alphabet.c -o print_alpha
./print_alpha

# Numbers
gcc -Wall -Wextra -Werror c00/ex03/ft_print_numbers.c -o print_nums
./print_nums

# Combinations  
gcc -Wall -Wextra -Werror c00/ex05/ft_print_comb.c -o print_comb
./print_comb
```

### Expected Output
```
./ft_putchar
(outputs single character)

./print_alpha
abcdefghijklmnopqrstuvwxyz

./print_numbers
0123456789

./print_comb
012, 013, 014, ..., 789
```

---

## 📝 Learning Outcomes

After completing c00:
- ✅ Understand basic C syntax and structure
- ✅ Use `write()` system call for output
- ✅ Master while loops and iteration
- ✅ Implement conditional logic (if/else)
- ✅ Work with nested loops
- ✅ Understand ASCII character codes
- ✅ How to think in terms of algorithms

---

## 🚀 Common Mistakes

| Issue | Solution |
|-------|----------|
| `write()` not found | Include `<unistd.h>` |
| No output | Check file descriptor (should be 1) |
| Infinite loop | Increment loop counter |
| Wrong output | Check ASCII values |
| Extra commas | Handle last element specially |

---

## 📊 Complexity Analysis

| Function | Time | Space |
|----------|------|-------|
| `ft_putchar()` | O(1) | O(1) |
| `ft_print_alphabet()` | O(26) | O(1) |
| `ft_print_comb()` | O(n³) | O(1) |
| `ft_putnbr()` | O(log n) | O(log n) recursive |

---

## 🎓 Next Steps

After mastering c00:
- Module c01: Pointer basics
- Module c02: String manipulation
- Module c04: More complex I/O with `ft_putnbr()`

---

<div align="center">
  <sub>Foundation of all C programming - master these basics!</sub>
</div>
