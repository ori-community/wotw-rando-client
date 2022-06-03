#include <game/pickups/pickups.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>

using namespace modloader;

IL2CPP_INTERCEPT(, SeinEnergy, void, set_BaseMaxEnergy, (app::SeinEnergy * this_ptr, float value)) {
    if (game::pickups::should_collect_pickup())
        SeinEnergy::set_BaseMaxEnergy(this_ptr, value);
}

IL2CPP_INTERCEPT(, SeinEnergy, void, set_Current, (app::SeinEnergy * this_ptr, float value)) {
    if (game::pickups::should_collect_pickup())
        SeinEnergy::set_Current(this_ptr, value);
}

IL2CPP_INTERCEPT(, SeinLevel, void, set_PartialEnergyContainers, (app::SeinLevel * this_ptr, int value)) {
    if (game::pickups::should_collect_pickup())
        SeinLevel::set_PartialEnergyContainers(this_ptr, value);
}

IL2CPP_INTERCEPT(, SeinLevel, int, get_PartialEnergyContainers, (app::SeinLevel * this_ptr)) {
    return game::pickups::should_collect_pickup() ? SeinLevel::get_PartialEnergyContainers(this_ptr) : 1;
}
