🧮 Real-Like CLI Calculator
This is a simple command-line calculator built in C++.<br>

Unlike standard calculator programs that only perform one operation on two input numbers, this calculator mimics how a real calculator works — it continues to perform operations on the previous result unless the user manually clears it.<br>

✅ Features
- Supports basic arithmetic operations:

  - Addition (+)

  - Subtraction (-)

  - Multiplication (*)

  - Division (/)

  - Modulo (%)

- Uses the result from the previous calculation as the starting value for the next operation.

- Option to clear/reset the current value.

- Option to exit the calculator anytime.

- Clean and interactive command-line interface.

💻 How It Works
- On the first run, you input the initial number.

- From then on, each operation is applied to the current value.

- You can keep chaining operations like a real calculator.

- You can reset the calculator using the clear option.


🛠 Example

Enter the first value: 10<br>
Current value: 10<br>
Enter operation number: 1 (Addition)<br>
Enter the next value: 5<br>
Updated value: 15<br>
Enter operation number: 3 (Multiplication)<br>
Enter the next value: 2<br>
Updated value: 30

🧠 Concepts Used (Good for interviews/GitHub viewers)
- Loops and conditionals

- Switch-case or if-else logic

- User input handling

- State persistence (current result reuse)

- Command-line I/O
