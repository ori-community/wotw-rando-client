#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/WeaponMasterPlaceholder.h>

IL2CPP_INTERCEPT(bool, WeaponMasterPlaceholder, ShouldSpawn, app::WeaponMasterPlaceholder * this_ptr) {
    return true;
}
