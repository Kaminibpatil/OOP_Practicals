import java.awt.*;  
import java.awt.event.*;  
import java.applet.*;
 /*    <applet code="Operations.class" width=300 height=300></applet>  */
public class Operations extends Applet implements ActionListener  
{  
    TextField t1 = new TextField(10);  
    TextField t2 = new TextField(10);  
    TextField t3 = new TextField(10);  
     Button add = new Button("+"); 
     Button sub = new Button("-"); 
     Button mul = new Button("X"); 
     Button div = new Button("/");  
    public void init()  
    {  
        add(t1); 
        add(t2);  
        add(t3);  
        add(add);  
        add(sub);  
        add(mul);  
        add(div);  
                  add.addActionListener(this);  
	sub.addActionListener(this);
	mul.addActionListener(this);
	div.addActionListener(this);
    }  	
    public void actionPerformed(ActionEvent e)  
    {  
        if (e.getSource() == add)  
        {  
            int n1 = Integer.parseInt(t1.getText());  
            int n2 = Integer.parseInt(t2.getText());  
            t3.setText(" " + (n1 + n2));  
        }   else if (e.getSource() == sub)  
        {  
            int n1 = Integer.parseInt(t1.getText());  
            int n2 = Integer.parseInt(t2.getText());  
            t3.setText(" " + (n1 - n2));  
        }
	else if (e.getSource() == mul)  
        {  
            int n1 = Integer.parseInt(t1.getText());  
            int n2 = Integer.parseInt(t2.getText());  
            t3.setText(" " + (n1 * n2));  
        }
	else{	
        	int n1 = Integer.parseInt(t1.getText());  
                 int n2 = Integer.parseInt(t2.getText());  
                t3.setText(" " + (n1 / n2));  
    } }  }
