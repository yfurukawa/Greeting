#ifndef TIMEKEEPERTEST_H_
#define TIMEKEEPERTEST_H_

#include <gtest/gtest.h>
#include "TimeKeeper.h"

class TimeKeeperTest : public ::testing::Test {
protected:
	TimeKeeper* sut;
	void SetUp();
	void TearDown();

public:
	TimeKeeperTest();
	virtual ~TimeKeeperTest();

};

#endif
