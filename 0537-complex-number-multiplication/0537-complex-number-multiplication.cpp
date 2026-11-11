class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {

        // Extract real and imaginary parts of num1
        int pos1 = num1.find('+');

        int a = stoi(num1.substr(0, pos1));
        int b = stoi(num1.substr(pos1 + 1,
                                  num1.size() - pos1 - 2));

        // Extract real and imaginary parts of num2
        int pos2 = num2.find('+');

        int c = stoi(num2.substr(0, pos2));
        int d = stoi(num2.substr(pos2 + 1,
                                  num2.size() - pos2 - 2));

        // Multiply complex numbers
        int real = a * c - b * d;
        int imaginary = a * d + b * c;

        // Construct result
        return to_string(real) + "+" +
               to_string(imaginary) + "i";
    }
};