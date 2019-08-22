#include <stdio.h>
#include <stdbool.h>

int main() {
	_Bool hasError = false;
	int today_day, today_month, today_year,
	birth_day, birth_month, birth_year;
	
	printf("Please, today's day: ");
	scanf("%i", &today_day);
	printf("Please, today's month: ");
	scanf("%i", &today_month);
	printf("Please, today's year: ");
	scanf("%i", &today_year);
	printf("Please, your birthday's day: ");
	scanf("%i", &birth_day);
	printf("Please, your birthday's month: ");
	scanf("%i", &birth_month);
	printf("Please, your birthday's year: ");
	scanf("%i", &birth_year);

	int lived_years = today_year - birth_year;
	int lived_months = today_month - birth_month;
	int lived_days = today_day - birth_day;

	if (lived_years < 0)
        {
                hasError = true;
                goto Exception;
        }	

	if (lived_months < 0)
	{
		lived_years--;
		lived_months = 12 + lived_months;
	}
	
	if (lived_days < 0)
	{
		lived_months--;
		lived_days = 30 - lived_days;
	}

	printf("Your lived time is: %i years, %i months, %i days\n", lived_years, lived_months, lived_days); 

Exception:
	if (hasError)
		printf("An error has ocurred!");
}


