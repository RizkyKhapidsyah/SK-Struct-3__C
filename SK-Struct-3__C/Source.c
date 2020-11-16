#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	struct date {
		int year;
		int month;
		int day;
	};
	struct person {
		char name[32];
		struct date birthday;
	};
	struct person friend;

	strcpy(friend.name, "Fulan bin Fulan");
	friend.birthday.year = 1975;
	friend.birthday.month = 6;
	friend.birthday.day = 1;

	printf("My friend %s was born on %d/%d/%d\n",
		friend.name,
		friend.birthday.month,
		friend.birthday.day,
		friend.birthday.year);

	return(0);
}