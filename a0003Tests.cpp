#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "a0003.h"

//test case 1

TEST_CASE("countCharacters - string with upper & lowercase S's in int")
{
    string phrase = "This is a test for Strings and it is fun.";
    int numChar;
    char chara = 's';
    numChar = countCharacters(phrase, chara);
    REQUIRE( numChar == 6 );
}     

//test case two
TEST_CASE("countCharacters - string with upper & lowercase G's in int")
{
    string phrase = "Good golly grapes are so Good.";
    int numChar;
    char chara = 'g';
    numChar = countCharacters(phrase, chara);
    REQUIRE( numChar == 4 );
}      

//test case 3
TEST_CASE("countCharacters - string with spaces in it")
{
    string phrase = "I love my dog Yoshi so much!";
    int numChar;
    char chara = ' ';
    numChar = countCharacters(phrase, chara);
    REQUIRE( numChar == 6 );
}    

//test case 4
TEST_CASE("countCharacters - string with upper & lowercase A's in it")
{
    string phrase = "An apple a day keeps the doctor away.";
    int numChar;
    char chara = 'a';
    numChar = countCharacters(phrase, chara);
    REQUIRE(numChar == 6);
}

//test case 5
TEST_CASE("countCharacters - string with upper & lowercase Z's in it")
{
    string phrase = "At the Zoo I saw a lot of zebras";
    int numChar;
    char chara = 'z';
    numChar = countCharacters(phrase, chara);
    REQUIRE( numChar == 2 );
}      

//test case 6
TEST_CASE("countCharacters - string that will result in 0")
{
    string phrase = "I major in Math at Mines";
    int numChar;
    char chara = 'l';
    numChar = countCharacters(phrase, chara);
    REQUIRE( numChar == 0 );
}  