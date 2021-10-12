/*
 *  NAME: PRIETO, John Patrick M.
 *  BLOCK: BSCS-1B
 *  DATE: May 27, 2021
 *  TITLE: Practical Exam 2 | Linked List
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLENGTH 50
	
/* Modify this definition of self-referential structure based on the specification given in the problem.*/ 
    struct listNode {                                      
	    char data; /* each listNode contains a character */ 
        char name[MAXLENGTH];
        int votes;
	    struct listNode *nextPtr; /* pointer to next node */
	}; /* end structure listNode */                        
	
	typedef struct listNode ListNode; /* synonym for struct listNode */
	typedef ListNode *ListNodePtr; /* synonym for ListNode* */
	
/* Modify these prototypes based on your final definition of these functionss*/
	void insert( ListNodePtr *sPtr, char value[MAXLENGTH], int num);
	int isEmpty( ListNodePtr sPtr );
	void printList( ListNodePtr currentPtr);
	
	int main( void )
	{ 
	    ListNodePtr startPtr = NULL; /* initially there are no nodes */

	//Write below the declaration of other local variables you will be needing
	    // Declaration of the input file pointer
        FILE *fInput;

	    // Declaration of other variables
        int i;
        ListNode candidate;
	
	//Write below the code for opening the input file
        if(!(fInput = fopen("prac2.in", "r")))
        {
            printf("Error! File not found \n");
            return 1;
        }

	/*Write below the code to read the values from the input file and
	  insert it in the linked list using the insert() function to be defined below.*/
        
        for (fscanf(fInput, "%s %d", candidate.name, &(candidate.votes)); candidate.votes != 0;)
        {
            insert(&startPtr, candidate.name, candidate.votes);
            fscanf(fInput, "%s %d", candidate.name, &(candidate.votes));
        }
        
	/*Write below the code to compute the Total number of votes and
	  outputs the data, votes, percentage of the candidates and the voteTotal and winner
	  as specified in the given in the problem. You may modify the printList function below to do this */
        printList(startPtr);
        
	    //Write below the code to close the input file. 
        fclose(fInput);

	    return 0; /* indicates successful termination */
	
	} /* end main */

	
/*#########################################################################################*/
/* Modify this function of inserting new values into the list in sorted order */
/* based on the problem given. */
/*########################################################################################*/	

	void insert( ListNodePtr *sPtr, char value[MAXLENGTH], int num)
	{ 
	    ListNodePtr newPtr;      /* pointer to new node */
	    ListNodePtr previousPtr; /* pointer to previous node in list */
	    ListNodePtr currentPtr;  /* pointer to current node in list */
	
	    newPtr = malloc( sizeof( ListNode ) ); /* create node */
	
	    if ( newPtr != NULL ) { /* is space available */
	        
            strcpy(&newPtr->data, value); /*place value in node */
            newPtr->votes = num;
	        newPtr->nextPtr = NULL; /* node does not link to another node */
	
	        previousPtr = NULL;
	        currentPtr = *sPtr;
	
	        /* loop to find the correct location in the list */       
	        while ( currentPtr != NULL && num > currentPtr->votes ) {
	            previousPtr = currentPtr;          /* walk to ...   */ 
	            currentPtr = currentPtr->nextPtr;  /* ... next node */ 
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
	        printf( "%s not inserted. No memory available.\n", value );
	    } /* end else */
	} /* end function insert */
	
/* Return 1 if the list is empty, 0 otherwise */
	  int isEmpty( ListNodePtr sPtr )
	  { 
	   return sPtr == NULL;
	
	  } /* end function isEmpty */

/*#########################################################################################*/
/* Modify this function of printing the list to produce the output needed in the problem.*/
/*########################################################################################*/

	void printList( ListNodePtr currentPtr)
	  { 
        ListNodePtr startPtr; /*pointer to starting node*/
        
        int voteTotal = 0;
        float percentage;
        char winner[MAXLENGTH];

        startPtr = currentPtr;

	    /* if list is empty */
	    if ( currentPtr == NULL ) {
	        printf( "List is empty.\n\n" );
	    } /* end if */
	    else { 
	        printf( "Candidate\t\t\t# of Votes\tPercentage\n");
            printf( "-------------------------------------------\n");
	
	        /* while not the end of the list */

            // Get Total Votes
            while ( currentPtr != NULL ) { 
                voteTotal = currentPtr->votes + voteTotal;

                currentPtr = currentPtr->nextPtr;  
	        } /* end while */

            // Start again to the first node
            currentPtr = startPtr;

            // Printing
	        while ( currentPtr != NULL ) { 
                percentage = (float)currentPtr->votes / voteTotal * 100;

                printf( "%-8s\t\t\t%6d\t\t%5.2f\n", &currentPtr->data, currentPtr->votes, percentage);
                strcpy(winner, &currentPtr->data);

	            currentPtr = currentPtr->nextPtr;  
	        } /* end while */

            printf("\nTotal: %d\n", voteTotal);
            printf("Winner: %s", winner);
	    } /* end else */
	
	} /* end function printList */