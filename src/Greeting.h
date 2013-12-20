/**
 * Greeting.h<br>
 *
 */

#ifndef GREETING_H_
#define GREETING_H_

#include <string>
#include "ITimeKeeper.h"

class TimeKeeper;

class Greeting {
public:
	//! Constractor
	Greeting();
	//! Destructor
	virtual ~Greeting();
	//! 現時刻に合った挨拶をする
	/*!
	 * \return 挨拶文字列
	 */
	std::string greet();

protected:
	ITimeKeeper* timeKeeper_; //!< 時刻管理オブジェクト
	//! コンストラクタ
	/*!
	 * @param timeKeeper 時刻管理オブジェクト
	 */
	Greeting(ITimeKeeper* timeKeeper);

private:
};

#endif
