#include <game/pickups/pickups.h>

#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/app/methods/SeinEnergy.h>
#include <Il2CppModLoader/app/methods/SeinLevel.h>

using namespace modloader;

namespace {
    IL2CPP_INTERCEPT(SeinEnergy, void, set_BaseMaxEnergy, (app::SeinEnergy * this_ptr, float value)) {
        if (game::pickups::should_collect_pickup())
            next::SeinEnergy::set_BaseMaxEnergy(this_ptr, value);
    }

    IL2CPP_INTERCEPT(SeinEnergy, void, set_Current, (app::SeinEnergy * this_ptr, float value)) {
        if (game::pickups::should_collect_pickup())
            next::SeinEnergy::set_Current(this_ptr, value);
    }

    IL2CPP_INTERCEPT(SeinLevel, void, set_PartialEnergyContainers, (app::SeinLevel * this_ptr, int value)) {
        if (game::pickups::should_collect_pickup())
            next::SeinLevel::set_PartialEnergyContainers(this_ptr, value);
    }

    IL2CPP_INTERCEPT(SeinLevel, int, get_PartialEnergyContainers, (app::SeinLevel * this_ptr)) {
        return game::pickups::should_collect_pickup() ? next::SeinLevel::get_PartialEnergyContainers(this_ptr) : 1;
    }
}
