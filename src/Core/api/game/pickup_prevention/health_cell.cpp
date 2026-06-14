#include <Modloader/app/methods/SeinHealthController.h>
#include <Modloader/app/methods/SeinLevel.h>
#include <Modloader/interception_macros.h>

#include <Core/api/game/player.h>

namespace {
    IL2CPP_INTERCEPT(void, SeinHealthController, set_BaseMaxHealth, app::SeinHealthController * this_ptr, int32_t value) {
        if (!core::api::game::player::prevent_default_pickup_handlers) {
            next::SeinHealthController::set_BaseMaxHealth(this_ptr, value);
        }
    }

    IL2CPP_INTERCEPT(void, SeinHealthController, set_Amount, app::SeinHealthController * this_ptr, float value) {
        if (!core::api::game::player::prevent_default_pickup_handlers) {
            next::SeinHealthController::set_Amount(this_ptr, value);
        }
    }

    IL2CPP_INTERCEPT(void, SeinLevel, set_PartialHealthContainers, app::SeinLevel * this_ptr, int32_t value) {
        if (!core::api::game::player::prevent_default_pickup_handlers) {
            next::SeinLevel::set_PartialHealthContainers(this_ptr, value);
        }
    }
} // namespace
