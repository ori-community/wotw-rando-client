#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/app/methods/WeaponMasterPlaceholder.h>

IL2CPP_INTERCEPT(WeaponMasterPlaceholder, bool, ShouldSpawn, (app::WeaponMasterPlaceholder * this_ptr)) {
    return true;
}
