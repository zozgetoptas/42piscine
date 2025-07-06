/*
#include <unistd.h>
int main(int argc, char **argv)
{
	int i = 0;

	if(argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'a')
			{
				write(1,"a",1);
				break;
			}
			i++;
		}
	}
	else
	{
		write(1,"a",1);
	}
	write(1,"\n",1);
	return (0);	
}
*/
/*
#include <unistd.h>
int main()
{
	write(1,"9876543210",10);
	return (0);
}
*/
/*
#include <unistd.h>
int main()
{
	write(1,"0123456789",10);
	return (0);
}
*/
/*
#include <unistd.h>
int main()
{
	write(1,"Hello World!",12);
	return (0);
}
*/
/*
#include <unistd.h>
int main()
{
	
	write(1,"aBcDeFgHiJkLmNoPqRsTuVwXyZ",26);
	
}
*/
/*
#include <unistd.h>
int main (int argc, char **argv)
{
	if(argc > 1)
	{
		int i = 0;
		while (argv[1][i])
		{
			write(1,&argv[1][i],1);
			i++;
		}
		write(1,"\n",1);
	}
	else
		write(1,"\n",1);
	return (0);	
}
*/
/*
#include <unistd.h>
int main(int argc, char **argv)
{
	if (argc > 1)
	{
		int i = 0;

		while(argv[argc - 1][i])
		{
			write(1,&argv[argc - 1][i],1);
			i++;
		}
		write(1,"\n",1);
	}
	else
		write(1,"\n",1);
}
*/
/*
#include <unistd.h>
int main()
{
	char c = 'z';
	while(c >= 'a')
	{
		write(1,&c,1);
		c--;
	}
	write(1,"zYxWvUtSrQpOnMlKjIhGfEdCbA",26);
	
}
*/
/*
#include <unistd.h>

int		main()
{
	write(1, "a", 1);
	return (0);
}
*/
/*
char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
*/
/*
#include <unistd.h>
int main(int argc, char **argv)
{
	int i = 0;
	if(argc == 4)
	{
		while(argv[1][i] && argv[2][1] == '\0' && argv[3][1] == '\0')
		{
			if(argv[1][i] == argv[2][0])
			{
				argv[1][i] = argv[3][0];
			}
			write(1,&argv[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
}
*/
/*

#include <unistd.h>
int main(int argc, char **argv)
{
	int i,j;
	char found[256]={0};

	if(argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if((argv[1][i] == argv[2][j]) && found[(unsigned char)argv[1][i]] == 0)
				{
					write(1,&argv[1][i],1);
					found[(unsigned char)argv[1][i]] = 1;
					break;
				}
				j++;
			}
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}
*/
/*
#include <unistd.h>
int main(int argc, char **argv)
{
	int i,j;
	char found[256]={0};

	if(argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if(found[(unsigned char)argv[1][i]] == 0)
				{
					write(1,&argv[1][i],1);
					found[(unsigned char)argv[1][i]] = 1;
				}	
				i++;		
		}
		j = 0;
		while (argv[2][j])
		{
			if(found[(unsigned char)argv[2][j]] == 0)
				{
					write(1,&argv[2][j],1);
					found[(unsigned char)argv[2][j]] = 1;
				}
				j++;
		}

	}
	write(1,"\n",1);
	return (0);
}
*/
/*
int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
*/
/*
#include <unistd.h>
int main (int argc, char **argv)
{
	int i = 0;
	int repeat = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				repeat = argv[1][i] - 'A' + 1;
			}
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				repeat = argv[1][i] - 'a' + 1;
			}
			while(repeat > 0)
			{
				write(1,&argv[1][i],1);
				repeat--;
			}
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}
*/
/*                !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!wdmatch.c
#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;

    if (argc == 3)
    {
        while (argv[1][i])
        {
            while (argv[2][j])
            {
                if (argv[1][i] == argv[2][j])
                {
                    i++;
                    break;
                }
                j++;
            }
  
			if (argv[2][j] == '\0')
            {
				write(1, "\n", 1);
                return 0;
            }
        }
        write(1, argv[1], i);
    }

    write(1, "\n", 1);
    return 0;
}
*/
/*
int	ft_atoi(const char *str)
{
	int sign = 1;
	int i = 0;
	int result = 0;

		while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		{
			i++;
		}
		if (str[i] == '+' || str[i] == '-')
		{
			if(str[i] == '-')
			{
				sign *= -1;
			}
			i++;
		}
		
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = (result * 10) + (str[i] - 48);
			i++;
		}
		return (result * sign);
}
*/
/*
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main(int argc, char ** argv)
{
	if (argc == 4)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[3]);
		char op = argv[2][0];
		
		if (op == '+')
        	printf("%d\n", a + b);
    	else if (op == '-')
        	printf("%d\n", a - b);
   	 	else if (op == '*')
       		printf("%d\n", a * b);
    	else if (op == '/')
       		printf("%d\n", a / b);
   		else if (op == '%')
       		printf("%d\n", a % b);
  		else
        	printf("\n"); 

    return (0);
	}
}
*/
/*
#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] <= 'Z' && argv[1][i] >= 'A')
			{
				argv[1][i] += 32;
				write(1,&argv[1][i],1);
				i++;
			}
			else if (argv[1][i] <= 'z' && argv[1][i] >= 'a')
			{
				argv[1][i] -= 32;
				write(1,&argv[1][i],1);
				i++;
			}
			else
			{
				write(1,&argv[1][i],1);
				i++;
			}
		}
	}
	write (1,"\n",1);
	return (0);
}
*/
/*
#include <unistd.h>
int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
			{
				argv[1][i] += 13;
				write(1,&argv[1][i],1);
				i++;
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
			{
				argv[1][i] += 13;
				write(1,&argv[1][i],1);
				i++;
			}
			else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
			{
				argv[1][i] -= 13;
				write(1,&argv[1][i],1);
				i++;
			}
			else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
			{
				argv[1][i] -= 13;
				write(1,&argv[1][i],1);
				i++;
			}
			else
			{
				write(1,&argv[1][i],1);
				i++;
			}
		}
	}
	write(1,"\n",1);
	return (0);
}
*/
/*          first word
#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while ((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == ' ')
		{
			i++;
		}
		while(argv[1][i] && !((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == ' '))
		{
			write(1,&argv[1][i],1);
			i++;
		}
	}
		

	write(1,"\n",1);
	return (0);
}
*/
/*
#include <unistd.h>

void write_number (int number)
{
	if (number > 9)
	{
		write_number (number / 10);
	}
	write(1,&"0123456789"[number % 10],1);
}

int main(int argc, char **argv)
{
	int number;
	number = 1;
	while (number <= 100)
	{
		if (number % 15 == 0)
			write (1,"fizzbuzz",1);
		else if (number % 3 == 0)
			write (1,"fizz",4);
		else if (number % 5 == 0)
			write(1,"buzz",4);
		else
			write_number(number);
		write(1,"\n",1);
		number++;			
	}

}
*/
/*
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1,&str[i],1);
		i++;
	}
}
*/
/*
void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
*/
/*
#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			i++;
		}
		i--;
		while (i >= 0)
		{
			write(1,&argv[1][i],1);
			i--;
		}
	}
	write(1,"\n",1);
}
*/
/* 
#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv [1][i] >= 'a' && argv [1][i] < 'z') || (argv [1][i] >= 'A' && argv [1][i] < 'Z'))
				argv[1][i] += 1;
			else if (argv[1][i] == 'z' || argv[1][i] == 'Z')
				argv[1][i] -= 25;
			i++;
		}
		i = 0;
		while(argv[1][i])
		{
			write(1,&argv[1][i],1);
			i++;
		}
		
	}
	write(1,"\n",1);
}
*/
/*
#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	
	if (argc == 2)
	{
		while (argv[1][i])
		{
			i++;
		}
		i--;
		while (i >= 0)
		{
			write(1,&argv[1][i],1);
			i--;
		}
	}
	write(1,"\n",1);
	return (0);

}
*/
/*
#include <unistd.h>

int main(int argc, char **argv )
{
	int i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] >= 'a' && argv[1][i] < 'z') || (argv[1][i] >= 'A' && argv[1][i] < 'Z'))
			{
				argv [1][i] += 1;
				write (1,&argv[1][i],1);
			}
			else if ((argv[1][i] == 'z') || (argv[1][i] == 'Z'))
			{
				argv[1][i] -= 25;
				write(1,&argv[1][i],1);
			}
			else	
				write(1,&argv[1][i],1);
			i++;	
		}
	}
	write(1,"\n",1);
	return (0);
}
*/

