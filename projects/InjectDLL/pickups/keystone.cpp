#include <interception_macros.h>
#include <dll_main.h>
#include <pickups/pickups.h>

INTERCEPT(5818544, void, SeinPickupProcessor__OnCollectKeystonePickup, (SeinPickupProcessor_o* this_ptr, KeystonePickup_o* keystonePickup), {
  collecting_pickup = true;
	SeinPickupProcessor__OnCollectKeystonePickup(this_ptr, keystonePickup);
  collecting_pickup = false;
  get_UI()->static_fields->SeinUI->WasLastKeystoneAnEyestone = false;

});

INTERCEPT(8400400, void, SeinInventory__set_Keystones, (SeinInventory_o* this_ptr, int32_t value), {
	if(collecting_pickup)
		return;
	SeinInventory__set_Keystones(this_ptr, value);
});
