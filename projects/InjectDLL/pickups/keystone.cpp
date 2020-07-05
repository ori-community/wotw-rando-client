#include <interception_macros.h>
#include <dll_main.h>
#include <pickups/pickups.h>

INTERCEPT(5818544, void, SeinPickupProcessor__OnCollectKeystonePickup, (app::SeinPickupProcessor* this_ptr, app::KeystonePickup* keystonePickup)) {
    collecting_pickup = true;
    SeinPickupProcessor__OnCollectKeystonePickup(this_ptr, keystonePickup);
    collecting_pickup = false;
    get_ui()->static_fields->SeinUI->fields.WasLastKeystoneAnEyestone = false;
}

INTERCEPT(8400400, void, SeinInventory__set_Keystones, (app::SeinInventory* this_ptr, int32_t value)) {
	if(collecting_pickup)
		return;

	SeinInventory__set_Keystones(this_ptr, value);
}
