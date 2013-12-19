#ifndef TIMEKEPPERTEST_H_
#define TIMEKEPPERTEST_H_

#include <gtest/gtest.h>
#include "TimeKepper.h"

class TimeKepperTest : public ::testing::Test {
protected:
	TimeKepper* sut;
	void SetUp();
	void TearDown();

public:
	TimeKepperTest();
	virtual ~TimeKepperTest();

};

#endif
