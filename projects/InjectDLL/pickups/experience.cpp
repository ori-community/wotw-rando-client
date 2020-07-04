#include <interception_macros.h>
#include <pickups/pickups.h>

INTERCEPT(5817392, void, SeinPickupProcessor__OnCollectExpOrbPickup, (app::SeinPickupProcessor* this_ptr, app::ExpOrbPickup* expOrbPickup)) {
	if(expOrbPickup->fields.MessageType) //Any non-enemy exp drop has an associated messageBox
		collecting_pickup = true;

	SeinPickupProcessor__OnCollectExpOrbPickup(this_ptr, expOrbPickup);
	collecting_pickup = false;
}

INTERCEPT(8453168, void, SeinLevel__set_Experience, (app::SeinLevel* this_ptr, int32_t value)) {
	if(collecting_pickup)
		return;

	SeinLevel__set_Experience(this_ptr, value);
}
