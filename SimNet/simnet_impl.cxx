

#include "simnet.h"


SimNet::SimNet() {

	std::cout << "SimNet object created" << std::endl;

	this->networks.push_back(Network());
}


void SimNet::start() {
	std::cout << "SimNet service started" << std::endl;
}
