#include <stdio.h>
int main()
{
	float temp;
	char degrees;
	printf("Enter the temperature: ");
	scanf("%f",&temp);
	printf("Enter the unit(C/F/K): ");
	scanf(" %c",&degrees);
	if(degrees== 'C'||degrees== 'c'){
		printf("Celsius: %.2f C\n",temp);
		printf("Farenheit: %.2f F\n",(temp*9/5)+32);
		printf("Kelvin: %.2f K\n",temp+273.15);
	}
	else if(degrees=='F'||degrees=='f'){
		printf("Farenheit: %.2f F\n",temp);
		printf("Celsius: %.2f C\n",(temp-32)*5/9);
		printf("Kelvin: %.2f K\n",(temp-32)*5/9+273.15);
	}
	else if(degrees=='K'||degrees=='k'){
		printf("Kelvin: %.2f K\n",temp);
		printf("Celsius: %.2f C\n",temp-273.15);
		printf("Farenheit: %.2f F\n",(temp-273.15)*9/5+32);
	}
	else{
		printf("Enter vaild unit.");
	}
	return 0;
}
