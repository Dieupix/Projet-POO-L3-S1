#ifndef WALLTEST_H
#define WALLTEST_H

#include "doctest.h"

#include "../Laser_Game/point.h"
#include "../Laser_Game/wall.h"
#include "../Laser_Game/laser.h"

TEST_CASE("3 - Test of the class wall")
{
    point p{5,5};
    point np{2,5};
    wall w{p};
    SUBCASE("Test of the constructor")
    {
        REQUIRE_EQ(w.getPosition(), p);
    }
    laser l = createLaserForTest(p, RIGHT);
    laser nl = createLaserForTest(np, RIGHT);

    ///@FIXME - Manu (or someone else?)
    /*SUBCASE("Test of the affectation")
    {
        SUBCASE("Test of not affected")
        {
            REQUIRE_EQ(w.isAffected(nl), false);
        }
        SUBCASE("Test of affected")
        {
            REQUIRE_EQ(w.isAffected(l), true);
        }
        SUBCASE("Test of change affectation")
        {
            REQUIRE_EQ(w.changeAffected(), true);
            REQUIRE_EQ(w.changeAffected(), false);
        }
    }*/
}

#endif // WALLTEST_H
