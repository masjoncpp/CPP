#include <iostream>
#include <iomanip>
#include <ctime>
#include <unistd.h> // Untuk fungsi sleep()

using namespace std;

void clearScreen() {
    // Fungsi untuk membersihkan layar konsol
    cout << "\033[2J\033[1;1H";
}

void displayTime() {
    while (true) {
        // Mendapatkan waktu saat ini
        time_t now = time(0);
        tm *ltm = localtime(&now);

        // Membersihkan layar konsol
        clearScreen();

        // Menampilkan waktu dalam format HH:MM:SS
        cout << "Jam Digital\n";
        cout << setw(2) << setfill('0') << ltm->tm_hour << ":"
             << setw(2) << setfill('0') << ltm->tm_min << ":"
             << setw(2) << setfill('0') << ltm->tm_sec << endl;

        // Menunggu selama 1 detik sebelum memperbarui waktu
        sleep(1);
    }
}

int main() {
    displayTime();
    return 0;
}
