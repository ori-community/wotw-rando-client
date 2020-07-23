#include <dll_main.h>
#include <constants.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception.h>
#include <Il2CppModLoader/interception_macros.h>

namespace
{
    IL2CPP_BINDING(, PlayerAbilities, bool, HasAbility, (app::PlayerAbilities* this_ptr, uint8_t ability));
    IL2CPP_BINDING(, PlayerAbilities, void, SetAbility, (app::PlayerAbilities* this_ptr, uint8_t ability, bool value));
    IL2CPP_INTERCEPT(, Projectile, bool, HandleMirrorStrike, (app::Projectile* this_ptr, app::Damage* damage)) {
        bool ret = false;
        auto sein = get_sein();
        if (sein != nullptr)
        {
            auto abilities = sein->fields.PlayerAbilities;
            if (PlayerAbilities::HasAbility(abilities, app::AbilityType__Enum_Bash))
                ret = Projectile::HandleMirrorStrike(this_ptr, damage);
            else
            {
                PlayerAbilities::SetAbility(abilities, app::AbilityType__Enum_Bash, true);
                ret = Projectile::HandleMirrorStrike(this_ptr, damage);
                PlayerAbilities::SetAbility(abilities, app::AbilityType__Enum_Bash, false);
            }
        }

        return ret;
    }
}
