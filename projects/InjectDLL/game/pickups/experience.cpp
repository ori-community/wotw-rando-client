#include <Il2CppModLoader/interception_macros.h>
#include <game/pickups/pickups.h>

NESTED_STATIC_IL2CPP_INTERCEPT(Game, Orbs, OrbDisplayText, app::ExpText*, Create, (app::Transform * target, app::Vector3* offset, int32_t value)) {
    return game::pickups::should_collect_pickup() ? Orbs::OrbDisplayText::Create(target, offset, value) : nullptr;
}

IL2CPP_INTERCEPT(, SeinLevel, void, set_Experience, (app::SeinLevel * this_ptr, int32_t value)) {
    if (game::pickups::should_collect_pickup())
        SeinLevel::set_Experience(this_ptr, value);
}
