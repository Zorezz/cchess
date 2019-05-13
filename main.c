#include <stdio.h>

// This is out chessboard that we print and also change to make moves
char chessboard[8][8] = {
			{'T', 'H', 'S', 'Q', 'K', 'S', 'H', 'T'},
			{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
			{'.', '.', '.', '.', '.', '.', '.', '.'},
			{'.', '.', '.', '.', '.', '.', '.', '.'},
			{'.', '.', '.', '.', '.', '.', '.', '.'},
			{'.', '.', '.', '.', '.', '.', '.', '.'},
			{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
			{'T', 'H', 'S', 'Q', 'K', 'S', 'H', 'T'}
			};
char inpstr[8]; //this is our inputstring that we then interpret to find position

int x1, y1; // current position from where we will make a move
int x2, y2; // next position that we will jump to


void printchess();

void chessinterpret(char inpstr[], int *x1, int *x2, int *y1, int *y2);

void processmove(char chessboard[][], int x1, int x2, int y1, int y2);

// Main function
int main(){
printchess();


}

void printchess(){
for(int y = 0; y < 8; y++)
{
  printf("%d ", y);
  for(int x = 0; x < 8; x++)
  {
    printf("%c ", chessboard[y][x]);
  }
  printf("\n");
}
printf("\n  A B C D E F G H\n");

}

void processmove(char chessboard[][], int x1, int x2, int y1, int y2){
  switch(chessboard[y1][x1]){
    case 'P':
    break;

    case 'T':
    break;

    case 'H':
    break;

    case 'S':
    break;

    case 'Q':
    break;
   
    case 'K':
    break;

    default:
    break;

  }
}

void chessinterpret(char inpstr[], int *x1, int *x2, int *y1, int *y2){
// this is to check the leading letter to know the position we are talking about.
switch(inpstr[0]){
  case 'a':
  x1 = 0;
  break;
 
  case 'b':
  x1 = 1;
  break;

  case 'c':
  x1 = 2;
  break;

  case 'd':
  x1 = 3;
  break;

  case 'e':
  x1 = 4;
  break;

  case 'f':
  x1 = 5;
  break;

  case 'g':
  x1 = 6;
  break;

  case 'h':
  x1 = 7;
  break;
}

///////////////////////////////////////////////////////////////////////////////////

switch(inpstr[1]){
  case '1':
  y1 = 7;
  break;

  case '2':
  y1 = 6;
  break;

  case '3':
  y1 = 5;
  break;

  case '4':
  y1 = 4;
  break;

  case '5':
  y1 = 3;
  break;

  case '6':
  y1 = 2;
  break;
  
  case '7':
  y1 = 1;
  break;

  case '8':
  y1 = 0;
  break;
}

///////////////////////////////////////////////////////////////////////////////////

switch(inpstr[3]){
  case 'a':
  x2 = 0;
  break;

  case 'b':
  x2 = 1;
  break;

  case 'c':
  x2 = 2;
  break;

  case 'd':
  x2 = 3;
  break;

  case 'e':
  x2 = 4;
  break;

  case 'f':
  x2 = 5;
  break;

  case 'g':
  x2 = 6;
  break;

  case 'h':
  x2 = 7;
  break;
}

///////////////////////////////////////////////////////////////////////////////////

switch(inpstr[4]){
  case '1':
  y2 = 7;
  break;

  case '2':
  y2 = 6;
  break;

  case '3':
  y2 = 5;
  break;

  case '4':
  y2 = 4;
  break;

  case '5':
  y2 = 3;
  break;

  case '6':
  y2 = 2;
  break;

  case '7':
  y2 = 1;
  break;

  case '8':
  y2 = 0;
  break;
}

}


