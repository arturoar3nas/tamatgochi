#include <catch2/catch.hpp>
#include "../src/virtualCat.hpp"

unsigned int Factorial(unsigned int number) {
   return number <= 1 ? number : Factorial(number - 1) * number;
}

TEST_CASE("blink") {
    VirtualCat pet;
    pet.set_stamina(-1);
    pet.blink();
    REQUIRE( pet.get_stamina() == -1 );

    SECTION( "positive stamina" ) {
        pet.set_stamina(1);
        pet.blink();
        REQUIRE( pet.get_stamina() == 2 );
    }
}

TEST_CASE("run") {
    VirtualCat pet;
    pet.set_stamina(-1);
    pet.blink();
    REQUIRE( pet.get_stamina() == -1 );

    SECTION( "positive stamina" ) {
        pet.set_stamina(1);
        pet.blink();
        REQUIRE( pet.get_stamina() == 2 );
    }
}

TEST_CASE("surprise") {

}

TEST_CASE("eat") {
    VirtualCat pet;
    pet.set_stamina(0);
    pet.blink();
    REQUIRE( pet.get_stamina() == 2 );
}

TEST_CASE("chat") {

}

TEST_CASE("math") {

}
