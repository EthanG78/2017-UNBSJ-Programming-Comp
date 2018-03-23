#include <stdio.h>

//challenge number six

int main(void){
	int pLength, pWidth, folds = 0;
	float pThick = 0.0;
	
	scanf("%d %d\n", &pLength, &pWidth);
	scanf("%f", &pThick);

	for(int x = 0; pThick * 3 < pLength && pThick *3 < pWidth; x++){
		pWidth = pWidth / 2;
		pThick = pThick * 2;
		folds += 1;
		//printf("fold: %d - thickness: %.1f", folds, pThick); debugging
		if(pThick * 3 < pLength && pThick *3 < pWidth){
			pLength = pLength /2;
			pThick = pThick * 2;
			folds += 1;
		}else{
			break;
		}
	}

	folds -= 1; //I don't know why but the program needs this to be correct :/
	printf("%d\n", folds);
	
	return 0;
}