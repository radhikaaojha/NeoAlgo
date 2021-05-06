/* 
Program written in C language to solve the famous mathematical puzzle Tower Of Hanoi using recursion.
The initial state of the puzzle is, when all the disks are in the ascending order that is, the smallest disk being on top is stacked on the first pole which is the source rod.
We have to obtain the same stack on the destination rod from the source rod using an auxiliary rod.
*/

#include<stdio.h>
// Declaration of The Function of Tower of Hanoi taking parameters of Number of Disk,Source,Destination and Auxiliary
void TowerOfHanoi(int ,char, char ,char) ;
 
// Driver Function 
int main()
{
    int num;		//Defined to store number of disks
    printf("Enter the number of disks : ");		
    scanf("%d", &num);
    if(num < 1)
    {
    	printf("\nNo Disks available to be moved!");
   	}
   	else
   	{
    	printf("\nHere is a sequence of moves involved in the Tower of Hanoi :\n");
    	TowerOfHanoi(num, 'A', 'C', 'B');	//A, B, C are three towers.
	}
    return 0;
}
// Function to move n disks from A to C using B as Auxiliary 
void TowerOfHanoi(int num, char Source, char Destination, char Auxiliary)
{
	if(num == 1)
    {
		printf("\nMove 1 disk from Source %c to Destination %c", Source, Destination);
    	return;
	}
	//Recursively move (num-1) disks from A to B using C as Auxiliary 
    TowerOfHanoi(num - 1, Source, Auxiliary, Destination);		
    // Move of a single disk 
    printf("\nMove 1 disk from Source %c to Destination %c ", Source, Destination);     
    // Recursively move (num-1) disks from B to C using A as Auxiliary 
    TowerOfHanoi(num - 1, Auxiliary, Destination, Source);		
}

/*
Output:
Enter the number of disks : 3

Here is a sequence of moves involved in the Tower of Hanoi :

Move 1 disk from Source A to Destination C
Move 1 disk from Source A to Destination B
Move 1 disk from Source C to Destination B
Move 1 disk from Source A to Destination C
Move 1 disk from Source B to Destination A
Move 1 disk from Source B to Destination C
Move 1 disk from Source A to Destination C
--------------------------------
*/
