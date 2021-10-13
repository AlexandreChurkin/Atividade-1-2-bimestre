#include <iostream>

int main (){
 int n1;
 int n2;
 int n3;

 std::cout << ("Digite 3 numeros diferentes");
 std::cin >> n1 >> n2 >> n3;

if (n1 < n2 && n2 < n3) {
    std::cout << n1;
}
else if  (n1 < n3 && n3 < n2) {
    std::cout << n1;
}
else if  (n2 < n1 && n1 < n3) {
    std::cout << n2;
}
else if  (n2 < n3 && n3 < n1) {
    std::cout << n2;
}
else if  (n3 < n1 && n1 < n2) {
    std::cout << n3;
}
else if  (n3 < n2 && n2 < n1) {
    std::cout << n3;
}
 return 0;
}