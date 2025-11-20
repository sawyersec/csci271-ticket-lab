#include <iostream>
#include <string>
#include <iomanip> // For std::setw, std::setfill, std::fixed, std::setprecision

// Include the struct definitions
#include "Show.h"
#include "Ticket.h"

/**
 * @brief Prints the details of a ticket and its show.
 * @param show The Show object (with private data).
 * @param ticket The Ticket object (with public data).
 */
void printTicketInfo(Show show, Ticket ticket) {
    std::cout << "================================\n";
    std::cout << "      *** ADMIT ONE ***\n";
    std::cout << "================================\n";

    // Use accessors (getters) for the Show object
    std::cout << "WHAT:   " << show.getTitle() << "\n";
    std::cout << "WHERE:  " << show.getVenue() << "\n";

    // Format the show time (e.g., 1930 -> 19:30)
    int hour = show.getShowTime() / 100;
    int minute = show.getShowTime() % 100;
    std::cout << "WHEN:   " << hour << ":"
              << std::setw(2) << std::setfill('0') << minute << "\n";
    std::cout << "--------------------------------\n";

    // Use direct member access for the Ticket object
    std::cout << "SECTION: " << ticket.section << "\n";
    std::cout << "ROW:     " << ticket.row << "\n";
    std::cout << "SEAT:    " << ticket.seat << "\n";
    std::cout << "--------------------------------\n";
    std::cout << "PRICE:  $"
              << std::fixed << std::setprecision(2) << ticket.price << "\n";
    std::cout << "================================\n";
}


int main() {
    // Step 1: Create an instance of your Show struct.
    Show myShow;

    // Step 2: Use the mutator (setter) methods to set its data.
    myShow.setTitle("Hamilton");
    myShow.setVenue("Richard Rodgers Theatre");
    myShow.setShowTime(1900);

    // Step 3: Create an instance of your Ticket struct.
    Ticket myTicket;

    // Step 4: Use direct member access to set its data.
    myTicket.section = "Orchestra";
    myTicket.row = 10;
    myTicket.seat = 24;
    myTicket.price = 199.99;

    // Step 5: Call the printTicketInfo function.
    printTicketInfo(myShow, myTicket);


    return 0;
}