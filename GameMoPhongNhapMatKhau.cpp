#include <iostream>
#include <string>
using namespace std;

int main() {
    // Đặt mật khẩu cần đoán
    const string password = "secret"; 
    string guess;
    const int maxAttempts = 3; 
    int attempts = 0;

    cout << "Ban co " << maxAttempts << " lan de nhap mat khau.\n";

    // Vòng lặp cho phép người chơi nhập mật khẩu nhiều lần
    while (attempts < maxAttempts) {
        cout << "Nhap mat khau cua ban: ";
        cin >> guess;

        if (guess == password) {
            cout << "Mat khau chinh xac !\n";
            break;  
        } else {
            attempts++;  
            cout << "Sai mat khau. Ban con " << (maxAttempts - attempts) << " lan nhap.\n";
        }

        if (attempts == maxAttempts) {
            cout<<"Tai khoan da bi khoa, Cook !"<<endl;
        }
    }

    return 0;
}
