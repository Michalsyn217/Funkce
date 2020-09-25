#include <stdio.h>

double obsah(double a, double v)

{
	double S;
	S = (a * v) / 2;
	if ( a==0 )
	{
		return 0;
	}
	else if ( v== 0)
	{
		return 0;
	}
	else
	{
		return S;
	}
}

int main()
{
	double Strana, vyska, Obsah;

	printf("Napiste delku strany a: ");

	scanf_s("%lf", &Strana);

	printf("Napiste vysku : ");

	scanf_s("%lf", &vyska);

	Obsah = obsah(Strana, vyska);

	printf("Obsah je: %lf", Obsah);

}
