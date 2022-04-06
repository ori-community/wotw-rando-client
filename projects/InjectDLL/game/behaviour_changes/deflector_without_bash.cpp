#include <constants.h>
#include <game/player.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception.h>
#include <Il2CppModLoader/interception_macros.h>

namespace
{
    IL2CPP_INTERCEPT(, Projectile, bool, HandleMirrorStrike, (app::Projectile* this_ptr, app::Damage* damage)) {
        bool ret = false;
        if (game::player::has_ability(app::AbilityType__Enum_Bash))
            ret = Projectile::HandleMirrorStrike(this_ptr, damage);
        else
        {
            game::player::set_ability(app::AbilityType__Enum_Bash, true);
            ret = Projectile::HandleMirrorStrike(this_ptr, damage);
            game::player::set_ability(app::AbilityType__Enum_Bash, false);
        }

        return ret;
    }
}
