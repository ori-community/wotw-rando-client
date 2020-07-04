#include <interception_macros.h>

INTERCEPT(5034576, bool, WeaponMasterPlaceholder__ShouldSpawn, (app::WeaponMasterPlaceholder* this_ptr)) {
	return true;
}