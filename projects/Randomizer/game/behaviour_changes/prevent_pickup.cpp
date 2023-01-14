#include <Core/api/uber_states/uber_state.h>
#include <constants.h>

#include <Modloader/app/methods/PickupBase.h>
#include <Modloader/interception_macros.h>

namespace {
    core::api::uber_states::UberState prevent_pickup(UberStateGroup::RandoConfig, 8);
    IL2CPP_INTERCEPT(PickupBase, void, Collected, (app::PickupBase * this_ptr)) {
        if (prevent_pickup.get<bool>())
            return;

        next::PickupBase::Collected(this_ptr);
    }
} // namespace
