# include<conio.h>
# include<malloc.h>
struct node
{
int info ;
struct node *lpt ;
struct node *rpt ;
} ;
struct node *first ;
void main ( )
{
create ( ) ;
getch ( ) ;
}
void create ( )
{
struct node *ptr, *cpt ;
char ch ;
ptr = (struct node *) malloc (size of (struct node)) ;
printf (“Input first node information”) ;
scanf (“%d”, & ptr ? info) ;
ptr ? lpt = NULL ;
first = ptr ;
do
{
cpt = (struct node *) malloc (size of (struct node)) ;
printf (“Input next node information”);
scanf (“%d”, & cpt ? info) ;
ptr ? rpt = cpt ;
cpt ? lpt = ptr ;
ptr = cpt ;
printf (“Press <Y/N> for more node”) ;
ch = getch ( );
}
while (ch == ‘Y’) ;
ptr ? rpt = NULL ;
}
