/**
 * TimeKeeperMock.h<br>
 *
 *  Created on: 2013/12/19<br>
 *      Author: M825504
 */

#ifndef TIMEKEEPERMOCK_H_
#define TIMEKEEPERMOCK_H_

#include <string>
#include <ITimeKeeper.h>

class TimeKeeperMock : public ITimeKeeper {
public:
	TimeKeeperMock();
	virtual ~TimeKeeperMock();
	void setCurrentTime( std::string currentTime ) {
		currentTime_ = currentTime;
	};
	virtual const std::string getCurrentTime() const {
		return currentTime_;
	}
private:
	std::string currentTime_;
};

#endif /* TIMEKEEPERMOCK_H_ */
