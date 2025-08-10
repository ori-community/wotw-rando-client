#include <Core/api/game/player.h>
#include <Randomizer/tracking/game_tracker.h>
#include <Randomizer/constants.h>

#include <Modloader/app/methods/WindCollision.h>
#include <Modloader/interception.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

using namespace modloader;
using namespace app::classes;

namespace {
    IL2CPP_INTERCEPT(void, WindCollision, OnTriggerEnter, app::WindCollision * this_ptr, app::Collider* collider) {
        ScopedSetter setter(randomizer::timing::disable_ability_tracking, true);
        const auto previous_glide_state = core::api::game::player::ability(app::AbilityType__Enum::Glide).get();

        core::reactivity::ScopedReactivityBlocker _;
        core::api::game::player::ability(app::AbilityType__Enum::Glide).set(true);
        next::WindCollision::OnTriggerEnter(this_ptr, collider);
        core::api::game::player::ability(app::AbilityType__Enum::Glide).set(previous_glide_state);
    }
} // namespace
