#include <game/game.h>
#include <game/ui.h>
#include <pickups/pickups.h>

#include <Il2CppModLoader/interception_macros.h>

IL2CPP_INTERCEPT(, SeinPickupProcessor, void, OnCollectKeystonePickup, (app::SeinPickupProcessor* this_ptr, app::KeystonePickup* keystonePickup)) {
    collecting_pickup = true;
    SeinPickupProcessor::OnCollectKeystonePickup(this_ptr, keystonePickup);
    collecting_pickup = false;
    game::ui::get()->static_fields->SeinUI->fields.WasLastKeystoneAnEyestone = false;
}

IL2CPP_INTERCEPT(, SeinInventory, void, set_Keystones, (app::SeinInventory* this_ptr, int32_t value)) {
	if(collecting_pickup)
		return;

	SeinInventory::set_Keystones(this_ptr, value);
}
