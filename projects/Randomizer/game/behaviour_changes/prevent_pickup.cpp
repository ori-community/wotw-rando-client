#include <constants.h>
#include <Core/uber_states/uber_state_interface.h>

#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/PickupBase.h>

namespace {
    uber_states::UberState prevent_pickup(UberStateGroup::RandoConfig, 8);
    IL2CPP_INTERCEPT(PickupBase, void, Collected, (app::PickupBase * this_ptr)) {
        if (prevent_pickup.get<bool>())
            return;

        next::PickupBase::Collected(this_ptr);
    }
} // namespace
