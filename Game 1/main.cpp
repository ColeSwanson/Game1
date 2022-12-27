/* Fishing game
 * Premise: Catch different fish and objects
 * Description: Fish bounce around onscreen (as shadows to not reveal what the fish/objects are).
 * When the fish is under pole press space to catch and reveal fish. Fish will exist for 10 seconds before they disapear and another spawns
 * Objects:
 *      Fishing Rod
 *          Elements:
 *              X - location
 *              Y - location
 *              dx - movement in x direction
 *              dy - movement in y direction
 *              R - radius (hitbox)
 *              angle - direction of travel
 *              catch - bool(catching or not)
 *      Fish
 *          Elements:
 *              X - location
 *              Y - location
 *              dx - movement in x direction
 *              dy - movement in y direction
 *              R - radius (hitbox)
 *              angle - direction of travel
 *              name - name of fish
 *              speed - speed of the fish (0 - 100)
 *              rarity of the fish ( Trash - 100-200 Common 200-500 Uncommon 500-750 Rare - 750-1000 legendary 1000-2000)
 *          derived from fish object:
 *          =====TRASH=====
 *          Old boot
 *              Speed: 0
 *              Rarity: 100
 *          Log
 *              Speed: 0
 *              Rarity: 150
 *          =====COMMON======
 *          Carp
 *              Speed: 15
 *              Rarity: 200
 *          Catfish
 *              Speed: 15
 *              Rarity: 250
 *          Goldfish
 *              Speed: 20
 *              Rarity: 250
 *          Nemo
 *              Speed: 25
 *              Rarity: 250
 *          Walleye
 *              Speed: 25
 *              Rarity: 400
 *          Perch
 *              Speed: 25
 *              Rarity: 400
 *          ======UNCOMMON======
 *          Frog
 *              Speed: (random speed changes every 2 seconds)
 *              Rarity: 500
 *          Duck
 *              Speed: 50
 *              Rarity: 550
 *          Turtle
 *              Speed: 5
 *              Rarity: 600
 *          Jellyfish
 *              Speed: 30
 *              Rarity: 650
 *          Seahorse
 *              Speed: 40
 *              Rarity: 700
 *          Lobster
 *              Speed: 5
 *              Rarity: 700
 *          =====RARE=====
 *          Sword Fish
 *              Speed: 75
 *              Rarity: 800
 *          Octopus
 *              Speed: 65
 *              Rarity: 850
 *          Whale
 *              Speed: 70
 *              Rarity: 900
 *          Sting ray
 *              Speed: 75
 *              Rarity: 1000
 *          ======LEGENDARY======
 *         Starfish
 *              Speed: 0
 *              Rarity: 1500
 *         Shark
 *              Speed: 100
 *              Rarity: 1750
 *         Penguin
 *              Speed: 90
 *              Rarity: 2000
 *
 */

#include <SFML/Graphics.hpp>
#include <time.h>
#include <list>

using namespace sf;

//Fishing rod
class FishingRod
{
public:
    //Constructor
    FishingRod(const std::string &name, float x, float y, float dx, float dy, int r, float angle, bool cast, bool row) {
        name = "FishingRod";
        x = 100;
        y = 100;
        dx = 0;
        dy = 0;
        R = 50;
        angle = 0;
        cast = false;
        row = false;
    }
    //getter and setter for X coordinate
    float getX() const {
        return x;
    }
    void setX(float x) {
        FishingRod::x = x;
    }
    //getter and setter for y coordinate
    float getY() const {
        return y;
    }
    void setY(float y) {
        FishingRod::y = y;
    }
    //getter and setter for dx
    float getDx() const {
        return dx;
    }
    void setDx(float dx) {
        FishingRod::dx = dx;
    }
    //getter and setter for dy
    float getDy() const {
        return dy;
    }
    void setDy(float dy) {
        FishingRod::dy = dy;
    }
    //getter and setter for angle
    float getAngle() const {
        return angle;
    }
    void setAngle(float angle) {
        FishingRod::angle = angle;
    }
    //getter and setter for cast
    bool isCast() const {
        return cast;
    }
    void setCast(bool cast) {
        FishingRod::cast = cast;
    }
    //getter and setter for row
    bool isRow() const {
        return row;
    }
    void setRow(bool row) {
        FishingRod::row = row;
    }
    //getter for name
    const std::string &getName() const {
        return name;
    }
    //getter for radius
    int getR() const {
        return R;
    }

private:
    std::string name;
    float x; //x location
    float y; //y location
    float dx; // x movement
    float dy; // y movement
    int R; //radius/hitbox
    float angle; //direction of boat/fishing rod
    bool cast; //catching or not
    bool row; //moving or not
};


int main()
{

    return 0;
}
