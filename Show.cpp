//
// YOur comments here...
//

#include "Show.h"

// --- Accessors (Getters) ---
std::string Show::getTitle() {
    return title;
}

std::string Show::getVenue() {
    return venue;
}

int Show::getShowTime() {
    return showTime;
}

// --- Mutators (Setters) ---
void Show::setTitle(std::string newTitle) {
    title = newTitle;
}

void Show::setVenue(std::string newVenue) {
    venue = newVenue;
}

void Show::setShowTime(int newShowTime) {
    showTime = newShowTime;
}