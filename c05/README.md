# Module C05: Recursion & Algorithm Design

## 🎯 Module Objectives
Master recursive problem-solving and implement fundamental mathematical algorithms with optimization.

## 📚 Exercises Overview

| Exercise | Function | Concept |
|----------|----------|---------|
| **ex00** | `ft_iterative_factorial()` | Factorial - iterative approach |
| **ex01** | `ft_recursive_factorial()` | Factorial - recursive approach |
| **ex02** | `ft_iterative_power()` | Power calculation - iterative |
| **ex03** | `ft_recursive_power()` | Power calculation - recursive |
| **ex04** | `ft_fibonacci()` | Fibonacci sequence |
| **ex05** | `ft_sqrt()` | Integer square root |
| **ex06** | `ft_is_prime()` | Prime number detection |
| **ex07** | `ft_find_next_prime()` | Next prime finder |

---

## 💡 Core Algorithm Implementations

### 1. Factorial (Iterative vs Recursive)

**Iterative Approach - O(n) time, O(1) space:**
```c
int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
```

**Recursive Approach - O(n) time, O(n) space:**
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

**Analysis:**
- Iterative: More efficient, no recursion overhead
- Recursive: More elegant, easier to understand

### 2. Power Calculation

**Efficient Iterative:**
```c
int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
```
- Time: O(power)
- Space: O(1)

### 3. Fibonacci Sequence

**Optimized Iterative Approach:**
```c
int	ft_fibonacci(int index)
{
	int	current;
	int	next;
	int	temp;
	int	i;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	current = 0;
	next = 1;
	i = 1;
	while (i < index)
	{
		temp = current + next;
		current = next;
		next = temp;
		i++;
	}
	return (next);
}
```
- Time: O(n) instead of O(2ⁿ) with naive recursion
- Space: O(1)

### 4. Integer Square Root

**Optimized Search - O(√n):**
```c
int	ft_sqrt(int nb)
{
	int	root;

	if (nb < 0)
		return (0);
	root = 0;
	while (root * root < nb)
		root++;
	if (root * root == nb)
		return (root);
	return (0);
}
```
- Iteration only up to √n
- Much better than O(n) naive approach

### 5. Prime Number Detection

**Optimized Algorithm - O(√n):**
```c
int	ft_is_prime(int nb)
{
	int	divisor;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	divisor = 3;
	while (divisor * divisor <= nb)
	{
		if (nb % divisor == 0)
			return (0);
		divisor += 2;
	}
	return (1);
}
```
**Optimizations:**
- Early returns for edge cases
- Only check odd divisors
- Only check up to √n

### 6. Find Next Prime

```c
int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
```
- Uses `ft_is_prime()` helper
- Increments until prime found

---

## 🎯 Recursion Principles

### Base Case vs Recursive Case
```c
// Complete recursive function structure
int	recursive_function(int n)
{
	// BASE CASE: Stop recursion
	if (n <= 1)
		return (1);
	
	// RECURSIVE CASE: Call self with progress toward base
	return (n * recursive_function(n - 1));
}
```

### Call Stack Visualization
```
factorial(5)
├── factorial(4)
│   ├── factorial(3)
│   │   ├── factorial(2)
│   │   │   ├── factorial(1) → returns 1
│   │   │   └── returns 2 * 1 = 2
│   │   └── returns 3 * 2 = 6
│   └── returns 4 * 6 = 24
└── returns 5 * 24 = 120
```

### When to Use Recursion
✅ **Good for:**
- Tree/graph traversal
- Divide and conquer
- Mathematical sequences
- Backtracking problems

❌ **Avoid when:**
- Simple iteration works
- Stack depth is concern
- Performance critical

---

## 📊 Algorithm Complexity Comparison

| Algorithm | Iterative | Recursive | Space |
|-----------|-----------|-----------|-------|
| **Factorial(5)** | O(n) | O(n) | O(1) vs O(n) |
| **Fibonacci(10)** | O(n) | O(2ⁿ) | O(1) vs O(n) |
| **Power(2,10)** | O(n) | O(n) | O(1) vs O(n) |
| **Sqrt(100)** | O(√n) | - | O(1) vs O(√n) |
| **Prime(17)** | O(√n) | - | O(1) vs O(√n) |

---

## 🧪 Testing & Verification

### Test Cases
```bash
# Factorial
gcc -Wall -Wextra -Werror c05/ex00/ft_iterative_factorial.c -o fact
./fact
# Test: fact(5) should return 120

# Fibonacci
gcc -Wall -Wextra -Werror c05/ex04/ft_fibonacci.c -o fib
# Test: fib(10) = 55

# Prime Detection
gcc -Wall -Wextra -Werror c05/ex06/ft_is_prime.c -o is_prime
# Test: is_prime(17) = 1, is_prime(18) = 0

# Square Root
gcc -Wall -Wextra -Werror c05/ex05/ft_sqrt.c -o sqrt
# Test: sqrt(100) = 10, sqrt(99) = 0
```

### Verification Examples
```
factorial(0) = 1
factorial(5) = 120
factorial(10) = 3628800

fibonacci(0) = 0
fibonacci(1) = 1
fibonacci(5) = 5
fibonacci(10) = 55

is_prime(2) = 1
is_prime(17) = 1
is_prime(18) = 0
is_prime(97) = 1

sqrt(16) = 4
sqrt(17) = 0 (not perfect square)
sqrt(100) = 10
```

---

## 📈 Optimization Insights

### Example: Fibonacci Optimization
```
Naive Recursive:  O(2ⁿ)   - EXPONENTIAL
│
└─ Fix: Add memoization → O(n)

Iterative:        O(n)    - LINEAR ✓
```

### Example: Prime Checking Optimization
```
Brute Force:      O(n)    - Check all divisors
│
└─ Optimization 1: Only odd divisors → O(n/2)
└─ Optimization 2: Only up to √n → O(√n) ✓
└─ Optimization 3: Skip even numbers → O(√n/2) ✓
```

---

## 🎓 Learning Outcomes

After completing c05:
- ✅ Master recursive thinking
- ✅ Understand algorithm efficiency
- ✅ Implement mathematical algorithms
- ✅ Optimize for performance
- ✅ Compare iterative vs recursive
- ✅ Handle negative/edge cases
- ✅ Perform Big O analysis

---

## 🚀 Common Mistakes

| Issue | Solution |
|-------|----------|
| Stack overflow | Ensure base case exists |
| Wrong base case | Return correct value for n=0,1 |
| Infinite recursion | Verify progress toward base |
| Inefficient algorithm | Optimize: check up to √n |
| Integer overflow | Check ranges, handle overflow |

---

## 💡 Key Insights

1. **Not all loops can be recursive** - Efficiency matters
2. **Base case is critical** - Without it, infinite recursion
3. **Optimization patterns** - √n is better than n
4. **Mathematical thinking** - Understanding the problem first
5. **Testing edge cases** - Negative numbers, zero, boundaries

---

<div align="center">
  <sub>Algorithm mastery = professional programming foundation</sub>
</div>
