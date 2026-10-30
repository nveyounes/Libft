/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfarhat <yfarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 20:55:46 by username          #+#    #+#             */
/*   Updated: 2026/10/30 15:22:48 by yfarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* --- ft_strlen Tests --- */

static void	test_strlen(void)
{
	printf("\n=== Testing ft_strlen ===\n");
	printf("  test 1: %s\n", ft_strlen("hello") == strlen("hello") ? "[OK]" : "[FAIL]");
	printf("  test 2: %s\n", ft_strlen("") == strlen("") ? "[OK]" : "[FAIL]");
}

/* --- ft_strchr Tests --- */

static void	test_strchr(void)
{
	const char	*str = "hello world";

	printf("\n=== Testing ft_strchr ===\n");
	printf("  match mid: %s\n", ft_strchr(str, 'o') == strchr(str, 'o') ? "[OK]" : "[FAIL]");
	printf("  missing:   %s\n", ft_strchr(str, 'z') == strchr(str, 'z') ? "[OK]" : "[FAIL]");
	printf("  null byte: %s\n", ft_strchr(str, '\0') == strchr(str, '\0') ? "[OK]" : "[FAIL]");
}

/* --- ft_strrchr Tests --- */

static void	test_strrchr(void)
{
	const char	*str = "hello world";

	printf("\n=== Testing ft_strrchr ===\n");
	printf("  last match: %s\n", ft_strrchr(str, 'o') == strrchr(str, 'o') ? "[OK]" : "[FAIL]");
	printf("  missing:    %s\n", ft_strrchr(str, 'z') == strrchr(str, 'z') ? "[OK]" : "[FAIL]");
	printf("  null byte:  %s\n", ft_strrchr(str, '\0') == strrchr(str, '\0') ? "[OK]" : "[FAIL]");
}

/* --- ft_isalnum Tests --- */

static void	test_isalnum(void)
{
	printf("\n=== Testing ft_isalnum ===\n");
	printf(" checking for alphabetic : %s\n", (ft_isalnum('a') != 0) == (isalnum('a') != 0) ? "[OK]" : "[FAIL]");
	printf(" checking for digit : %s\n", (ft_isalnum('5') != 0) == (isalnum('5') != 0) ? "[OK]" : "[FAIL]");
	printf(" checking for NO alnum : %s\n", (ft_isalnum('@') == 0) == (isalnum('@') == 0) ? "[OK]" : "[FAIL]");
}

/* --- ft_isalnum Tests --- */

static void	test_isprint(void)
{
	printf("\n=== Testing ft_isprint===\n");
	printf(" checking for printables : %s\n", (ft_isprint('g') != 0) == (isprint('g') != 0) ? "[OK]" : "[FALSE]");
	printf(" checking for non printables : %s\n", (ft_isprint(7) == 0) == (isprint(7) == 0) ? "[OK]" : "[FALSE]");
}

/* --- ft_isalpha Tests --- */

static void	test_isalpha(void)
{
	printf("\n=== Testing ft_isalpha ===\n");
	printf("  lowercase 'a':      %s\n",
		((ft_isalpha('a') != 0) == (isalpha('a') != 0)) ? "[OK]" : "[FAIL]");
	printf("  uppercase 'Z':      %s\n",
		((ft_isalpha('Z') != 0) == (isalpha('Z') != 0)) ? "[OK]" : "[FAIL]");
	printf("  digit '3':          %s\n",
		((ft_isalpha('3') != 0) == (isalpha('3') != 0)) ? "[OK]" : "[FAIL]");
	printf("  special '[':        %s\n",
		((ft_isalpha('[') != 0) == (isalpha('[') != 0)) ? "[OK]" : "[FAIL]");
	printf("  boundary '@' (64):  %s\n",
		((ft_isalpha('@') != 0) == (isalpha('@') != 0)) ? "[OK]" : "[FAIL]");
}

/* --- ft_isdigit Tests --- */

