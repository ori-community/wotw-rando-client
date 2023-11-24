#include <Modloader/app/methods/Game/Orbs_OrbDisplayText.h>
#include <Modloader/app/methods/SeinLevel.h>
#include <Modloader/interception_macros.h>

#include <Core/api/game/player.h>

namespace {
    IL2CPP_INTERCEPT(Game::Orbs_OrbDisplayText, app::ExpText*, Create, (app::Transform * target, app::Vector3 offset, int32_t value)) {
        return !core::api::game::player::prevent_default_pickup_handlers ? next::Game::Orbs_OrbDisplayText::Create(target, offset, value) : nullptr;
    }

    IL2CPP_INTERCEPT(SeinLevel, void, set_Experience, (app::SeinLevel * this_ptr, int32_t value)) {
        if (!core::api::game::player::prevent_default_pickup_handlers) {
            next::SeinLevel::set_Experience(this_ptr, value);
        }
    }
} // namespace