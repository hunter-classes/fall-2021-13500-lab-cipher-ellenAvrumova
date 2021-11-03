#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("BASIC SENTENCE CASES") {
    CHECK(solve("Qbun cm u wigjonyl’m zupilcny mhuwe? Wigjonyl wbcjm") == "What is a computer’s favorite snack? Computer chips");
    CHECK(solve("Pm bpzcaba pqa nqaba ioiqvab bpm xwaba, ivl abqtt qvaqaba pm amma bpm opwaba.") == "He thrusts his fists against the posts, and still insists he sees the ghosts.");
    CHECK(solve("Hfjxfw hnumjw nx f yduj tk xzgxynyzynts hnumjw ns bmnhm jfhm qjyyjw ns ymj uqfnsyjcy nx wjuqfhji gd f qjyyjw xtrj kncji szrgjw tk utxnyntsx itbs ymj fqumfgjy.") == "Caesar cipher is a type of substitution cipher in which each letter in the plaintext is replaced by a letter some fixed number of positions down the alphabet.");
    CHECK(solve("Sxysaud eluh hysu yi co vqlehyju veet.") == "Chicken over rice is my favorite food.");
    CHECK(solve("Aol xbpjr iyvdu mve qbtwz vcly aol shgf kvn") == "The quick brown fox jumps over the lazy dog");
}

TEST_CASE("ONE WORD CASES DON'T WORK") {
    CHECK(solve("pmttw") != "hello");
    CHECK(solve("ebgngvbaf") != "rotations");
    CHECK(solve("sdrithi") != "doctest");
}

TEST_CASE("SMALL SENTENCES MAY OR MAY NOT WORK") {
    CHECK(solve("Gbvx mh fxxm rhn!") != "Nice to meet you!");
    CHECK(solve("Ovvox Kfbewyfk") == "Ellen Avrumova");
    CHECK(solve("Vhfinmxk lvbxgvx bl yng") == "Computer science is fun");
}

TEST_CASE("CASES WITH SPECIAL CHARACTERS") {
    CHECK(solve("Qbun cm@ u wigjonyl’m zupilcny mhu$w&e? Wigjonyl wbcjm") == "What is@ a computer’s favorite sna$c&k? Computer chips");
    CHECK(solve("eb#gn/gv!baf") != "ro#ta/ti!ons");
    CHECK(solve("Vhfin@mxk lv!bxg%vx bl y&ng") == "Compu@ter sc!ien%ce is f&un");
}