static void	test_isdigit(void)
{
	printf("\n=== Testing ft_isdigit ===\n");
	printf("  digit '0':          %s\n",
		((ft_isdigit('0') != 0) == (isdigit('0') != 0)) ? "[OK]" : "[FAIL]");
	printf("  digit '9':          %s\n",
		((ft_isdigit('9') != 0) == (isdigit('9') != 0)) ? "[OK]" : "[FAIL]");
	printf("  raw number 5:       %s\n",
		((ft_isdigit(5) != 0) == (isdigit(5) != 0)) ? "[OK]" : "[FAIL]");
	printf("  boundary '/' (47):  %s\n",
		((ft_isdigit('/') != 0) == (isdigit('/') != 0)) ? "[OK]" : "[FAIL]");
	printf("  boundary ':' (58):  %s\n",
		((ft_isdigit(':') != 0) == (isdigit(':') != 0)) ? "[OK]" : "[FAIL]");
}

/* --- ft_isascii Tests --- */

static void	test_isascii(void)
{
	printf("\n=== Testing ft_isascii ===\n");
	printf("  standard 'a' (97):  %s\n",
		((ft_isascii('a') != 0) == (isascii('a') != 0)) ? "[OK]" : "[FAIL]");
	printf("  lower bound 0:      %s\n",
		((ft_isascii(0) != 0) == (isascii(0) != 0)) ? "[OK]" : "[FAIL]");
	printf("  upper bound 127:    %s\n",
		((ft_isascii(127) != 0) == (isascii(127) != 0)) ? "[OK]" : "[FAIL]");
	printf("  outside bound 128:  %s\n",
		((ft_isascii(128) != 0) == (isascii(128) != 0)) ? "[OK]" : "[FAIL]");
	printf("  negative -1:        %s\n",
		((ft_isascii(-1) != 0) == (isascii(-1) != 0)) ? "[OK]" : "[FAIL]");
}

/* --- ft_toupper Tests --- */

static void	test_toupper(void)
{
	printf("\n=== Testing ft_toupper ===\n");
	printf("  lower 'a' -> 'A':   %s\n",
		(ft_toupper('a') == toupper('a')) ? "[OK]" : "[FAIL]");
	printf("  lower 'z' -> 'Z':   %s\n",
		(ft_toupper('z') == toupper('z')) ? "[OK]" : "[FAIL]");
	printf("  already upper 'A':  %s\n",
		(ft_toupper('A') == toupper('A')) ? "[OK]" : "[FAIL]");
	printf("  digit '5':          %s\n",
		(ft_toupper('5') == toupper('5')) ? "[OK]" : "[FAIL]");
	printf("  symbol '!':         %s\n",
		(ft_toupper('!') == toupper('!')) ? "[OK]" : "[FAIL]");
}

/* --- ft_tolower Tests --- */

static void	test_tolower(void)
{
	printf("\n=== Testing ft_tolower ===\n");
	printf("  upper 'A' -> 'a':   %s\n",
		(ft_tolower('A') == tolower('A')) ? "[OK]" : "[FAIL]");
	printf("  upper 'Z' -> 'z':   %s\n",
		(ft_tolower('Z') == tolower('Z')) ? "[OK]" : "[FAIL]");
	printf("  already lower 'a':  %s\n",
		(ft_tolower('a') == tolower('a')) ? "[OK]" : "[FAIL]");
	printf("  digit '9':          %s\n",
		(ft_tolower('9') == tolower('9')) ? "[OK]" : "[FAIL]");
	printf("  symbol '@':         %s\n",
		(ft_tolower('@') == tolower('@')) ? "[OK]" : "[FAIL]");
}

/*---- STRESS TESTING STRNCMP ----*/

