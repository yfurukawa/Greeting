#ifndef GREETINGTEST_H_
#define GREETINGTEST_H_

#include <gtest/gtest.h>
#include "mocks/GreetingSpy.h"
#include "mocks/TimeKeeperMock.h"

class GreetingTest : public ::testing::Test {
protected:
	GreetingSpy* sut;
	TimeKeeperMock* timeKeeper_;
	void SetUp();
	void TearDown();

public:
	GreetingTest();
	virtual ~GreetingTest();

};

#endif
