#include <stdio.h>

//challenge number five

int main(void){
	//lots of variables
	int rCold, rHot, rSlow, rFast, i, nData, tData, sData;
	int sCold = 0, fCold = 0, sHot = 0, fHot = 0;

	scanf("%d %d %d %d\n", &rCold, &rHot, &rSlow, &rFast);
	scanf("%d\n", &nData);

	for(i = 0; i < nData; i++){
		scanf("%d %d\n", &tData, &sData);
		if(tData > rHot && sData > rFast){
			fHot += 1;
		}
		if(tData > rHot && sData < rSlow){
			sHot +=1;
		}
		if(tData < rCold && sData > rFast){
			fCold +=1;
		}
		if(tData < rCold && sData < rSlow){
			sCold +=1;
		}
	}

	printf("%d\n%d\n%d\n%d\n", fHot, sHot, fCold, sCold);
	
	return 0;
}