static void	hard_test_strncmp(void)
{
	int	res_mine = ft_strncmp("a", "b", 1);
	int	res_his = strncmp("a", "b", 1);

	int	ok = ((res_mine < 0 &&res_his < 0) ||
		(res_mine > 0 && res_his > 0) ||
	(res_mine == 0 && res_his == 0));
	printf("\n---STRESS TESTING STRNCMP---\n");
	printf("Results : %s\n", ok ? "[OK]" : "[FAILED]");
	printf("Value ft_strncmp: %d\n", ft_strncmp(" ", "b", 1));
	printf("Value strncmp: %d\n", strncmp(" ", "b", 1));
	printf("\n");
	printf("Value ft_strncmp: %d\n", ft_strncmp("aaaaaab", "aaax", 5));
	printf("Value strncmp: %d\n", strncmp("aaaaaab", "aaax", 5));
	printf("\n");
	printf("Value ft_strncmp: %d\n", ft_strncmp("a", "c", 5));
	printf("Value strncmp: %d\n", strncmp("a", "c", 5));
	printf("\n");
	printf("Value ft_strncmp: %d\n", ft_strncmp("ab", "abc", 2));
	printf("Value strncmp: %d\n", strncmp("ab", "abc", 2));
}

static void	test_memcmp(void)
{
	int	a = 50;
	int	b = 51;

	printf("\n----- Testing memcmp ----\n");
	printf("Testing s1 = 50, s2 = 51 : %s\n", (ft_memcmp(&a, &b, sizeof(int))) < 0 && (memcmp(&a, &b, sizeof(int)) < 0)
		? "[OK]" : "[FAILED]");
	printf("Testing s1 = Hello, s2 = Hello : %s\n", (ft_memcmp("Hello", "Hello", 5)) == 0 && (memcmp("Hello", "Hello", 5) == 0)
		? "[OK]" : "[FAILED]");
	printf("Testing s1 = Hello, s2 = H : %s\n", (ft_memcmp("Hello", "H", 2)) > 0 && (memcmp("Hello", "H", 2) > 0)
		? "[OK]" : "[FAILED]");
}

static void	test_memchr(void)
{
	int				a = 5000;
	int				b = 136;
	unsigned char	*res = ft_memchr(&a, b, 1);
	unsigned char	*res2 = memchr(&a, b, 1);

	printf("\n ---- Testing ft_memchr ----\n");
	if (res != NULL)
	{
		printf("Testing the resutls : %s\n", res == res2 ? "[OK]" : "[FAILED]");
		printf("Visualising the result = %d And in hexaDecimal : 0x%X\n", *res, *res);
	}
	else
	{
		printf("The Function found nothing \n");
	}
}

static void	test_ft_memset(void)
{
	int buff[4] = {240, 159, 152 ,132};
	int i= 0;
	char emoji[5];

	printf("\n --- Testing ft_memset --- \n");
	//printf("Target : %d\n", buff);
	// unsigned char *res = ft_memset(buff, 'x', 3);
	/*int	*res = ft_memset(&buff, 7, 4);

	res = ft_memset(&buff, 3, 3);
	res = ft_memset(&buff, 1, 1);*/
	while (i < 4)
	{
		ft_memset(&emoji[i],buff[i], 1);
		i++;
	}
	emoji[i] = '\0';
	// unsigned char *res2 = memset(&buff, 'x', 3);
	printf(" the result is %s\n", emoji);
	// printf("Checking results : %d\n", res == res2 ? "[OK]" : "[FAILED]");
}

static void	test_bzero(void)
{
	char	buffr[5] = "abcd";

	printf("\n ---- Testing ft_bzero ----\n");
	printf("Target : %s\n", buffr);
	ft_bzero(buffr, 2);
	for (int i = 0; i < 5; i++)
	{
		printf("buffr[%d] = 0x%02X ('%c')\n", i, (unsigned char) buffr[i], buffr[i]);
	}
}

