#include "pch.h"
#include "../../interceptionMacros.h"

bool is_collecting_keystone = false;
INTERCEPT(6216144, void, SeinPickupProcessor__OnCollectKeystonePickup, (SeinPickupProcessor_o* this_ptr, KeystonePickup_o* keystonePickup), {
	is_collecting_keystone = true;
	SeinPickupProcessor__OnCollectKeystonePickup(this_ptr, keystonePickup);
	is_collecting_keystone = false;
});

INTERCEPT(8327680, void, SeinInventory__set_Keystones, (SeinInventory_o* this_ptr, int32_t value), {
	if(is_collecting_keystone)
		return;
	
	SeinInventory__set_Keystones(this_ptr, value);
});
