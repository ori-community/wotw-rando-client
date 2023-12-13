#include <Core/api/game/player.h>
#include <Randomizer/tracking/game_tracker.h>
#include <Randomizer/constants.h>

#include <Modloader/app/methods/Projectile.h>
#include <Modloader/interception.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

namespace {
    IL2CPP_INTERCEPT(Projectile, bool, HandleMirrorStrike, (app::Projectile * this_ptr, app::Damage* damage)) {
        bool ret = false;
        if (core::api::game::player::ability(app::AbilityType__Enum::Bash).get())
            ret = next::Projectile::HandleMirrorStrike(this_ptr, damage);
        else {
            modloader::ScopedSetter setter(randomizer::timing::disable_ability_tracking, true);
            core::api::game::player::ability(app::AbilityType__Enum::Bash).set(true);
            ret = next::Projectile::HandleMirrorStrike(this_ptr, damage);
            core::api::game::player::ability(app::AbilityType__Enum::Bash).set(false);
        }

        return ret;
    }
} // namespace
