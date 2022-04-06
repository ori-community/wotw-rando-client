#include <game/game.h>
#include <game/ui.h>
#include <game/pickups/pickups.h>

#include <Il2CppModLoader/interception_macros.h>

IL2CPP_INTERCEPT(, SeinInventory, void, set_Keystones, (app::SeinInventory* this_ptr, int32_t value)) {
	if(game::pickups::should_collect_pickup())
		SeinInventory::set_Keystones(this_ptr, value);
}
