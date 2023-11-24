#include <Modloader/app/methods/SeinEnergy.h>
#include <Modloader/app/methods/SeinLevel.h>
#include <Modloader/interception_macros.h>

#include <Core/api/game/player.h>

using namespace modloader;

namespace {
    IL2CPP_INTERCEPT(SeinEnergy, void, set_BaseMaxEnergy, (app::SeinEnergy * this_ptr, float value)) {
        if (!core::api::game::player::prevent_default_pickup_handlers) {
            next::SeinEnergy::set_BaseMaxEnergy(this_ptr, value);
        }
    }

    IL2CPP_INTERCEPT(SeinEnergy, void, set_Current, (app::SeinEnergy * this_ptr, float value)) {
        if (!core::api::game::player::prevent_default_pickup_handlers) {
            next::SeinEnergy::set_Current(this_ptr, value);
        }
    }

    IL2CPP_INTERCEPT(SeinLevel, void, set_PartialEnergyContainers, (app::SeinLevel * this_ptr, int value)) {
        if (!core::api::game::player::prevent_default_pickup_handlers) {
            next::SeinLevel::set_PartialEnergyContainers(this_ptr, value);
        }
    }
} // namespace