static void	test_memcpy(void)
{
	char	buff_mine[6] = "zdllo";
	char	buff_real[6] = "zdllo";
	char	src[3] = "he";
	void	*ret_mine = ft_memcpy(buff_mine, src, 2);
	void	*ret_real = memcpy(buff_real, src, 2);
	int		content_match = (memcmp(buff_mine, buff_real, 6) == 0);
	int		return_match = (ret_mine == buff_mine &&ret_real == buff_real);

	printf("\n --- Testing ft_memcpy ---\n");
	printf("Content matches standard : %s\n", content_match ? "[OK]" : "[FAILED]");
	printf("Return value is dst      : %s\n", return_match ? "[OK]" : "[FAILED]");
}

static void	test_memmove(void)
{
	char	buff[10] = "123456789";

	printf("\n --- Testing ft_memmove ---\n");
	printf("Target string : %s\n", buff);
	ft_memmove(buff + 3, buff, 4);
	printf("Result : %s\n", buff);
}

static void	test_strlcpy(void)
{
	char	dst[6] = "Hello";
	char	src[5] = "Hell";

	printf("\n --- Testing ft_strlcpy ---\n");
	ft_strlcpy(dst, src, 0);
	printf("Results : %s\n", dst);
}

static void	test_strlcat(void)
{
	char	dst[20] = "Hi everyone";
	char	src[6] = "World";
	size_t	num;

	printf("\n --- Testing ft_strlcat ---\n");
	num = ft_strlcat(dst, src, 15);
	printf("Results : %s\n", dst);
	printf("Total len it tried to create : %zu\n", num);
}

static void	test_ft_strnstr(void)
{
	char	*big = "abcdefgh";
	char	*little = "cdef";

	printf("\n --- Testing ft_strnstr --- \n");
	char	*ptr = ft_strnstr(big, little, 4);

	printf("Result : %s\n", ptr);
}

static void	test_ft_atoi(void)
{
	char	*str = "       1 245bh";
	long	res;

	printf("\n --- Testing ft_atoi ----\n");
	res = ft_atoi(str);
	printf("Results : %ld\n", res);
}

static void	test_ft_calloc(void)
{
	char	*str;

	printf("\n --- Testing ft_calloc --- \n");
	str = ft_calloc(5, sizeof(char));
	if (!str)
	{
		printf("Allocation Failed\n");
		return ;
	}
	str[0] = 'H';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	printf("Result : %s\n", str);
	free(str);
	// printf("Result : %s\n", str);
}

static void	test_ft_strdup(void)
{
	char	*str = "Hello";
	char	*dup;

	dup = ft_strdup(str);
	printf("\n ---Testing ft_strdup ---\n");
	printf("Result : %s\n", dup);
	free(dup);
}
static void test_ft_strjoin(void)
{
	char *str1 = "Hi";
	char *str2 = "Hi";
	char *combined;
	
	printf("\n --- Testing ft_strjoin --- \n");
	combined = ft_strjoin(str1, str2);
	printf("Results : %s\n", combined);
	free(combined);
}
static void	test_substr(void)
{
	char	*str = "hello";
	char	*sub_str = ft_substr(str, 2, 5);

	printf("\n ---Testing ft_substr ---\n");
	printf("%s\n", sub_str);
	free(sub_str);
}

static void test_ft_strtrim(void)
{
	char *str = "----xxAx";
	char *trimmed;
	char *set = "-";

	printf("\n --- Testing ft_strtrim --- \n");
	trimmed = ft_strtrim(str, set);
	printf("Trimmed Result from <%s> with trim set <%s> is :<%s>\n", str , set, trimmed);
	free(trimmed);
}
/* static void test_ft_split(void)
{
	char *str = "----Hello ---World---";
	char *res;
	res = ft_split(str, '-');

	printf("\n --- Testing ft_split ---\n");
	printf("Results : <%s>\n", res);
	free(res);
}
*/

static void test_ft_itoa(void)
{
	int n;
	char *str;

	n = 0;
	printf("\n --- Testing ft_itoa --- \n");
	str = ft_itoa(n);
	printf("Results : <%s>\n", str);
	free(str);
}

