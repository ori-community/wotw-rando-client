#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/WeaponMasterPlaceholder.h>

IL2CPP_INTERCEPT(WeaponMasterPlaceholder, bool, ShouldSpawn, (app::WeaponMasterPlaceholder * this_ptr)) {
    return true;
}
