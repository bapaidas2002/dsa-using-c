import java.util.ArrayList;
import java.util.EmptyStackException;
import java.util.List;

public class stack<T> {
    private List<T> stackList;

    public stack() {
        stackList = new ArrayList<>();
    }

    public void push(T element) {
        stackList.add(element);
    }

    public T pop() {
        if (isEmpty()) {
            throw new EmptyStackException();
        }
        return stackList.remove(stackList.size() - 1);
    }

    public T peek() {
        if (isEmpty()) {
            throw new EmptyStackException();
        }
        return stackList.get(stackList.size() - 1);
    }

    public boolean isEmpty() {
        return stackList.isEmpty();
    }

    public int size() {
        return stackList.size();
    }

    public static void main(String[] args) {
        stack<Integer> intStack = new stack<>();
        intStack.push(10);
        intStack.push(20);
        intStack.push(30);

        System.out.println("Top element: " + intStack.peek()); 
        System.out.println("Popped element: " + intStack.pop()); 
        System.out.println("Current size: " + intStack.size());

        stack<String> stringStack = new stack<>();
        stringStack.push("Hello");
        stringStack.push("World");

        System.out.println("Top string: " + stringStack.peek()); 
        System.out.println("Popped string: " + stringStack.pop()); 
        System.out.println("Is string stack empty? " + stringStack.isEmpty()); 
    }
}