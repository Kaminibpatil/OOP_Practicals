import java.util.*;
class Customer{    
int amount=10000;       
synchronized void withdraw(int amount){     
if(this.amount<amount){    
System.out.println("Less balance; waiting for deposit...");    
try{
    wait();
}catch(Exception e){}    
}    
this.amount-=amount;    
System.out.println("withdraw completed...");    
}    
synchronized void deposit(int amount){    
System.out.println("going to deposit...");    
this.amount+=amount;    
System.out.println(amount+" deposit completed... ");  
System.out.println("Balance amount = "+this.amount);   
notify();    
}    
}     
class Assignment11{    
public static void main(String args[]){    
final Customer c=new Customer();   

System.out.println("Balance amount = "+c.amount);
new Thread(){    
public void run(){
    c.withdraw(12000);
}    
}.start();    
new Thread(){    
public void run(){
    c.deposit(5000);
}    
}.start();        
}}
