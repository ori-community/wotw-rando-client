#include "pch.h"
#pragma once
#include "../../interceptionMacros.h"

bool is_collecting_ore = false;
INTERCEPT(6212320, void, SeinPickupProcessor__OnCollectOrePickup, (SeinPickupProcessor_o* this_ptr, OrePickup_o* orePickup), {	
	is_collecting_ore = true;
	SeinPickupProcessor__OnCollectOrePickup(this_ptr, orePickup);
	is_collecting_ore = false;
});

INTERCEPT(8380208, void, SeinLevel__set_Ore, (SeinLevel_o* this_ptr, int32_t value), {
	if(is_collecting_ore)
		return;

	SeinLevel__set_Ore(this_ptr, value);
});