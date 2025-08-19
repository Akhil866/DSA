#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
	int info;
	struct node *link;
	
};
struct node *frist;
void main(int arr)
{
	void create( ), traverse( ), insert_beg( ), insert_end( ),
delete_beg( ), delete_end( );
clrscr( ) ;
create( ) ;
traverse( ) ;
insert_beg( ) ;
traverse( ) ;
insert_end( ) ;
traverse( ) ;
delete_beg( ) ;
traverse( ) ;
getch( ) ;
}
void create( )
{
struct node *ptr, *cpt ;
char ch ;
ptr = (struct node *) malloc (size of (struct node)) ;
printf("input first node") ;
scanf("%d" & ptr -> info) ;
first = ptr ;
do {
cpt = (struct node *) malloc (size of (struct node)) ;
printf ("Input next node") ;
scanf ("%d" & cpt -> info) ;
ptr -> link = cpt ;
ptr = cpt ;
print f ("Press <Y/N> for more node") ;
ch = getch ( ) ;
}
while (ch == "Y");
ptr -> link = first ;
}
}
void traverse()
{
	struct node *ptr;
	printf("Traversing of current linked list:\n");
		ptr=frist;
		while(ptr!=Frist)
		{
			printf("%d",ptr->info);
			ptr=ptr->link
		}
}

		
		

