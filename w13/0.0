#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Date
{
    int year;
    int month;
    int day;
};

/* self-referential structure */
struct listNode {
    int id;             // lotto id
    struct Date date;   // opening date
    int num[6];         // winning numbers
    struct listNode *nextPtr; /* pointer to next node*/
}; /* end structure listNode */

typedef struct listNode ListNode; /* synonym for struct listNode */
typedef ListNode *ListNodePtr; /* synonym for ListNode* */

/* prototypes */
void insert( ListNodePtr *sPtr);
int del( ListNodePtr *sPtr, int id );
int isEmpty( ListNodePtr sPtr );
void printList( ListNodePtr currentPtr );
void listOne(ListNodePtr currentPtr);
void instructions( void );

int main( void )
{
   ListNodePtr startPtr = NULL; /* initially there are no nodes */
   int choice; /* user's choice */
   char item; /* char entered by user */
   int id;

   instructions(); /* display the menu */
   printf( "? " );
   scanf( "%d", &choice );

   /* loop while user does not choose 3 */
   while ( choice != 3 ) {

      switch ( choice ) {
         case 1:
            //printf( "Enter a character: " );
            //scanf( "\n%c", &item );
            insert( &startPtr); /* insert item in list */
            printList( startPtr );
            break;
         case 2:
            /* if list is not empty */
            if ( !isEmpty( startPtr ) ) {
               printf( "Enter id to be deleted: " );
               scanf( "%d", &id );

               /* if character is found, remove it */
               if (del( &startPtr, id ) ) { /* remove item */
                  printf( "%c deleted.\n", id );
                  printList( startPtr );
               } /* end if */
               else {
                  printf( "%c not found.\n\n", id );
               } /* end else */
            } /* end if */
            else {
               printf( "List is empty.\n\n" );
            } /* end else */

            break;
         default:
            printf( "Invalid choice.\n\n" );
            instructions();
            break;
      } /* end switch */

      printf( "? " );
      scanf( "%d", &choice );
   } /* end while */

   printf( "End of run.\n" );
   return 0; /* indicates successful termination */
} /* end main */

/* display program instructions to user */
void instructions( void )
{
   printf( "Enter your choice:\n"
      "   1 to insert an element into the list.\n"
      "   2 to delete an element from the list.\n"
      "   3 to end.\n" );
} /* end function instructions */

int duplicate(int num[], int pos)
{
    int i;
    for(i=0;i<pos;i++)
    {
        if(num[i]==num[pos])
          return 1;
    }
    return 0;
}

/* Insert a new value into the list in sorted order */
void insert( ListNodePtr *sPtr )
{
   int i;
   ListNodePtr newPtr; /* pointer to new node */
   ListNodePtr previousPtr; /* pointer to previous node in list */
   ListNodePtr currentPtr; /* pointer to current node in list */

   newPtr = (ListNodePtr)malloc( sizeof( ListNode ) ); /* create node */

   if ( newPtr != NULL ) { /* is space available */
    srand(time(NULL));

    //lotto->id = N;
    printf("\nEnter ID: ");
    scanf("%d", &newPtr->id);
    printf("Enter the year: ");
    scanf("%d",&newPtr->date.year);
    printf("Enter the month: ");
    scanf("%d",&newPtr->date.month);
    printf("Enter the days: ");
    scanf("%d",&newPtr->date.day);
    printf("Random generating 6 lotto numbers ... \n");
    for(i=0;i<6;i++)
    {
        do
        {
            newPtr->num[i]=1+rand()%49;
        }while (duplicate(newPtr->num,i));
    }

      newPtr->nextPtr = NULL; /* node does not link to another node */

      previousPtr = NULL;
      currentPtr = *sPtr;

      /* loop to find the correct location in the list */
      while ( currentPtr != NULL && newPtr->id > currentPtr->id ) {
         previousPtr = currentPtr; /* walk to ...   */
         currentPtr = currentPtr->nextPtr; /* ... next node */
      } /* end while */

      /* insert new node at beginning of list */
      if ( previousPtr == NULL ) {
         newPtr->nextPtr = *sPtr;
         *sPtr = newPtr;
      } /* end if */
      else { /* insert new node between previousPtr and currentPtr */
         previousPtr->nextPtr = newPtr;
         newPtr->nextPtr = currentPtr;
      } /* end else */
   } /* end if */
   else {
      printf( "Not inserted. No memory available.\n" );
   } /* end else */
} /* end function insert */

/* check if there is a duplacate number in an array */

/* Delete a list element */
int del( ListNodePtr *sPtr, int id )
{
   ListNodePtr previousPtr; /* pointer to previous node in list */
   ListNodePtr currentPtr; /* pointer to current node in list */
   ListNodePtr tempPtr; /* temporary node pointer */

   /* delete first node */
   if ( id == ( *sPtr )->id ) {
      tempPtr = *sPtr; /* hold onto node being removed */
      *sPtr = ( *sPtr )->nextPtr; /* de-thread the node */
      free( tempPtr ); /* free the de-threaded node */
      return id;
   } /* end if */
   else {
      previousPtr = *sPtr;
      currentPtr = ( *sPtr )->nextPtr;

      /* loop to find the correct location in the list */
      while ( currentPtr != NULL && currentPtr->id != id ) {
         previousPtr = currentPtr; /* walk to ...   */
         currentPtr = currentPtr->nextPtr; /* ... next node */
      } /* end while */

      /* delete node at currentPtr */
      if ( currentPtr != NULL ) {
         tempPtr = currentPtr;
         previousPtr->nextPtr = currentPtr->nextPtr;
         free( tempPtr );
         return id;
      } /* end if */
   } /* end else */

   return 0;
} /* end function delete */

/* Return 1 if the list is empty, 0 otherwise */
int isEmpty( ListNodePtr sPtr )
{
   return sPtr == NULL;
} /* end function isEmpty */

/* Print the list */
void printList( ListNodePtr currentPtr )
{
   /* if list is empty */
   if ( currentPtr == NULL ) {
      printf( "List is empty.\n\n" );
   } /* end if */
   else {
      printf( "The list is:\n" );

      /* while not the end of the list */
      while ( currentPtr != NULL ) {
         //printf( "%c --> ", currentPtr->id );
         listOne(currentPtr);
         currentPtr = currentPtr->nextPtr;
      } /* end while */

      printf( "NULL\n\n" );
   } /* end else */
} /* end function printList */

void listOne(ListNodePtr currentPtr){
    int i;
    printf("\nLotto ID: %d \n", currentPtr->id);
    printf("   Date: %d/%d/%d\n", currentPtr->date.year, currentPtr->date.month, currentPtr->date.day);
    printf("   Six winning numbers: ");
    for(i=0;i<6;i++) printf("%d ", currentPtr->num[i]);
    printf("\n");
}
