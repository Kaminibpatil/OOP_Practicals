
import java.util.Scanner;
public class Rectangle
{    public double width,length,area;
    public String colour;
    Scanner sc = new Scanner(System.in);
    public void get_length()
    {   System.out.println("Enter Length of Rectangle :");
        length = sc.nextDouble();
    }
    public void get_width()
    {    System.out.println("Enter Width of Rectangle :");
        width = sc.nextDouble();
    }
    public void get_colour()
    {   System.out.println("Enter Colour of Rectangle :");
        colour = sc.next();
    }
    public double find_area()
    {   area = length*width;
        return area;
    }
    public static void main(String args[])
    {    Rectangle r1 = new Rectangle();          //First Object
        r1.get_length();
        r1.get_width();
        r1.get_colour();
        System.out.println("The Area of The First Rectangle is "+r1.find_area());
        System.out.println("\n");
        Rectangle r2 = new Rectangle(); 	        //Second Object
        r2.get_length();
        r2.get_width();
        r2.get_colour();
        System.out.println("The Area of The Second Rectangle is "+r2.find_area());
        if((r1.area==r2.area) && r1.colour.compareTo(r2.colour)==0)
        {       System.out.println("---Matching Rectangles---");       }
        else{       System.out.println("---Non-Matching Rectangles---");     }
    }
}
