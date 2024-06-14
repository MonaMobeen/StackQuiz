class Stack {
private:
  int arr[MAX_SIZE];
  int top;  

public:
  Stack() {
    top = -1;  
  }

  bool isEmpty() {
    return top == 0;  
  }

  bool isFull() {
    return top == MAX_SIZE - 1;  
  }

  void push(int data) {
    if (isFull()) {
      std::cout << "Stack Overflow\n";
      return;
    }
    arr[++top] = data;  
  }

  int pop() {
    if (isEmpty()) {
      std::cout << "Stack Underflow\n";
      return -1;  
    }
    return arr[top--]; // Return top element and decrement top
  }
};

int main() {
  Stack myStack;

  myStack.push(10);
  myStack.push(20);

  std::cout << myStack.pop() << std::endl; // Output: 20 (expected)
  std::cout << myStack.pop() << std::endl; // Output: 10 (expected)

  return 0;
}
