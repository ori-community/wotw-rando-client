#include <interception_macros.h>
#include <pickups/pickups.h>

IL2CPP_INTERCEPT(, SeinPickupProcessor, void, OnCollectExpOrbPickup, (app::SeinPickupProcessor* this_ptr, app::ExpOrbPickup* expOrbPickup)) {
	if(expOrbPickup->fields.MessageType) //Any non-enemy exp drop has an associated messageBox
		collecting_pickup = true;

	SeinPickupProcessor::OnCollectExpOrbPickup(this_ptr, expOrbPickup);
	collecting_pickup = false;
}

IL2CPP_INTERCEPT(, SeinLevel, void, set_Experience, (app::SeinLevel* this_ptr, int32_t value)) {
	if(collecting_pickup)
		return;

	SeinLevel::set_Experience(this_ptr, value);
}
