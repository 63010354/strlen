#include<iostream>
#include<string.h>
using namespace std;

int count[3];

int maxnum(int, int, int);

int main() {
	char word1[50], word2[50],word3[50];
	char* w;
	int w1, w2, w3;
	scanf("%s", word1, 49);
	scanf("%s", word2, 49);
	scanf("%s", word3, 49);
	w1 = strlen(word1);
	w2 = strlen(word2);
	w3 = strlen(word3);
	maxnum(w1, w2, w3);
	
	for (int i = 0; i < 3; i++) {
		if(count[i]==1){
			w = word1;
			while (*w != '\0') {
				
				printf("%c", *w);
				w += 1;
			}
		}
		else if (count[i] == 2){
			w = word2;	
			while (*w != '\0') {
				
				printf("%c", *w);
				w += 1;
			}	
		}
			
		else if (count[i] == 3){
			w = word3;
			while (*w != '\0') {
				
				printf("%c", *w);
				w += 1;
			}
		}
			
		cout <<"\n";
	}
}

int maxnum(int num1, int num2, int num3) {
	if (num1 > num2 && num1 >num3 & num2 > num3) {
		count[0] = 1;
		count[1] = 2;
		count[2] = 3;
	}
	else if (num1 > num2 && num1 > num3 & num3 > num2) {
		count[0] = 1;
		count[1] = 3;
		count[2] = 2;
	}
	else if (num2 > num1 && num2 > num3 & num1 > num3) {
		count[0] = 2;
		count[1] = 1;
		count[2] = 3;
	}
	else if (num2 > num1 && num2 > num3 & num3 > num1) {
		count[0] = 2;
		count[1] = 3;
		count[2] = 1;
	}
	else if (num3 > num1 && num3 > num2 & num1 > num2) {
		count[0] = 3;
		count[1] = 1;
		count[2] = 2;
	}
	else if (num3 > num1 && num3 > num2 & num2 > num1) {
		count[0] = 3;
		count[1] = 2;
		count[2] = 1;
	}
}
