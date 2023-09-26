import java.util.*;
class player
{   String name;
   player(String n)
   {    name=n; }
   void show()
   {   System.out.println("\n Player name is:"+name);  }
}
class cricket_player extends player
{
  String type;
  cricket_player(String n, String t )
  {
    super(n);
    type=t;
  }
  void show()
   {
        super.show();
        System.out.println("player type:"+type);
   }
}
class hockey_player extends player
{
  String type;
  hockey_player(String n, String t )
  {
    super(n);
    type=t;
  }
  void show()
   {
        super.show();
        System.out.println("player type:"+type);
   }
}
class football_player extends player
{
  String type;
  football_player(String n, String t)
  {
    super(n);
    type=t;
  }
  void show()
   {
        super.show();
        System.out.println("player type:"+type);
   }
}
public class inheritance
{
    public static void main(String args[])
    {
        cricket_player cp=new cricket_player("Pooja","cricket");
        hockey_player hp=new hockey_player("Sarah","hockey");
        football_player fp=new football_player("Shanti","football");
        cp.show();
        hp.show();
        fp.show();
    }
}
