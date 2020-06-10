#include <pch.h>
#include <interceptionMacros.h>

bool is_collecting_ore = false;
INTERCEPT(5814720, void, SeinPickupProcessor__OnCollectOrePickup, (SeinPickupProcessor_o* this_ptr, OrePickup_o* orePickup), {	
	is_collecting_ore = true;
	SeinPickupProcessor__OnCollectOrePickup(this_ptr, orePickup);
	is_collecting_ore = false;
});

INTERCEPT(8453568, void, SeinLevel__set_Ore, (SeinLevel_o* this_ptr, int32_t value), {
	if(is_collecting_ore)
		return;

	SeinLevel__set_Ore(this_ptr, value);
});