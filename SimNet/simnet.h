#pragma once

#include <iostream>
#include <thread>
#include <memory>
#include <vector>

#include "Network/network.h"

class SimNet {

  std::vector<Network> networks;
  //placeholder value
  int value;

  std::vector<std::unique_ptr<std::thread>> worker_threads;

public:
  SimNet(); //constructor

  void start();





};
