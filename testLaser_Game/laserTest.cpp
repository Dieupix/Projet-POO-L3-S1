#ifndef LASERTEST_H
#define LASERTEST_H

#include "doctest.h"
#include "../Laser_Game/laser.h"

#include <string>
#include <sstream>

using std::ostringstream;
using std::string;

TEST_CASE("2 - Test of the class laser"
          * doctest::skip(true))
{
    point position{0, 0};
    auto direction = directions::RIGHT;
    double step = 1.0;

    auto l = createLaserForTest(position, direction, step);

    SUBCASE("Test of the constructor")
    {
        //REQUIRE_EQ(l.getPosition(), point{-1, -1}); // SHOULD FAIL
        REQUIRE_EQ(l.getPosition(), position);
        REQUIRE_EQ(l.getDirection(), direction);
        REQUIRE_EQ(l.getStep(), step);
    }

    SUBCASE("Test of the setters")
    {
        SUBCASE("Test of the setDirection() function")
        {
            auto newDirection = directions::LEFT;
            l.setDirection(newDirection);

            //CHECK_EQ(l.getDirection(), directions::UP); // SHOULD FAIL
            CHECK_EQ(l.getDirection(), newDirection);
        }

        SUBCASE("Test of the setStep() function")
        {
            double newStep = 2.5;
            l.setStep(newStep);

            //CHECK_EQ(l.getStep(), 1.6); // SHOULD FAIL
            CHECK_EQ(l.getStep(), newStep);
        }
    }

    SUBCASE("Test of the moveByStep() function")
    {
        point expectedPosition {1.0, 0};
        l.moveByStep();

        //CHECK_EQ(l.getPosition(), point{-1.5, 0}); // SHOULD FAIL
        CHECK_EQ(l.getPosition(), expectedPosition);
    }

    SUBCASE("Test of the turning functions")
    {
        SUBCASE("Test of the turnLeft() function")
        {
            auto expectedDirection = directions::UP;
            l.turnLeft();

            //CHECK_EQ(l.getDirection(), directions::DOWN); // SHOULD FAIL
            CHECK_EQ(l.getDirection(), expectedDirection);
        }

        SUBCASE("Test of the turnRight() function")
        {
            auto expectedDirection = directions::DOWN;
            l.turnRight();

            //CHECK_EQ(l.getDirection(), directions::UP); // SHOULD FAIL
            CHECK_EQ(l.getDirection(), expectedDirection);
        }
    }

    ///@FIXME - Alex : fix the subcase
    SUBCASE("Test of the print() function")
    {
        string expectedOutput = "Laser[position(0,0), direction(RIGHT), step(1)]";

        ostringstream ost;
        l.print(ost);

        string read = ost.str();

        //CHECK_EQ(read, "I want you to fail"); // SHOULD FAIL
        CHECK_EQ(read, expectedOutput);
    }
}

#endif // LASERTEST_H
