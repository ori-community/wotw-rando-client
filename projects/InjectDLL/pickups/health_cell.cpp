#include <pch.h>
#include <interception_macros.h>
#include <pickups/pickups.h>

INTERCEPT(5820064, void, SeinPickupProcessor__OnCollectMaxHealthHalfContainerPickup, (SeinPickupProcessor_o* this_ptr, MaxHealthHalfContainerPickup_o* maxHealthContainerPickup), {
	collecting_pickup = true;
	SeinPickupProcessor__OnCollectMaxHealthHalfContainerPickup(this_ptr, maxHealthContainerPickup);
	collecting_pickup = false;
});

INTERCEPT(18319328, void, SeinHealthController__set_BaseMaxHealth, (SeinHealthController_o* this_ptr, int32_t value), {	
	if(collecting_pickup)
		return;

	SeinHealthController__set_BaseMaxHealth(this_ptr, value);
});

INTERCEPT(18318112, void, SeinHealthController__set_Amount, (SeinHealthController_o* this_ptr, float value), {
	if(collecting_pickup)
		return;

	SeinHealthController__set_Amount(this_ptr, value);
});

INTERCEPT(8453968, void, SeinLevel__set_PartialHealthContainers, (SeinLevel_o* this_ptr, int32_t value), {
	if(collecting_pickup)
		return;

	SeinLevel__set_PartialHealthContainers(this_ptr, value);
});

INTERCEPT(8453776, int, SeinLevel__get_PartialHealthContainers, (SeinLevel_o* this_ptr), {
	if(collecting_pickup)
		return 1;

	return SeinLevel__get_PartialHealthContainers(this_ptr);
});
