/**
* Program Name: cis6Summer2018JamesCHw5Ex1.c
* Discussion:   Hw #5 Ex #1
* Written By:   JamesC
* Date:         2018/07/16
*/

#include <stdio.h>

// Function Prototypes
int extractUniqueDigitCount(int);
int extractUniqueDigitCountLessBad(int);
int extractUniqueDigitCountLessLessBad(int);
int extractOddDigit1(int);

// Application Driver
int main() {
	int usrValue;

	printf("Enter Number: ");
	scanf("%d", &usrValue);
	printf("\nNumber of odd digits is %d in %d\n", extractOddDigit1(usrValue) , usrValue);
	//extractOddDigit();
	//extractUniqueDigitCountLessLessBad();

	return 0;
}

// Function Definitions 

int extractLargestValue(int ary[], int size) {
	int largestValue;

	largestValue = ary[0];
	for (int i = 1; i < size; i++) {
		if (largestValue < ary[i])
			largestValue = ary[i];
	}

	return largestValue;
}

int extractOddDigit(int usrValue) {
	int oddDigitCount = 0;

	do {
		//usrValue = usrValue % 10;

		if ((usrValue % 2) == 0) {
			oddDigitCount++;
		}

		usrValue /= 10;
	} while (usrValue != 0);

	return oddDigitCount;
}

int extractOddDigit1(int usrValue) {
	int oddDigitCount = 0;
	int digit;
	int temp;

	temp = (usrValue < 0) ? -usrValue : usrValue;

	do {
		digit = temp % 10;

		if (digit % 2 == 1) {
			oddDigitCount++;
		}
		temp /= 10;
	} while (temp != 0);

	return oddDigitCount;
}

int extractUniqueDigitCountLessLessBad(int usrValue) {
	int totalUniqueDigitCount = 0;
	int digitCountAry[10] = { 0 };
	int digit;
	int tmp;
	int i;

	tmp = (usrValue > 0) ? -usrValue : usrValue;

	do {
		digit = tmp % 10;

		(digitCountAry[digit])++;

		tmp /= 10;
	} while (tmp != 0);

		for (i = 0; i < 10; i++) {
			if (digitCountAry[i] != 0)
				totalUniqueDigitCount++;
		}

		for (i = 0; i < 10; i++) {
			if (digitCountAry[i] != 0)
				printf("\n%d", i);
		}
}

/*Program Output
Output from Control+F5
Don't use * for Output
*/

/*Comments
* No Comments
* Always include something here
*/