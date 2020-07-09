#include <interception_macros.h>
#include <dll_main.h>
#include <pickups/pickups.h>

IL2CPP_INTERCEPT(, SeinPickupProcessor, void, OnCollectKeystonePickup, (app::SeinPickupProcessor* this_ptr, app::KeystonePickup* keystonePickup)) {
    collecting_pickup = true;
    SeinPickupProcessor_OnCollectKeystonePickup(this_ptr, keystonePickup);
    collecting_pickup = false;
    get_ui()->static_fields->SeinUI->fields.WasLastKeystoneAnEyestone = false;
}

IL2CPP_INTERCEPT(, SeinInventory, void, set_Keystones, (app::SeinInventory* this_ptr, int32_t value)) {
	if(collecting_pickup)
		return;

	SeinInventory_set_Keystones(this_ptr, value);
}
