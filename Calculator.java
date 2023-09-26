public class Calculator{
	public static void main(String args[]) 
	{
		double a,b,result;
		int choice,condition, ch;
		int n;	
		Scanner scanner=new Scanner(System.in);
		System.out.println("Calculator is on or off ");
		ch = scanner.nextInt();
		System.out.println("Your choice is: " + ch); 
		if(ch==1)
		{  do  { 
			System.out.println("........Calculator Menu........");
			System.out.println("1. addition");
			System.out.println("2. subtraction");
			System.out.println("3. Multiplication");
			System.out.println("4. Division");
			System.out.println("5. finding Factorial");
			System.out.println("Enter your choise: ");
			choice=scanner.nextInt();
			switch(choice)
			{   case 1:
					System.out.println("Enter the first number");
					a=scanner.nextDouble();
						System.out.println("Enter the second number");
					b=scanner.nextDouble();
					result=a+b;
				System.out.println("The sum of the numbers "+a+" and "+b+" is = "+result);
					break;
				case 2:
					System.out.println("Enter the first number");
					a=scanner.nextDouble();
					System.out.println("Enter the second number");
					b=scanner.nextDouble();
					result=a-b;
			System.out.println("The difference of the numbers "+a+" and "+b+" is = "+result);
					break;
				case 3:
					System.out.println("Enter the first number");
					a=scanner.nextDouble();
					System.out.println("Enter the second number");
						b=scanner.nextDouble();
					result=a*b;
			System.out.println("The product of the numbers "+a+" and "+b+" is = "+result);
					break;
				case 4:
					System.out.println("Enter the first number");
					a=scanner.nextDouble();
					System.out.println("Enter the second number");
					b=scanner.nextDouble();
					result=a/b;
			System.out.println("In Division of "+a+" and "+b+" the Quotient is = "+result);
					System.out.println("The remainder is = "+(a%b));
					break;
				case 5:
					System.out.println("Enter the number to find Factorial");
					n=scanner.nextInt();
					long factorial=1;
				     for(int i=1;i<=n;++i)
 				{	factorial=factorial*i;	}
					System.out.printf("The Factorial of the number %d= %d",n,factorial); 
				break;
				default:
					System.out.println("Invalid choice!! Please make a valid choice !!!");
			}
		}while(true);
	}	}   	}

