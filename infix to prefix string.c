#include	<stdio.h>
#include	<string.h>

#define	MAX_ITEMS	20
#define MAX_ELEMENTS 30
#define	OPEN_BRACKET	'('
#define	CLOSE_BRACKET	')'

//shravani paraswar

struct Stack
{
  	char Items[MAX_ITEMS][MAX_LEN];
	int Top;
};

void	InitStack (struct Stack *ptr);
int		IsEmpty (struct Stack *ptr);
int		IsFull (struct Stack *ptr);
void	Push (struct Stack *ptr, char ch1);
int	Pop(struct Stack *ptr, char *ptr2);

void	InitStack (struct Stack *ptr)
{
	
	ptr->Top = -1;
	
}

int		IsEmpty (struct Stack *ptr)
{
	if (ptr->Top == -1)
		return (1);
	else
		return (0);
}

int		IsFull (struct Stack *ptr)
{
	if (ptr->Top == MAX_ITEMS - 1)
		return (1);
	else
		return (0);	
}
void	Push (struct Stack *ptr, arr ch1[MAX_ITEMS])
{
	if (IsFull (ptr))
	{
		printf ("Stack overflow\n");
	}
	else
	{
		ptr->Top++;
		strcpy(ptr->Items[ptr->Top])= ch1;
	}
}

int	Pop(struct Stack *ptr, char *ptr2)
{
	int flag;
	if (IsEmpty (ptr))
	{
		flag = 0;
	}
	else
	{
		ptr2 = ptr->Items[ptr->Top];
		ptr->Top--;
		flag = 1;
	}
	
	return (flag);
}

InfixToPrefix( char *Infix ,char *Prefix)
{
	char ch[MAX_LEN] , expr[MAX_LEN] , opnd1[MAX_LEN] , opnd2[MAX_LEN] ,
	char symbol ;
		struct Stack OpStk;	
		struct Stack OpndStk;
		InitStack (&OpStk);
		InitStack (&OpndStk);
	    strcpy (Prefix, "\0");    //ask an alternative
	    
	    while ((symbol = *Infix)!= '\0')
	    {
	    if(IsOperand (symbol)&&symbol==OPEN_BRACKET)
		{
			sprintf (expr, "%c", symbol);
			Push(&OpndStk,expr);
		}
		else if(IsOperator(symbol))
		{
		sprintf (expr, "%c", symbol);
			Push(&OpStk,expr);
		}
		else if(symbol==CLOSE_BRACKET)
		{
			Pop(&Opstk , &ch);
			while(!IsEmpty(&OpStk) && ch1 != OPEN_BRACKET)
			{
				Pop(&OpndStk, Opnd2);
			Pop(&OpndStk, Opnd1);
			sprintf (expr,("c,%s,%s",
			symbol , opnd1 , opnd2);
			     
			Push (&OpndStk, expr);
			}
		Infix++;
		}
	    	Pop(&OpndStk,&expr);
	    	
		}
		     
	
}

void	main()
{
	char Infix [MAX_ITEMS], Prefix[MAX_ITEMS] ;
			strcpy (Infix,A+B);
	InfixtoPrefix(Infix,Prefix);
	puts (Postfix);
	getchar();
		
	
	getchar();
}

