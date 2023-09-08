#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double TICKET_PRICE = 280.0;
    const int SEATS = 210;
    int availableSeats = SEATS;

    cout << "Welcome to the Movie Ticket Booking System\n";
    cout << "Available seats: " << availableSeats << endl;

    cout << "Enter the number of tickets you want to book: ";
    int numTickets;
    cin >> numTickets;

    if (numTickets <= 0) {
        cout << "Invalid number of tickets. Exiting.\n";
        return 1;
    }

    if (numTickets > availableSeats) {
        cout << "Sorry, not enough seats available.\n";
        return 1;
    }

    double totalAmount = numTickets * TICKET_PRICE;
    cout << "Total amount: $" << fixed << setprecision(2) << totalAmount << endl;

    cout << "Confirm booking? (Y/N): ";
    char confirmation;
    cin >> confirmation;

    if (confirmation == 'Y' || confirmation == 'y') {
        availableSeats -= numTickets;
        cout << "Booking successful. Enjoy the movie!\n";
    } else {
        cout << "Booking cancelled.\n";
    }

    cout << "Remaining seats: " << availableSeats << endl;

    return 0;
}
