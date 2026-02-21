# CS2813ProjectOne
To run this code make sure you have a C++ compiler installed (I'll explain using MinGW). Make sure the Compiler's location is added to your system's PATH environment so it can be accessed from any directory. After downloading the .cpp file, navigate to wherever it is saved using the cd command in terminal / command prompt. 

EX: cd C:\Users\YourName\Downloads (or wherever it is saved). 

First, you have to compile the program using the command: g++ CS2813ProjectOne.cpp -o output_name

Then, you can run it using the command: ./output_name

The expected outputs of the program are:
FORALL x (P(x) OR Q(x)) = False
EXISTS x (P(x) AND NOT Q(x)) = True

After running the program, it did produce the correct outputs. It properly checked the conditions for both predicates for all values of x and found that for all x (P(x) or Q(x)) was false because for at least one x both conditions were false, but there exists some x that (P(x) AND NOT Q(x)) is true.
