#include <constants.h>
#include <uber_states/uber_state_interface.h>

#include <Il2CppModLoader/interception_macros.h>

namespace {
    uber_states::UberState prevent_pickup(UberStateGroup::RandoConfig, 8);
    IL2CPP_INTERCEPT(, PickupBase, void, Collected, (app::SeinPickupProcessor * this_ptr)) {
        if (prevent_pickup.get<bool>())
            return;

        PickupBase::Collected(this_ptr);
    }
} // namespace
