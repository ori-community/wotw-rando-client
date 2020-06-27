#include <interception_macros.h>

INTERCEPT(5034576, bool, WeaponMasterPlaceholder__ShouldSpawn, (WeaponMasterPlaceholder_o* this_ptr)) {
	return true;
}