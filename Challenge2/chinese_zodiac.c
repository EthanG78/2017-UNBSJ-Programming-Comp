#include<stdio.h>
#include<string.h>

//Challenge number two

void isCompatible(int year1,int year2){
	//This code is disgusting I am so so sorry
	char name1[10];
	char name2[10];

	switch (year1 % 12){
		case 0: strcpy(name1, "Monkey"); break;
		case 1: strcpy(name1, "Rooster"); break; 
		case 2: strcpy(name1, "Dog"); break; 
		case 3: strcpy(name1, "Pig"); break; 
		case 4: strcpy(name1, "Rat"); break; 
		case 5: strcpy(name1, "Ox"); break; 
		case 6: strcpy(name1, "Tiger"); break; 
		case 7: strcpy(name1, "Rabbit"); break;  
		case 8: strcpy(name1, "Dragon"); break; 
		case 9: strcpy(name1, "Snake"); break; 
		case 10: strcpy(name1, "Horse"); break; 
		case 11: strcpy(name1, "Goat"); break; 
	}

	switch (year2 % 12){
		case 0: strcpy(name2, "Monkey"); break;
		case 1: strcpy(name2, "Rooster"); break; 
		case 2: strcpy(name2, "Dog"); break; 
		case 3: strcpy(name2, "Pig"); break; 
		case 4: strcpy(name2, "Rat"); break; 
		case 5: strcpy(name2, "Ox"); break; 
		case 6: strcpy(name2, "Tiger"); break; 
		case 7: strcpy(name2, "Rabbit"); break;  
		case 8: strcpy(name2, "Dragon"); break; 
		case 9: strcpy(name2, "Snake"); break; 
		case 10: strcpy(name2, "Horse"); break; 
		case 11: strcpy(name2, "Goat"); break; 
	}

	printf("%s %s\n", name1, name2);

	if (year1 - year2 == 4 || year1 - year2 == -4){
		printf("compatible\n");
	} else if (year1 - year2 == 6 || year1 - year2 == -6){
		printf("not compatible\n");
	} else {
		printf("not determined\n");
	}
}

int main(void){
	int a,b,c,d,e,f,g,h;
	scanf("%d %d\n", &a, &b);
	scanf("%d %d\n", &c, &d);
	scanf("%d %d\n", &e, &f);
	scanf("%d %d\n", &g, &h);

	isCompatible(a,b);
	isCompatible(c,d);
	isCompatible(e,f);
	isCompatible(g,h);

	return 0; 
}