#include "GreetingTest.h"

GreetingTest::GreetingTest() {

}

GreetingTest::~GreetingTest() {

}

void GreetingTest::SetUp() {
	sut = new Greeting();
}

void GreetingTest::TearDown() {
	delete sut;
}

TEST_F (GreetingTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
