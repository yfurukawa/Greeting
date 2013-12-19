#ifndef GREETINGTEST_H_
#define GREETINGTEST_H_

#include <gtest/gtest.h>
#include "Greeting.h"

class GreetingTest : public ::testing::Test {
protected:
	Greeting* sut;
	void SetUp();
	void TearDown();

public:
	GreetingTest();
	virtual ~GreetingTest();

};

#endif
