#include <stdio.h>
#include <conio.h>
#include<iostream>
#include <string.h>

void Sum_avg(){
	int i, n, sum, list[100];
	float avg;

	//Read the values
	printf("\n Please enter the size of the list... \n");
	scanf_s("%d", &n);

	//Read the list of 'n' numbers from the keyboard
	printf("\n Enter %d Elements of the list: \n ", n);

	for (i = 0; i < n; i++){
		printf("\n list[%d]=", i);
		scanf_s("%d", &list[i]);
	}
	sum = 0;
	for (i = 0; i < n; i++){
		sum += list[i];
	}
	avg = (float)sum / n;
	printf("\n sum of %d elements in the list=%d and average = %f\n", n, sum, avg);
}

void Asc_Order(){
	int i, n,j, list[50];
	int key;
	printf("\n please enter the size of list...");
	scanf_s("%d", &n);


	printf("\n Please enter elements of the list...");

	for (i = 0; i < n; i++){
		printf("list[%d] = \n", i);
		scanf_s("%d", &list[i]);
	}
	for (i = 1; i < n; i++){
		key = list[i];
		j = i - 1;
		while (j >= 0 && list[j] > key)
		{
			list[j + 1] = list[j];
			j = j - 1;
		}
		list[j + 1] = key;
	}
	for (i = 0; i < n; i++){
		printf("list[%d] = %d \n", i,list[i]);
	}
}
void RealNum_Desc(){
	int i, n, j;
	float list[50];
	float key;
	printf("\n please enter the size of list...");
	scanf_s("%d", &n);


	printf("\n Please enter elements of the list...");

	for (i = 0; i < n; i++){
		printf("list[%d] = \n", i);
		scanf_s("%f", &list[i]);
	}
	for (i = 1; i <n; i++){
		key = list[i];
		j = i - 1;
		while (j >= 0 && list[j] < key)
		{
			list[j + 1] = list[j];
			j = j - 1;
		}
		list[j + 1] = key;
	}
	for (i = 0; i < n; i++){
		printf("list[%d] = %f \n", i, list[i]);
	}
}
void Number_Counter(){
	int positive =0, negative = 0, odd = 0, even =0, prime = 0,list[50],i,n;

	printf("Please enter the size of the list... \n");
	scanf_s("%d", &n);
	printf("Please enter elements of the list... \n");

	for (i = 0; i < n; i++){
		printf("list[%d] = ", i);
		scanf_s("%d", &list[i]);
	}
	for (i = 0; i < n; i++){
		if (list[i]>0){
			positive++;
			if (list[i] % 2 == 0){
				even++;
			}
			else if(list[i]%2!=0&&list[i]%3!=0){
				prime++;
			}
			else if(list[i]%2!=0){
				odd++;
			}
		}
		else{
			negative++;
			if (list[i] % 2 == 0){
				even++;
			}
			else if (list[i] % 2 != 0 && list[i] % 3 != 0){
				prime++;
			}
			else if(list[i]%2!=0){
				odd++;
			}
		}
	}
	printf("Positive Numbers = %d Negative Numbers = %d Even Numbers = %d Odd Numbers = %d Prime Numbers = %d Total Numbers in List = %d", positive, negative, even, odd, prime, n);

	
}
void Alpha_Order(){
	int i, j, n;
	char str[25][25], swaper_temp[25];
	puts("How many strings u are going to enter?: ");
	scanf_s("%d", &n);

	puts("Enter Strings one by one: ");
	for (i = 0; i <= n; i++){
		gets_s(str[i]);
	}
	for (i = 0; i <= n; i++){
		for (j = i + 1; j <= n; j++){
			if (strcmp(str[i], str[j]) > 0){
				strcpy_s(swaper_temp, str[i]);
				strcpy_s(str[i], str[j]);
				strcpy_s(str[j], swaper_temp);
			}
		}
	}
	printf("Order of Sorted Strings:");
	for (i = 0; i <= n; i++){
		puts(str[i]);
	}

}
void Count_Chars(){
	char sentence[100];
	int i = 0, lower_case = 0, upper_case = 0, numbers = 0, total,special_chars = 0,alphabets = 0,word = 0;

	printf("Enter a string: \n");
	fgets(sentence,sizeof(sentence),stdin); // <--
	printf("\n");
	for (i = 0; sentence[i] != '\0'; i++){
		if (sentence[i] >= 'a' && sentence[i] <= 'z'){
			lower_case++;	
		}
		else if (sentence[i] >= 'A' && sentence[i] <= 'Z'){
			upper_case++;
		}
		else if (sentence[i] >= '0' && sentence[i] <= '9'){
			numbers++;
		}
		else if (sentence[i] == ' '){
				word++;
		}
		else
			special_chars++;
	}

	alphabets = lower_case + upper_case;
	total = lower_case + upper_case + word + special_chars;

	printf("\n Your string has %d lowercase letters.\n", lower_case);

	printf("Your string has  %d uppercase letters. \n", upper_case);

	printf("Your string has %d numbers. \n",numbers);

	printf("Your string has %d special characters. \n", special_chars);

	printf("Your string has %d total characters. \n",total);

	printf("Your string has %d alpabets. \n", alphabets);

	printf("Your string has %d words. \n", word);

}
void LowerTo_Upper(){
	char array_word[100];
	

	printf("Enter a string: \n");
	fgets(array_word,sizeof(array_word),stdin); // <--
	printf("\n");
	for (int i = 0; array_word[i] != '\0'; i++){

		if(array_word[i]>=97 && array_word[i]<=122){
		array_word[i]=array_word[i]-32;
	    }

	}
	puts(array_word);
}
void UpperTo_Lower(){
	char array_word[100];
	printf("Enter a string: \n");
	fgets(array_word,sizeof(array_word),stdin); // <--
	printf("\n");
	for (int i = 0; array_word[i] != '\0'; i++){
		if (array_word[i] >= 65 && array_word[i] <= 92){
			 array_word[i]=array_word[i]+32;// <--
		}
	}
	puts(array_word);
}
int main(){
	system("color 3B");
	//Sum_avg();
	//Asc_Order(); // ¹14
	//Number_Counter(); // ¹15
	//RealNum_Desc(); // ¹16
	//Alpha_Order(); // ¹17
	//Count_Chars(); // ¹20
	//LowerTo_Upper(); // ¹19
	//UpperTo_Lower(); // ¹ 18
	_getch();
	return 0;
}