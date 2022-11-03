#include <constants.h>
#include <Core/api/game/player.h>

#include <Modloader/interception.h>
#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/WindCollision.h>

using namespace modloader;
using namespace app::classes;

namespace {
    IL2CPP_INTERCEPT(WindCollision, void, OnTriggerEnter, (app::WindCollision* this_ptr, app::Collider* collider)) {
        auto previous_glide_state = game::player::has_ability(app::AbilityType__Enum::Glide);
        game::player::set_ability(app::AbilityType__Enum::Glide, true);
        next::WindCollision::OnTriggerEnter(this_ptr, collider);
        game::player::set_ability(app::AbilityType__Enum::Glide, previous_glide_state);
    }
} // namespace
