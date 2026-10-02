#include <Core/api/uber_states/uber_state.h>

#include <Modloader/app/methods/PickupBase.h>
#include <Modloader/interception_macros.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>

namespace {
    auto& prevent_pickup_state = randomizer::uber_states::state<"randoConfig", "preventPickup">();

    IL2CPP_INTERCEPT(void, PickupBase, Collected, app::PickupBase * this_ptr) {
        if (prevent_pickup_state.get()) {
            return;
        }

        next::PickupBase::Collected(this_ptr);
    }
} // namespace
