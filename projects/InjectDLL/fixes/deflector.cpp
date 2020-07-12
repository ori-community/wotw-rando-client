#include <dll_main.h>
#include <interception.h>
#include <interception_macros.h>
#include <common.h>
#include <constants.h>
#include <fixes/dash.h>

IL2CPP_INTERCEPT(, Projectile, bool, HandleMirrorStrike, (app::Projectile* this_ptr, app::Damage* damage)) {
    bool ret = false;
    auto sein = get_sein();
    if (sein != nullptr)
    {
        auto abilities = sein->fields.PlayerAbilities;
        if (PlayerAbilities_HasAbility(abilities, app::AbilityType__Enum_Bash))
            ret = Projectile_HandleMirrorStrike(this_ptr, damage);
        else
        {
            PlayerAbilities_SetAbility(abilities, app::AbilityType__Enum_Bash, true);
            ret = Projectile_HandleMirrorStrike(this_ptr, damage);
            PlayerAbilities_SetAbility(abilities, app::AbilityType__Enum_Bash, false);
        }
    }

    return ret;
}
