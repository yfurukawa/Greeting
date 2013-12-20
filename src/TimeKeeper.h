/**
 * TimeKeeper.h<br>
 *
 */

#ifndef TIMEKEEPER_H_
#define TIMEKEEPER_H_

#include <string>

#include "ITimeKeeper.h"

class TimeKeeper : public ITimeKeeper {
public:
	//! Constractor
	TimeKeeper();
	//! Destructor
	virtual ~TimeKeeper();
	virtual const std::string getCurrentTime() const;

protected:

private:
};

#endif
