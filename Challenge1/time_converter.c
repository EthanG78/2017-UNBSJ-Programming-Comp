#include <stdio.h>

//Challenge number one

void convert(int time){
	int t = time - 12;
	if(time == 0){
		printf("12am\n");
	}else if(time <= 12){
		printf("%dam\n", time);
	}else if(time > 12){
		printf("%dpm\n", t);
	}
}

int main(void){
	int x,y,z;
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);

	convert(x);
	convert(y);
	convert(z);

}