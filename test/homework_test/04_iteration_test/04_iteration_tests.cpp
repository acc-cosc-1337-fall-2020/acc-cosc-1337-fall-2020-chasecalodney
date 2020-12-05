#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"
#include <string>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("test get_gc_content") {
	std::string test = "AGCTATAG";
	std::string test2 = "CGCTATAG";
	REQUIRE(get_gc_content(test) == 37.5);
	REQUIRE(get_gc_content(test2) == 50);
}
TEST_CASE("Test get reverse string") 
{
	std::string test = "AGCTATAG";
	std::string test2 = "CGCTATAG";
	REQUIRE(get_reverse_string(test) == "GATATCGA");
	REQUIRE(get_reverse_string(test2) == "GATATCGC");
}
TEST_CASE("Test get dna complement") 
{
	std::string test = "AAAACCCGGT";
	std::string test2 = "CCCGGAAAAT";
	REQUIRE(get_dna_complement(test) == "ACCGGGTTTT");
	REQUIRE(get_dna_complement(test2) == "ATTTTCCGGG");
}


