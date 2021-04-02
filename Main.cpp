#include "MazeGenerator.h"
#include "Labyrinth.h"
#include <iostream>
#include <string>

/* Change this constant to contain your name.
 *
 * WARNING: Once you've set set this constant and started exploring your maze,
 * do NOT edit the value of kYourName. Changing kYourName will change which
 * maze you get back, which might invalidate all your hard work!
 */
// const std::string kYourName = "TODO: Replace this string with your name.";
const std::string kYourName = "Tanmoy Paul";

/* Change these constants to contain the paths out of your mazes. */
// Default
// const std::string kPathOutOfNormalMaze = "SESSWENNENSESS";
// Tanmoy Paul
const std::string kPathOutOfNormalMaze = "SESWSEEWWNEEESNNNWW";
// Tanmoy Paul testing
// const std::string kPathOutOfNormalMaze = "SESWSEEWWNEEESNNNWWEWEESSSNWWWSEE";

// Default
// const std::string kPathOutOfTwistyMaze = "ESWEESWENE";
// Tanmoy Paul
const std::string kPathOutOfTwistyMaze = "SNWWWESW";
// Tanmoy Paul testing
// const std::string kPathOutOfTwistyMaze = "SNWWWESWWSENWWESEESW";

int main() {
    /* Generate the maze.
     *
     * Note: Don't set a breakpoint on this line. Otherwise, you'll see startLocation before
     * it's been initialized.
     */
    MazeCell* startLocation = mazeFor(kYourName);
    
    /* Set a breakpoint here to explore your maze! */
    if (isPathToFreedom(startLocation, kPathOutOfNormalMaze)) {
        std::cout << "Congratulations! You've found a way out of your labyrinth." << std::endl;
    } else {
        std::cout << "Sorry, but you're still stuck in your labyrinth." << std::endl;
    }
    
    std::cout << std::endl;

    /* Generate the twisty maze.
     *
     * Note: Don't set a breakpoint on this line. Otherwise, you'll see twistyStartLocation before
     * it's been initialized.
     */
    MazeCell* twistyStartLocation = twistyMazeFor(kYourName);
    
    /* Set a breakpoint here to explore your twisty maze! */
    
    if (isPathToFreedom(twistyStartLocation, kPathOutOfTwistyMaze)) {
        std::cout << "Congratulations! You've found a way out of your twisty labyrinth." << std::endl;
    } else {
        std::cout << "Sorry, but you're still stuck in your twisty labyrinth." << std::endl;
    }
    
    return 0;
}