#include <interception_macros.h>
#include <pickups/pickups.h>


INTERCEPT(5813104, void, SeinPickupProcessor__OnCollectMaxEnergyHalfContainerPickup, (__int64 this_ptr, __int64 pickupPointer)) {
	collecting_pickup = true;
	SeinPickupProcessor__OnCollectMaxEnergyHalfContainerPickup(this_ptr, pickupPointer);
	collecting_pickup = false;
}

INTERCEPT(9450736, void, SeinEnergy__set_BaseMaxEnergy, (app::SeinEnergy* this_ptr, float value)) {
	if(collecting_pickup)
		return;
	
	SeinEnergy__set_BaseMaxEnergy(this_ptr, value);
}

INTERCEPT(9449664, void, SeinEnergy__set_Current, (app::SeinEnergy* this_ptr, float value)) {
	if(collecting_pickup)
		return;
	
	SeinEnergy__set_Current(this_ptr, value);
}

INTERCEPT(8454368, void, SeinLevel__set_PartialEnergyContainers, (app::SeinLevel* this_ptr, int value)) {
	if(collecting_pickup)
		return;

	SeinLevel__set_PartialEnergyContainers(this_ptr, value);
}

INTERCEPT(8454176, int, SeinLevel__get_PartialEnergyContainers, (app::SeinLevel* this_ptr)) {
	if(collecting_pickup)
		return 1;

	return SeinLevel__get_PartialEnergyContainers(this_ptr);
}
