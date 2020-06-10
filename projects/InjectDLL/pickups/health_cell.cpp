#include <pch.h>
#include <interception_macros.h>

bool is_collecting_health_cell = false;

INTERCEPT(5820064, void, SeinPickupProcessor__OnCollectMaxHealthHalfContainerPickup, (SeinPickupProcessor_o* this_ptr, MaxHealthHalfContainerPickup_o* maxHealthContainerPickup), {
	is_collecting_health_cell = true;
	SeinPickupProcessor__OnCollectMaxHealthHalfContainerPickup(this_ptr, maxHealthContainerPickup);
	is_collecting_health_cell = false;
});

INTERCEPT(18319328, void, SeinHealthController__set_BaseMaxHealth, (SeinHealthController_o* this_ptr, int32_t value), {	
	if(is_collecting_health_cell)
		return;

	SeinHealthController__set_BaseMaxHealth(this_ptr, value);
});

INTERCEPT(18318112, void, SeinHealthController__set_Amount, (SeinHealthController_o* this_ptr, float value), {
	if(is_collecting_health_cell)
		return;

	SeinHealthController__set_Amount(this_ptr, value);
});

INTERCEPT(8453968, void, SeinLevel__set_PartialHealthContainers, (SeinLevel_o* this_ptr, int32_t value), {
	if(is_collecting_health_cell)
		return;

	SeinLevel__set_PartialHealthContainers(this_ptr, value);
});

INTERCEPT(8453776, int, SeinLevel__get_PartialHealthContainers, (SeinLevel_o* this_ptr), {
	if(is_collecting_health_cell)
		return 1;

	return SeinLevel__get_PartialHealthContainers(this_ptr);
});
