/**
 * ITimeKeeper.h<br>
 *
 *  Created on: 2013/12/19<br>
 *      Author: M825504
 */

#ifndef ITIMEKEEPER_H_
#define ITIMEKEEPER_H_

#include <string>

class ITimeKeeper {
public:
	ITimeKeeper() {};
	virtual ~ITimeKeeper() {};
	virtual const std::string getCurrentTime() const = 0;
};

#endif /* ITIMEKEEPER_H_ */
