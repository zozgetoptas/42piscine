# Module C04: String Conversion & Input Parsing

## 🎯 Module Objectives
Master number-to-string and string-to-number conversions, critical for handling user input and output formatting.

## 📚 Exercises Overview

| Exercise | Function | Concept |
|----------|----------|---------|
| **ex00** | `ft_strlen()` | String length (review) |
| **ex01** | `ft_putstr()` | String output (review) |
| **ex02** | `ft_putnbr()` | Integer to string output |
| **ex03** | `ft_atoi()` | String to integer conversion |

---

## 💡 Key Implementations

### Integer Output (ft_putnbr)
```c
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}
```
**Challenges:**
- Handling negative numbers
- Integer overflow edge case (-2147483648)
- Recursive digit extraction
- Converting digit to character

### String to Integer (ft_atoi)
```c
int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
```
**Features:**
- Skip leading whitespace
- Handle +/- signs
- Parse digit sequence
- Return with proper sign

---

## 🎯 Conversion Patterns

### Character ↔ Digit
```c
digit = '5';
int value = digit - '0';        // '5' → 5

int value = 5;
char digit = value + '0';       // 5 → '5'
```

### Sign Handling
```c
// Detecting sign
if (*str == '-')
    sign = -1;
else if (*str == '+')
    sign = 1;

// Applying sign
result *= sign;
```

### Whitespace Skipping
```c
// Standard whitespace in atoi
while (*str == ' ' || (*str >= 9 && *str <= 13))
    str++;
// ' ' (32), '\t' (9), '\n' (10), '\v' (11), '\f' (12), '\r' (13)
```

---

## 📊 Number Limits

| Value | Integer |
|-------|---------|
| Min 32-bit int | -2147483648 |
| Max 32-bit int | 2147483647 |
| Special case | -2,147,483,648 (edge case) |

---

## 🎓 Learning Outcomes

- ✅ Number representation and digit extraction
- ✅ String character analysis
- ✅ Sign and whitespace handling
- ✅ Recursive vs iterative approaches
- ✅ Edge case management (overflow, boundaries)

---

<div align="center">
  <sub>Module c04: Essential I/O and data conversion skills</sub>
</div>
