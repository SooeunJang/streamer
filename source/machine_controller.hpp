/*
 * machine_controller.hpp
 *
 *  Created on: 2018. 6. 20.
 *      Author: jangsueun
 */

#pragma once

#include <basic_controller.hpp>

using namespace cfx;

class MachineController : public BasicController, Controller {
public:
	MachineController(void) : BasicController() {}
	virtual ~MachineController() {}
	void handleGet(http_request message) override;
	void handlePut(http_request message) override {;}
	void handlePost(http_request message) override {;}
	void handleDelete(http_request message) override {;}

protected:
	void initRestOpHandlers() override;
};

