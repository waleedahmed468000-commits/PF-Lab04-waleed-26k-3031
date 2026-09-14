#include <stdio.h>
int main()
{
	int testscore,fscscore,combinedscore;
	printf("enter test score");
	scanf("%d" , & testscore);
	
	
	printf("enter fsc percentage");
	scanf("%d", & fscscore);
	
	combinedscore=(testscore*0.5)+(fscscore*0.5);
	
	if(combinedscore>=80 )
	
		printf("got admission in cs");
		
	else if(combinedscore>=65)
	
	printf("got admission in software engineer");
	
	else if(combinedscore>=50)
	
	printf("got admission in Information Technology;");
	
	else 
	printf("didnt get admission");
	
	return 0;
	 
	
	
	
}