static void test_ft_putchar_fd(void)
{
	int fd = 1;
	char c = 'a';
	printf("\n --- Testing ft_putchar_fd --- \n");
	ft_putchar_fd(c, fd);
	printf("\n");	
}

static void test_ft_putstr_fd(void)
{
	int fd = 1;
	char *str = "Hello";
	printf("\n --- Testing ft_putstr_fd --- \n");
	ft_putstr_fd(str, fd);
}
static void test_ft_putendl_fd(void)
{
	int fd = 1;
	char *str = "Hello";
	printf("\n --- Testing ft_putendl_fd --- \n");
	ft_putendl_fd(str, fd);
}


static void test_ft_putnbr_fd(void)
{
	int n = -100;
	printf("\n --- Testing ft_putnbr_fd --- \n");
	ft_putnbr_fd(n, 1);
}
static void test_ft_lstnew(void)
{
	int     arr[1] = {42};
    char    *str1 = "Fornite";
    
	printf("\n ---- Testing ft_lstnew --- \n");
    t_list *node1 = ft_lstnew(arr);
    t_list *node2 = ft_lstnew(str1);

    node1->next = node2; 
    printf("Results <%d>\n", *(int *)node1->content);
	printf("Results <%s>\n", (char *)node1->next->content);
	free(node1);
	free(node2);
	
}

static void test_ft_lstadd_front(void)
{
	char	*s1 = "Hello";
	char	*s2 = "World";
	
	printf("\n ---- Testing ft_lstadd_front --- \n");
	t_list *node1 = ft_lstnew(s1);
	t_list *node2 = ft_lstnew(s2);
	t_list *head = NULL;
	
	printf("Head address = <%p>\n", head);
	ft_lstadd_front(&head, node2);
	printf("Head address = <%p>\n", head);
	ft_lstadd_front(&head, node1);	
	printf("Head address = <%p>\n", head);
	printf("address is <%p> with string <%s>  \n", node1, s1);
	printf("address is <%p> with string <%s>  \n", node1->next, s2);
	

	free(node1);
	free(node2);

}

