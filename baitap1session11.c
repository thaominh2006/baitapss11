#include<stdio.h>
#include<math.h>
void display();
int calculateSum();

int main(){
	int number1, number2;
	int sum;
	sum = calculateSum();
	printf("Tong cua 2 so là: %d\n", sum);
	return 0;
}
 int calculateSum() {
 	int number1, number2;
 	int sum;
 	printf("Moi ban nhap so thu nhat: ");
 	scanf("%d", &number1);
 	
 	printf("Moi ban nhap so thu hai: ");
 	scanf("%d", &number2);
 	
 	sum = number1 + number2;
 	return sum;
 }
