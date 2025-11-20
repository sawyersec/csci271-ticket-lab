//
// YOur comments here...
//

#ifndef FIRSTSTRUCT_SHOW_H
#define FIRSTSTRUCT_SHOW_H

#include <string>

/**
 * @struct Show
 * @brief Holds data for a show, enforcing data hiding.
 *
 * This struct uses private members and public accessor/mutator
 * methods to control how data is accessed and modified.
 * The method implementations will be in Show.cpp.
 */
struct Show {
private:
    std::string title;
    std::string venue;
    int showTime;

public:
    // --- Accessors (Getters) ---
    std::string getTitle();
    std::string getVenue();
    int getShowTime();

    // --- Mutators (Setters) ---
    void setTitle(std::string newTitle);
    void setVenue(std::string newVenue);
    void setShowTime(int newShowTime);
};

#endif //FIRSTSTRUCT_SHOW_H