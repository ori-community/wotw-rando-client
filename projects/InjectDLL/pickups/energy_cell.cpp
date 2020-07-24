#include <Il2CppModLoader/interception_macros.h>
#include <pickups/pickups.h>


IL2CPP_INTERCEPT(, SeinPickupProcessor, void, OnCollectMaxEnergyHalfContainerPickup, (__int64 this_ptr, __int64 pickupPointer)) {
	collecting_pickup = true;
	SeinPickupProcessor::OnCollectMaxEnergyHalfContainerPickup(this_ptr, pickupPointer);
	collecting_pickup = false;
}

IL2CPP_INTERCEPT(, SeinEnergy, void, set_BaseMaxEnergy, (app::SeinEnergy* this_ptr, float value)) {
	if(collecting_pickup)
		return;
	
	SeinEnergy::set_BaseMaxEnergy(this_ptr, value);
}

IL2CPP_INTERCEPT(, SeinEnergy, void, set_Current, (app::SeinEnergy* this_ptr, float value)) {
	if(collecting_pickup)
		return;
	
	SeinEnergy::set_Current(this_ptr, value);
}

IL2CPP_INTERCEPT(, SeinLevel, void, set_PartialEnergyContainers, (app::SeinLevel* this_ptr, int value)) {
	if(collecting_pickup)
		return;

	SeinLevel::set_PartialEnergyContainers(this_ptr, value);
}

IL2CPP_INTERCEPT(, SeinLevel, int, get_PartialEnergyContainers, (app::SeinLevel* this_ptr)) {
	if(collecting_pickup)
		return 1;

	return SeinLevel::get_PartialEnergyContainers(this_ptr);
}