/*         strdup !!!!!!!!!!!!

#include <stdlib.h>

char *ft_strdup (char *src)
{
	char *ret_val;
	int i = 0;

	while (src[i])
	{
		i++;
	}
	ret_val = malloc(sizeof(char) * (i + 1));
	if (ret_val == NULL)
	{
		return (0);
	}
	i = 0;
	while (src[i])
	{
		ret_val[i] = src[i];
		i++;
	}
	ret_val[i] = '\0';
	return(ret_val);
}
*/
/*        last word !!!!!!!!!
#include <unistd.h>

int main (int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			i++;
		}
		i--;
		while (i >= 0 && (argv[1][i] == '\t' || argv[1][i] == ' '))
		{
			i--;
		}

		while (i >= 0 && argv[1][i] != '\t' && argv[1][i] != ' ')
		{
			i--;
		}
		i++;
		while(argv[1][i] != '\0' && argv[1][i] != '\t' && argv[1][i] != ' ')
		{
			write(1,&argv[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}
*/
/*          alpha mirror !!!!!!!!!!!!
#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;

	if (argc  == 2)
	{
		while (argv[1][i])
		{
			if ((argv [1][i] >= 'a' && argv[1][i] < 'z'))
			{
				argv[1][i] = 'z' -argv[1][i] + 'a';
			}	
			else if (argv [1][i] >= 'A' && argv[1][i] < 'Z')
			{
				argv[1][i] = 'Z' -argv[1][i] + 'A';
			}
			write(1,&argv[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}
*/
/*     !!!!!!!!!!   fizzbuzz
#include <unistd.h>
void put_char(char c)
{
	write(1,&c,1);
}

void write_number(int nb)
{
	if(nb > 9)
	{
		write_number(nb / 10);
		put_char(nb % 10 + '0');
	}
	else
		put_char(nb + '0');
}
int main()
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
		{
			write(1,"fizzbuzz",8);
		}
		else if (i % 5 == 0)
		{
			write(1,"buzz",4);
		}
		else if (i % 3 == 0)
		{
			write(1,"fizz",4);
		}
		else	
			write_number(i);
		write(1,"\n",1);	
		i++;	
	}

}
*/
/*            max !!!!!!
int		max(int* tab, unsigned int len)
{
	int i = 0;

	if (len == 0)
		return (0);
	int max = tab[i];	
	while(i < len)
	{
		if (tab[i] > max)
		{
			max = tab[i];
		}
		i++;
	}	
	return (max);
}
#include <stdio.h>

int main()
{
	int a[]={1,6,2,98,-4};
	printf("%d",max(a,5));
}
*/    
/* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! strcmp
int    ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
*/
/*
char    *ft_strrev(char *str)
{
	int end = 0;
	int start = 0;
	char temp;

	if (!str)
        return (str);

	while (str[i])
	{
		end++;
	}
	end--;
	while(end > start)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;

		start++;
		end--;
	}
	return (str);
}
*/
/*
#include <unistd.h>
char *ft_swapcase (char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		write(1,&str[i],1);
		i++;	
	}
	return (str);
}
int main()
{   char str[] = "hiiiFGHJ";
	ft_swapcase(str);
}
*/
/*                  isprimeof2 !!!!!!!!!
int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
	{
		return (0);
	}
	while (n % 2 == 0)
	{
		n /= 2;
	}
	if (n == 1)
	{
		return (1);
	}
	else	
		return (0);
}
*/
/*
#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 4)
	{
		while (argv[1][i] && argv[2][1] == '\0' && argv[3][1] == '\0')
		{
			if (argv[1][i] == argv[2][0])
			{
				argv[1][i] = argv[3][0];
			}
			write(1,&argv[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}
*/
/*
#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
		{
			i++;
		}
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			write(1,&argv[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}
*/
/*
#include <unistd.h>

void put_char(char c)
{
	write(1,&c,1);
}
void write_number(int nb)
{
	if (nb > 9)
	{
		write_number(nb / 10);
		put_char(nb % 10 + '0');
	}
	else
		put_char(nb + '0');
}
int main()
{
	int nb = 1;

	while(nb <= 100)
	{
		if (nb % 15 == 0)
		{
			write(1,"fizzbuzz",8);
		}
		else if (nb % 5 == 0)
		{
			write(1,"buzz",4);
		}
		else if (nb % 3 == 0)
		{
			write(1,"fizz",4);
		}
		else	
			write_number(nb);

		write(1,"\n",1);	
		nb++;	
	}
	return (0);

}
*/
/*
#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
		{
			i++;
		}
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			write(1,&argv[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}
*/
/*
#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
			i++;
	
		i--;
		while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i--;
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
			i--;
		i++;
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			write(1,&argv[1][i],1);
			i++;
		}	
	}
	write(1,"\n",1);
	return (0);
}
*/
/*
#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;
	char found[256]={0};

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j] && found[argv[1][i]] == 0)
				{
					write(1,&argv[1][i],1);
					found[argv[1][i]] = 1;
					break;
				}
				j++;
			}
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}
*/
/*        atoi !!
int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		result = (result * 10) + (str[i] - '0');
		i++; 
	}
	return (result * sign);
}
*/
/*
int    ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
*/
/*
#include <unistd.h>

int main (int argc, char **argv)
{
	int i;
	int j;
	char found[256] = {0};

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if ((argv[1][i] == argv[2][j]) && found[argv[1][i]] == 0)
				{
					write(1,&argv[1][i],1);
					found[argv[1][i]] = 1;
					break;
				}
				j++;
			}
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}
*/
/*
#include <unistd.h>
int main(int argc, char **argv)
{
	int i, j;
	i = 0;
	j = 0;

	if (argc == 3)
	{
		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					i++;
					break;
				}
				j++;
			}
			if (argv[2][j] == '\0')
			{
				write(1,"\n",1);
				return (0);
			}
		}
		write(1,argv[1],i);
	}
	write(1,"\n",1);
	return (0);
}
*/
/*
#include <unistd.h>
int main(int argc,char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		write(1,&argv[1][i],1);
		i++;
		while (argv[1][i])
		{
			write(1,"   ",3);
			write(1,&argv[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}
*/
/* #include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	char found[256] = {0};

	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (found[argv[1][i]] == 0)
			{
				write(1,&argv[1][i],1);
				found[argv[1][i]] = 1;
			}
			i++;
		}
		while (argv[2][j])
		{
			if (found[argv[2][j]] == 0)
			{
				write(1,&argv[2][j],1);
				found[argv[2][j]] = 1;
			}
			j++;
		}

	}
	write(1,"\n",1);
	return (0);
} */