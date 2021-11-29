#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>
#include <pickups/pickups.h>
#include <uber_states/uber_state_helper.h>

namespace
{
    IL2CPP_INTERCEPT(, GameWorld, int32_t, GetCollectedIconTypeCount, (app::GameWorld* this_ptr, app::WorldMapIconType__Enum type)) {
        auto value = GameWorld::GetCollectedIconTypeCount(this_ptr, type);
        if (static_cast<int32_t>(type) == static_cast<int32_t>(app::WorldMapIconType__Enum_Ore))
            value = get_ore();

        return value;
    }

    IL2CPP_INTERCEPT(, SeinPickupProcessor, void, OnCollectOrePickup, (app::SeinPickupProcessor* this_ptr, app::OrePickup* orePickup)) {
	    collecting_pickup = true;
	    SeinPickupProcessor::OnCollectOrePickup(this_ptr, orePickup);
        collecting_pickup = false;
    }

    IL2CPP_INTERCEPT(, SeinLevel, void, set_Ore, (app::SeinLevel* this_ptr, int32_t value)) {
	    if(collecting_pickup)
		    return;

	    SeinLevel::set_Ore(this_ptr, value);
    }
}
