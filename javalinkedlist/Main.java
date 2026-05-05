
import java.util.LinkedList;

class Main{
    public static void main(String[] args)
    {
        System.out.println("LinkedList in Java");
        LinkedList<String> animals =  new LinkedList<>();

        animals.add("Dog");
        animals.add("Cat");
        animals.addFirst("Elephant");
        animals.removeFirst();

        System.out.println(animals);
    }
}