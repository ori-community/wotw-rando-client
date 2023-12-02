#include <Core/api/game/player.h>
#include <Randomizer/tracking/game_tracker.h>
#include <constants.h>

#include <Modloader/app/methods/WindCollision.h>
#include <Modloader/interception.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

using namespace modloader;
using namespace app::classes;

namespace {
    IL2CPP_INTERCEPT(WindCollision, void, OnTriggerEnter, (app::WindCollision * this_ptr, app::Collider* collider)) {
        ScopedSetter setter(randomizer::timing::disable_ability_tracking, true);
        auto previous_glide_state = core::api::game::player::has_ability(app::AbilityType__Enum::Glide);
        core::api::game::player::set_ability(app::AbilityType__Enum::Glide, true);
        next::WindCollision::OnTriggerEnter(this_ptr, collider);
        core::api::game::player::set_ability(app::AbilityType__Enum::Glide, previous_glide_state);
    }
} // namespace