static void test_ft_lstsize_lstlast(void)
{
	/*
	char	*p1 = "Hello ";
	char	*p2 = "Big ";
	char	*p3 = "Ass ";
	char	*p4 = "MotherFucker ";
	int		 count;
	
	t_list	*node_1 = ft_lstnew(p1);
	t_list	*node_2 = ft_lstnew(p2);
	t_list	*node_3 = ft_lstnew(p3);
	t_list	*node_4 = ft_lstnew(p4);
	t_list	*head = NULL;
	t_list  *last;
	
	printf("\n ---- Testing ft_lstsize && ft_lstlast && ft_lstadd_back --- \n");
	
	ft_lstadd_front(&head, node_3);
	ft_lstadd_front(&head, node_2);
	ft_lstadd_front(&head, node_1);

	
	printf("Node 1 address is : <%p>\n", (void *)node_1);
	printf("Node 2 address is : <%p>\n",  (void *)node_2);
	printf("Node 3 address is : <%p>\n", (void *)node_3);
	printf("Node 4 address is : <%p>\n", (void *)node_4);
	printf("Be Hold the ADDRESS OF HEAD : < %p >\n", head);
	printf("-----------------------------------------------\n");
	
	
	
	ft_lstadd_back(&head, node_4);
	printf("Node 3 next address is : <%p>\n", (void *)node_3->next);
	printf("Node 4 next address is : <%p>\n", (void *)node_4->next);
	
	printf("Be Hold the ADDRESS OF HEAD : < %p >\n", head);
	printf("-----------------------------------------------\n");
	
	count = ft_lstsize(head);
	last = ft_lstlast(head);
	printf("Last node is <%p> \n", (void *)last);
	printf("Total Nodes count : < %d >\n", count);
	
	free(node_1);
	free(node_2);
	free(node_3);
	free(node_4);
	*/
	t_list *node1;
    t_list *node2;
    t_list *head = NULL;

    node1 = ft_lstnew("Hello");
    node2 = ft_lstnew("World");

	printf("\n ---- Testing ft_lstsize && ft_lstlast && ft_lstadd_back --- \n");
    printf("Address of n1 is <%p>\n", node1);
    printf("Address of n2 is <%p>\n", node2);
    
    ft_lstadd_back(&head, node1);
    ft_lstadd_back(&head, node2);
    
    printf("address of n1 next is <%p>\n", node1->next);
    printf("address of head is <%p>\n", head);
	
	int count = ft_lstsize(head);
	t_list *last = ft_lstlast(head);
	printf("Last node is <%p> \n", (void *)last);
	printf("Total Nodes count : < %d >\n", count);

    free(node1);
    free(node2);
	
	/* t_list *empty_head = NULL;
	t_list *first = ft_lstnew("Solo");
	int count;
	t_list *last;
	printf("\n-------\n");
	
	ft_lstadd_back(NULL, first);
	count = ft_lstsize(empty_head);
	last = ft_lstlast(empty_head);
	
	printf("address of first is <%p>\n", first);
	printf("address of first next is <%p>\n", first->next);
	printf("Last node is <%p> \n", (void *)last);
	printf("Total Nodes count : < %d >\n", count);
	free(first);
	*/
}
static void del(void *ptr)
{
    free(ptr);
}
static void test_ft_lstdelone(void)
{
	t_list *node1;
    char *ptr = "Hello";
    char *dub = ft_strdup(ptr);
    node1 = ft_lstnew(dub);
	
	printf("\n ----- Testing ft_lstdelone -----\n");
    printf("address of node 1 BEFORE <%p>\n", node1);
    
    
    printf("Lets try printing <%s>\n", (char *)node1->content);
    ft_lstdelone(node1, del);
    // printf("Lets try printing after freeing <%s>\n", (char *)node1->content);
}

static void test_ft_lstclear(void)
{
	t_list *node1;
	t_list *node2;
	t_list *head = NULL;
	int count;
	t_list *last;
    char *ptr = "Hello";
    char *dub1 = ft_strdup(ptr);
	char *dub2 = ft_strdup(ptr);
	
    node1 = ft_lstnew(dub1);
	node2 = ft_lstnew(dub2);
	
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);
	
	printf("\n ----- Testing ft_lstclear -----\n");
    printf("address of node 1  <%p> and its content <%s>\n", node1, (char *)node1->content);
	printf("address of node 2  <%p> and its content <%s>\n", node2, (char *)node2->content);
    
	printf("Be Hold the ADDRESS OF HEAD : < %p >\n", head);

	
	count = ft_lstsize(head);
	last = ft_lstlast(head);
	printf("Last node is <%p> \n", (void *)last);
	printf("Total Nodes count : < %d >\n", count);
	
	ft_lstclear(&head, del);

	printf("Be Hold the ADDRESS OF HEAD : < %p >\n", head);
}
static void ft_uppering(void *str)
{
	char *ptr = (char *)str;
	while (*ptr)
	{
		*ptr = ft_toupper(*ptr);
		 ptr++;
	}
}
static void test_ft_lstiter(void)
{
	t_list *node1;
	t_list *node2;
	t_list *head = NULL;
	int count;
	t_list *last;
    char *ptr = "Hello";
    char *dub1 = ft_strdup(ptr);
	char *dub2 = ft_strdup(ptr);
	
    node1 = ft_lstnew(dub1);
	node2 = ft_lstnew(dub2);
	
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);
	
	printf("\n ----- Testing ft_lstiter -----\n");
    printf("address of node 1  <%p> and its content <%s>\n", node1, (char *)node1->content);
	printf("address of node 2  <%p> and its content <%s>\n", node2, (char *)node2->content);
    
	printf("Be Hold the ADDRESS OF HEAD : < %p >\n", head);

	
	count = ft_lstsize(head);
	last = ft_lstlast(head);
	printf("Last node is <%p> \n", (void *)last);
	printf("Total Nodes count : < %d >\n", count);
	
	ft_lstiter(head, ft_uppering);
	printf("address of node 1  <%p> and its content <%s>\n", node1, (char *)node1->content);
	printf("address of node 2  <%p> and its content <%s>\n", node2, (char *)node2->content);

	
	ft_lstclear(&head, del);
}

