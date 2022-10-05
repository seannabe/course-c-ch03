#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int grade;
	
	scanf("%d", & grade);
	while (grade > 100 | grade < 0){
		printf("­«·s¿é¤J¡G");
		scanf("%d", & grade);
	}
	
	switch (grade) {

		case 90 ... 100:
			printf("A");
			break;
	    
		case 80 ... 89:
			printf("B");
			break;
		
		case 70 ... 79:
			printf("C");
			break;
		
		case 60 ... 69:
			printf("D");
			break;
		
		case 0 ... 59:
			printf("E");
			break;
		
	}
	return 0;
}
