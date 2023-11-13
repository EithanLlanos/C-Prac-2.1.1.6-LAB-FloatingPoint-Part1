//Scenario
//Check the program in the editor.Find all possible compilation errors and logic errors.Fix them.
//
//Your version of the program must print the same result as the expected output.Before you use the compiler, try to find the errors only by manual code analysis.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//#include <stdio.h>
//
//int main()
//{
//	printf("The value of seven is: %f\n", 7 0);
//	printf("The value of eight and a half is: %float\n", 8.5);
//	return 0;
//}
//
//Expected output
//The value of seven is : 7.000000
//The value of eight and a half is : 8.500000
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
int main() {
	printf("The value of seven is: %f\n", 7.0);
	printf("The value of eight and a half is: %f\n", 8.5);
	return 0;
}