static void    *f_lstmap(void *content)
{
    char *new_content;
	int	i = 0;
	
    new_content = ft_strdup((char *)content);
    if (!new_content)
        return (NULL);
    while (new_content[i])
    {
        new_content[i] = 'x';
        i++;
    }
    return (new_content);    
}

static void test_ft_lstmap(void)
{
	t_list *node1;
	t_list *node2;
	t_list *head = NULL;
	int count;
	t_list *last;
    char *ptr = "Hello";
    char *dub1 = ft_strdup(ptr);
	char *dub2 = ft_strdup(ptr);
	int i;

	i = 1;
	
    node1 = ft_lstnew(dub1);
	node2 = ft_lstnew(dub2);
	
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);
	
	printf("\n ----- Testing ft_lstmap -----\n");
    printf("address of node 1  <%p> and its content <%s>\n", node1, (char *)node1->content);
	printf("address of node 2  <%p> and its content <%s>\n", node2, (char *)node2->content);
    
	printf("Be Hold the ADDRESS OF HEAD : < %p >\n", head);

	
	count = ft_lstsize(head);
	last = ft_lstlast(head);
	printf("Last node is <%p> \n", (void *)last);
	printf("Total Nodes count : < %d >\n", count);

	t_list *new_node_start = ft_lstmap(head, f_lstmap, del); //address of first node probably
	t_list *new_head = new_node_start;
	while (new_node_start)
	{
		printf("New node number <%d>, address <%p> with content <%s>\n", i, new_node_start, (char *)new_node_start->content);
		i++;
		new_node_start = new_node_start->next;
	}
	printf("Head of the new nodes <%p>\n", new_head);
	
	ft_lstclear(&head, del);
	ft_lstclear(&new_head, del);
}
static void	get_base_info(int n)
{
	printf("\n---- Base Infos ----\n");
	printf("Target Number : %d\n", n);
	printf("Decimal :   %x\n", n);
	printf("Octal :     %o\n", n);
}

static void	print_bits(unsigned char n)
{
	printf("\n -------------- \n");
	printf("\nBinary : ");
	for (int i = 7; i >= 0; i--)
		printf("%d", (n >> i) & 1);
	printf("\n");
}

int	main(void)
{
	int	n = 5001;

	test_strlen();
	test_strchr();
	test_strrchr();
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_toupper();
	test_tolower();
	hard_test_strncmp();
	test_memcmp();
	test_memchr();
	test_ft_memset();
	test_bzero();
	test_memcpy();
	test_memmove();
	test_strlcpy();
	test_strlcat();
	test_ft_strnstr();
	test_ft_atoi();
	test_ft_calloc();
	test_ft_strdup();
	test_substr();
	test_ft_strtrim();
	test_ft_itoa();
	test_ft_strjoin();
	// test_ft_split();
	test_ft_putchar_fd();
	test_ft_putstr_fd();
	test_ft_putendl_fd();
	test_ft_putnbr_fd();
	test_ft_lstnew();
	test_ft_lstadd_front();
	test_ft_lstsize_lstlast();
	test_ft_lstdelone();
	test_ft_lstclear();
	test_ft_lstiter();
	test_ft_lstmap();
	print_bits((unsigned char) n);
	get_base_info(n);
	printf("\n");
	printf("\nDone testing.\n");
	return (0);
}
