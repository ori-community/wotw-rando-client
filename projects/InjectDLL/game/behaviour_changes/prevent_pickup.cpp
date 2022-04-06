#include <constants.h>
#include <uber_states/uber_state_manager.h>

#include <Il2CppModLoader/interception_macros.h>

namespace
{
    IL2CPP_INTERCEPT(, PickupBase, void, Collected, (app::SeinPickupProcessor* this_ptr)) {
        if (uber_states::get_uber_state_value(uber_states::constants::RANDO_CONFIG_GROUP_ID, PREVENT_PICKUP_ID) > 0.5)
            return;

        PickupBase::Collected(this_ptr);
    }
}
