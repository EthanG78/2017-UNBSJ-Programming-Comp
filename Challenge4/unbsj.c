#include <stdio.h>

//Challenge number four

int main(void){
	int rows, columns, coordX, coordY;

	scanf("%d %d", &rows, &columns);
	
	char charRow[columns];

	for(int i = 0; i < rows; i++){
		scanf("%s\n", &charRow);
		for(int j = 0; charRow[j] != '\0'; j++){
			//I am not proud of this if statement..
			if(charRow[j] == 'U' && charRow[j+1] == 'N' && charRow[j+2] == 'B' && charRow[j+3] == 'S' && charRow[j+4] == 'J'){
				coordY = j+1;
				coordX = i+1;
			}
		}
	}
	printf("%d %d\n", coordX, coordY);
	return 0;
}