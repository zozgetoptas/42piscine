# Module C03: Advanced String Operations

## 🎯 Module Objectives
Implement complex string manipulation functions including comparison, concatenation, and pattern matching.

## 📚 Exercises Overview

| Exercise | Function | Concept |
|----------|----------|---------|
| **ex00** | `ft_strcmp()` | String comparison |
| **ex01** | `ft_strncmp()` | Bounded string comparison |
| **ex02** | `ft_strcat()` | String concatenation |
| **ex03** | `ft_strncat()` | Bounded concatenation |
| **ex04** | `ft_strstr()` | Substring search |
| **ex05** | `ft_strlcat()` | Safe concatenation |

---

## 💡 Key Implementations

### String Comparison
```c
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
```
**Returns:** 0 if equal, <0 if s1<s2, >0 if s1>s2

### String Concatenation
```c
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
```

### Substring Search (Pattern Matching)
```c
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		i = 0;
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		str++;
	}
	return (NULL);
}
```
**Time Complexity:** O(n*m) where n=string length, m=pattern length

### Safe Concatenation
```c
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
```

---

## 🎓 Learning Outcomes

- ✅ Character-level string comparison
- ✅ String building and concatenation
- ✅ Pattern matching algorithms
- ✅ Safe string operations with buffer size handling
- ✅ Return value conventions (expected length vs actual length)

---

<div align="center">
  <sub>Module c03: Bridge between basic and advanced string processing</sub>
</div>
