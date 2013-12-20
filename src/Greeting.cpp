#include <iostream>

#include "Greeting.h"
#include "TimeKeeper.h"

Greeting::Greeting() : timeKeeper_( new TimeKeeper() ) {
}

Greeting::Greeting( ITimeKeeper* timeKeeper ) : timeKeeper_(timeKeeper) {
}

Greeting::~Greeting() {

}

std::string Greeting::greet(){
	if (timeKeeper_->getCurrentTime() == "0959" ) {
		return "Good Morning";
	}
	else {
		return "Good Evening";
	}
}


