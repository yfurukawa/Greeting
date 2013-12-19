#include "TimeKepperTest.h"

TimeKepperTest::TimeKepperTest() {

}

TimeKepperTest::~TimeKepperTest() {

}

void TimeKepperTest::SetUp() {
	sut = new TimeKepper();
}

void TimeKepperTest::TearDown() {
	delete sut;
}

TEST_F (TimeKepperTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
