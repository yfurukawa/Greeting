#include "GreetingTest.h"

GreetingTest::GreetingTest() {

}

GreetingTest::~GreetingTest() {

}

void GreetingTest::SetUp() {
	timeKeeper_ = new TimeKeeperMock();
	sut = new GreetingSpy( timeKeeper_ );
}

void GreetingTest::TearDown() {
	delete sut;
	delete timeKeeper_;
}

TEST_F (GreetingTest, sayGoodMorningWhenCurrentTimeIs0959) {

	timeKeeper_->setCurrentTime("0959");
	EXPECT_EQ("Good Morning", sut->greet());

}

TEST_F (GreetingTest, sayGoodEveningWhenCurrentTimeIs1000) {

	timeKeeper_->setCurrentTime("1000");
	EXPECT_EQ("Good Evening", sut->greet());

}
