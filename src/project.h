/*
 * project.h
 *
 *  Created on: 19/lug/2016
 *      Author: luca
 */

#ifndef SRC_PROJECT_H_
#define SRC_PROJECT_H_

#include <stdio.h>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <functional>

using std::string;
using std::vector;

namespace Project {

	namespace System {
		class Runtime;
		template <typename T> class FIFOQueue;
	}

	namespace Agent {
		class Agent;
		class Action;
		//class ActionWrapper;
	}

	namespace Comms {
		class Message;
	}

}

#include "FIFOQueue.cpp"
#include "Message.h"
#include "Agent.h"
#include "Runtime.h"

#endif /* SRC_PROJECT_H_ */
