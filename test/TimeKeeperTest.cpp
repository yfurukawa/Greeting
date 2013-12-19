#include "TimeKeeperTest.h"

TimeKeeperTest::TimeKeeperTest() {

}

TimeKeeperTest::~TimeKeeperTest() {

}

void TimeKeeperTest::SetUp() {
	sut = new TimeKeeper();
}

void TimeKeeperTest::TearDown() {
	delete sut;
}

TEST_F (TimeKeeperTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
