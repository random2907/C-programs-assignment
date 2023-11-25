#include <stdio.h>

struct timetable{
	int date;
	char day[10];
	char event[10];
};


void main(){
	struct timetable value={11,"wednesday","nice day"};
	printf("%d",value.date);
}
