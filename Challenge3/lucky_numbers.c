#include <stdio.h>

//Challenge number three

//This function to test whether or not a numer is prime is taken
//from a StackOverflow answer by vissi
//https://stackoverflow.com/questions/5281779/c-how-to-test-easily-if-it-is-prime-number
int isPrime(int num){
     if (num <= 1) return 0;
     if (num % 2 == 0 && num > 2) return 0;
     for(int i = 3; i < num / 2; i+= 2){
         if (num % i == 0)
             return 0;
     }
     return 1;
}

int sumOfDigits(int num){
	int sum = 0;
	while(num != 0){
		sum += num % 10;
		num = num / 10;
	}
	return sum;
}	

int sumOfDigitsSquared(int num){
	int sum = 0;
	while(num != 0){
		sum += (num % 10) * (num % 10);
		num = num / 10;
	}
	return sum;
}	


int main(void){
	int i, j, n, x, y, step1, step2; 
	scanf("%d\n", &n);
	for(i = 0; i < n; i++){
		int final = 0;
		scanf("%d %d\n", &x, &y);
		for(j = x; j <= y; j++){
			step1 = j;
			step2 = j;
			if(isPrime(sumOfDigits(step1)) == 1){
				if(isPrime(sumOfDigitsSquared(step2)) == 1){
					final = final + 1;
				}
			}
		}
		printf("%d\n", final);
	}
	return 0;
}