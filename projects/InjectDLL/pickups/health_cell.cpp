#include <interception_macros.h>
#include <pickups/pickups.h>

IL2CPP_INTERCEPT(, SeinPickupProcessor, void, OnCollectMaxHealthHalfContainerPickup, (app::SeinPickupProcessor* this_ptr, app::MaxHealthHalfContainerPickup* maxHealthContainerPickup)) {
	collecting_pickup = true;
	SeinPickupProcessor::OnCollectMaxHealthHalfContainerPickup(this_ptr, maxHealthContainerPickup);
	collecting_pickup = false;
}

IL2CPP_INTERCEPT(, SeinHealthController, void, set_BaseMaxHealth, (app::SeinHealthController* this_ptr, int32_t value)) {
	if(collecting_pickup)
		return;

	SeinHealthController::set_BaseMaxHealth(this_ptr, value);
}

IL2CPP_INTERCEPT(, SeinHealthController, void, set_Amount, (app::SeinHealthController* this_ptr, float value)) {
	if(collecting_pickup)
		return;

	SeinHealthController::set_Amount(this_ptr, value);
}

IL2CPP_INTERCEPT(, SeinLevel, void, set_PartialHealthContainers, (app::SeinLevel* this_ptr, int32_t value)) {
	if(collecting_pickup)
		return;

	SeinLevel::set_PartialHealthContainers(this_ptr, value);
}

IL2CPP_INTERCEPT(, SeinLevel, int, get_PartialHealthContainers, (app::SeinLevel* this_ptr)) {
	if(collecting_pickup)
		return 1;

	return SeinLevel::get_PartialHealthContainers(this_ptr);
}
