#include<stdio.h>
int main()
{
	int units;
	float cpu,bill,total_bill,surface_charge;
	scanf("%d",&units);
	if(units<=199)
	{
		cpu=1.20;
	}
	else if(units>=200&&units<400)
	{
		cpu=1.40;
	}
	else if(units>=400&&units<600)
	{
		cpu=1.60;
	}
	else if(units>=600&&units<800)
	{
		cpu=1.80;
	}
	else
	{
		cpu=2.00;
	}
    bill=units*cpu;
	if(bill>400)
	{
	     surface_charge=(15/100.0)*bill;
	}
	else
	{
		surface_charge=0;
	}
    total_bill=bill+surface_charge;
    printf("Units Consumed: %d\n",units);
    printf("Cost per Unit: %.2f\n",cpu);
    printf("Bill: %.2f\n",bill);
    printf("Surcharge: %.2f\n",surface_charge);
	printf("Total Amount: %.2f",total_bill);
}