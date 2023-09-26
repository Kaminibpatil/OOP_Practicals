import java.util.*;
class Base{
    public String name;
    public int rollNo;
    public String  subject;
    public void Insert(){
    }
    public void Delete(){
            }
    public void Edit(){
    }
    public void Display(){
    }
}
class Derived extends Base{
    boolean isDel=true;
    public int subjectCode,internalMarks,universityMarks;
    public  void Insert(Scanner sc){
        isDel=false;
        System.out.println("Enter data");
        System.out.print("Name :");
        name=sc.next();
               System.out.print("Roll No: ");
        rollNo=sc.nextInt();
        System.out.print("subject: ");
        subject=sc.next();
        System.out.print("subject Code: ");
        subjectCode=sc.nextInt();
        System.out.print("internal Marks: ");
        internalMarks=sc.nextInt();
        System.out.print("university Marks: ");
        universityMarks=sc.nextInt();
    }
    public  void Delete(){
        if(isDel){
            System.out.println("empty data");
        }
        else{
            System.out.println("data is deleted");
            isDel=true;
        }
          }
    public  void Edit(Scanner sc){
               System.out.println("1:subject");
        System.out.println("2:internal Marks");
        System.out.println("3:subject Code");
        System.out.print("which data you want to edit");
        int choice=sc.nextInt();
        switch(choice){
            case 1:System.out.print("enter subject name");
                   subject=sc.next();
                   break;
            case 2:System.out.print("enter internal marks");
                   internalMarks=sc.nextInt();
                   break;
            case 3:System.out.print("enter subject Code");
                   subjectCode=sc.nextInt();
                   break;
        }
    }
    public void Display(){
        if(isDel){
            System.out.print("no data available");
        }
    else{
        System.out.println("name: "+name);
            System.out.println("Roll no: "+rollNo);
            System.out.println("subject: "+subject);
            System.out.println("subject Code: "+subjectCode);
            System.out.println("insternal Marks: "+internalMarks);
            System.out.println("university Marks: "+universityMarks);
    }
    }
}
public class Assingment10 {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        Derived d=new Derived();
        int choice;
        while(true){
            System.out.println("1:Insert");
        System.out.println("2:Delete");
        System.out.println("3:Edit");
        System.out.println("4:Display");
        System.out.println("5:Exit");
            System.out.println("ener your choice");
            choice=sc.nextInt();
            if(choice==5){
                break;
            }
            switch(choice){
                case 1:d.Insert(sc);
                break;
                case 2:d.Delete();
                break;
                case 3:d.Edit(sc);
                break;
                case 4:d.Display();
                break;
               }
        }
    }
}
