#include<stdio.h>
main()
{
	int num,quantity,amount,price, Manchurian=120,Sandwich=80,Dabeli=50,Pizza=300,Waffle=150,y,n;
	char more;
	printf("Hello Customer \n");
	
    do
	 {
		printf("1.Manchurian       price = 120 Rs \n");
		printf("2.Sandwich         price = 80 Rs \n");
		printf("3.Dabeli           price = 50 Rs \n");
		printf("4.Pizza            price = 300 Rs \n");
		printf("5.Waffle           price = 150 Rs \n");
		
		printf("Please enter your choice: ");
		scanf("%d",&num);
		switch(num)
	    {
		case 1:
			printf("You have selected Manchurian\n");
			printf("Enter the Quantity :");
	    	scanf("%d",&quantity);
	    	amount = amount + (quantity*Manchurian);
		break;
		case 2:
			printf("You have selected Sandwich\n");
			printf("Enter the Quantity :");
	    	scanf("%d",&quantity);
	    	amount = amount + (quantity*Sandwich);
		break;
		case 3:
		    printf("You have selected Dabeli\n");
		    printf("Enter the Quantity :");
	        scanf("%d",&quantity);
	        amount = amount + (quantity*Dabeli);
		break;
		case 4:
		    printf("You have selected Pizza\n");
		    printf("Enter the Quantity :");
	    	scanf("%d",&quantity);
	    	amount = amount + (quantity*Pizza);
		break;
		case 5: printf("You have selected Waffle\n");
		    printf("Enter the Quantity :");
	    	scanf("%d",&quantity);
	    	amount = amount + (quantity*Waffle);
		 	break;
	    }
	    printf("Do you want to place more orders ? y and n :");
	    scanf(" %c",&more);
		 
	}while (more == 'y' || more == 'Y');
	
	printf("Amount: %d",amount);
	
}
