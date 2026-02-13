# Module C02: String Character Classification & Case Operations

## 🎯 Module Objectives
Master string processing functions and character classification algorithms.

## 📚 Exercises Overview

| Exercise | Function | Concept |
|----------|----------|---------|
| **ex00** | `ft_strcpy()` | Basic string copying |
| **ex01** | `ft_strncpy()` | Bounded string copy |
| **ex02** | `ft_str_is_alpha()` | Alphabetic validation |
| **ex03** | `ft_str_is_numeric()` | Digit validation |
| **ex04** | `ft_str_is_lowercase()` | Lowercase check |
| **ex05** | `ft_str_is_uppercase()` | Uppercase check |
| **ex06** | `ft_str_is_printable()` | Printable character check |
| **ex07** | `ft_strupcase()` | Convert to uppercase |
| **ex08** | `ft_strlowcase()` | Convert to lowercase |
| **ex09** | `ft_strcapitalize()` | Capitalize words |
| **ex10** | `ft_strlcpy()` | Safe string copy |

---

## 💡 Key Patterns

### Character Classification
```c
int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z') &&
			!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}
```

### ASCII-based Transformations
```c
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;  // Convert to uppercase
		i++;
	}
	return (str);
}
```

### Safe String Operations
```c
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	// Return total source length
	while (src[i])
		i++;
	return (i);
}
```

---

## 🎓 Learning Outcomes

- ✅ ASCII character code understanding
- ✅ Character validation algorithms
- ✅ Case conversion logic
- ✅ Safe string operations with bounds checking
- ✅ String iteration patterns

---

## 📊 ASCII Reference

| Range | Type | Example |
|-------|------|---------|
| 48-57 | Digits | '0'-'9' |
| 65-90 | Uppercase | 'A'-'Z' |
| 97-122 | Lowercase | 'a'-'z' |
| 32-126 | Printable | All visible characters |

---

<div align="center">
  <sub>Module c02: Foundation for advanced string manipulation</sub>
</div>
