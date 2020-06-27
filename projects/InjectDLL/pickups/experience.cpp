#include <interception_macros.h>
#include <pickups/pickups.h>

INTERCEPT(5817392, void, SeinPickupProcessor__OnCollectExpOrbPickup, (SeinPickupProcessor_o* this_ptr, ExpOrbPickup_o* expOrbPickup)) {
	if(expOrbPickup->MessageType) //Any non-enemy exp drop has an associated messageBox
		collecting_pickup = true;

	SeinPickupProcessor__OnCollectExpOrbPickup(this_ptr, expOrbPickup);
	collecting_pickup = false;
}

INTERCEPT(8453168, void, SeinLevel__set_Experience, (SeinLevel_o* this_ptr, int32_t value)) {
	if(collecting_pickup)
		return;

	SeinLevel__set_Experience(this_ptr, value);
}
