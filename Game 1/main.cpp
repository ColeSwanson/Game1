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
 *          =====TRASH=====	-	400/1000 (100)
 *          Old boot
 *              Speed: 0
 *              Rarity: 100
 *          Log
 *              Speed: 0
 *              Rarity: 100
 *	    Trash
 *		Speed: 0
 *		Rartiy: 100
 *	    Snag
 *		Speed: 0
 *		Rarity: 100
 *          =====COMMON======	-	300/1000 (50)
 *          Carp
 *              Speed: 15
 *              Rarity: 50
 *          Catfish
 *              Speed: 15
 *              Rarity: 50
 *          Goldfish
 *              Speed: 20
 *              Rarity: 50
 *          Nemo
 *              Speed: 25
 *              Rarity: 50
 *          Walleye
 *              Speed: 25
 *              Rarity: 50
 *          Perch
 *              Speed: 25
 *              Rarity: 50
 *          ======UNCOMMON====== -	150/1000(30)
 *          Frog
 *              Speed: (random speed changes every 2 seconds)
 *              Rarity: 30
 *          Duck
 *              Speed: 50
 *              Rarity: 30
 *          Turtle
 *              Speed: 5
 *              Rarity: 30
 *          Jellyfish
 *              Speed: 30
 *              Rarity: 30
 *          Seahorse
 *              Speed: 40
 *              Rarity: 30
 *          Lobster
 *              Speed: 5
 *              Rarity: 30
 *          =====RARE=====	-	100/1000(25)
 *          Sword Fish
 *              Speed: 75
 *              Rarity: 25
 *          Octopus
 *              Speed: 65
 *              Rarity: 25
 *          Whale
 *              Speed: 70
 *              Rarity: 25
 *          Sting ray
 *              Speed: 75
 *              Rarity: 25
 *          ======LEGENDARY====== -	50/1000(10)
 *         Starfish
 *              Speed: 5
 *              Rarity: 10
 *         Shark
 *              Speed: 100
 *              Rarity: 10
 *         Penguin
 *              Speed: 90
 *              Rarity: 10
 *	       Treasure Chest
 *		        Speed: 0
 *		        Rarity: 10
 *	       Blob fish
 *		        Speed: 80
 *		        Rarity: 10
 */

#include <SFML/Graphics.hpp>
#include <time.h>
#include <list>

using namespace sf;

//Fishing rod object
class Entity
{
public:
    //getter and setter for X coordinate
    float getX() const {
        return x;
    }
    void setX(float x) {
        Entity::x = x;
    }
    //getter and setter for y coordinate
    float getY() const {
        return y;
    }
    void setY(float y) {
        Entity::y = y;
    }
    //getter and setter for dx
    float getDx() const {
        return dx;
    }
    void setDx(float dx) {
        Entity::dx = dx;
    }
    //getter and setter for dy
    float getDy() const {
        return dy;
    }
    void setDy(float dy) {
        Entity::dy = dy;
    }
    //getter and setter for angle
    float getAngle() const {
        return angle;
    }
    void setAngle(float angle) {
        Entity::angle = angle;
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
    std::string name; //name of entity
    float x; //x location
    float y; //y location
    float dx; // x movement
    float dy; // y movement
    int R; //radius/hitbox
    float angle; //direction of boat/fishing rod
};
//Fishing poll from entity class
class FishingPoll: Entity
{
public:
    //constructor
    FishingPoll() {
        setCast(false);
        setRow(false);
    }
    //getter and setter for cast
    bool isCast() const {
        return cast;
    }
    void setCast(bool cast) {
        FishingPoll::cast = cast;
    }
    //getter and setter for row
    bool isRow() const {
        return row;
    }
    void setRow(bool row) {
        FishingPoll::row = row;
    }
private:
    bool cast;
    bool row;
};
//Fish base class derived from entity class
class Fish : Entity
{
public:
    //constructor
    Fish(){
        FishCount++;
    }
    //destructor

    //getter and setter for catch
    bool isCatch() const {
        return Catch;
    }
    void setCatch(bool Catch) {
        Fish::Catch = Catch;
    }
    //getter for fish count prototype
    static int getFishCount();
private:
    bool Catch;
    static int FishCount;
};

int Fish::FishCount{0};
//getter for FishCount
int Fish::getFishCount() {
    return FishCount;
}


int main()
{

    return 0;
}
