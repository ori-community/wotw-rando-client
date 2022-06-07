#include <constants.h>
#include <game/player.h>

#include <Il2CppModLoader/interception.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/app/methods/Projectile.h>

namespace {
    IL2CPP_INTERCEPT(Projectile, bool, HandleMirrorStrike, (app::Projectile * this_ptr, app::Damage * damage)) {
        bool ret = false;
        if (game::player::has_ability(app::AbilityType__Enum::Bash))
            ret = next::Projectile::HandleMirrorStrike(this_ptr, damage);
        else {
            game::player::set_ability(app::AbilityType__Enum::Bash, true);
            ret = next::Projectile::HandleMirrorStrike(this_ptr, damage);
            game::player::set_ability(app::AbilityType__Enum::Bash, false);
        }

        return ret;
    }
} // namespace
