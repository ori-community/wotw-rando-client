#include <pch.h>
#include <interception_macros.h>
#include <pickups/pickups.h>


INTERCEPT(5814720, void, SeinPickupProcessor__OnCollectOrePickup, (SeinPickupProcessor_o* this_ptr, OrePickup_o* orePickup), {	
	collecting_pickup = true;
	SeinPickupProcessor__OnCollectOrePickup(this_ptr, orePickup);
  collecting_pickup = false;
});

INTERCEPT(8453568, void, SeinLevel__set_Ore, (SeinLevel_o* this_ptr, int32_t value), {
	if(collecting_pickup)
		return;

	SeinLevel__set_Ore(this_ptr, value);
});
