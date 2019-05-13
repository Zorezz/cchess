#include <stdio.h>

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

void printchess();

int main(){
printchess();


}

void printchess(){
for(int y = 0; y < 8; y++)
{
  for(int x = 0; x < 8; x++)
  {
    printf("%c", chessboard[y][x]);
  }
}


}
