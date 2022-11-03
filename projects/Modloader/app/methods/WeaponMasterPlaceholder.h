#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::WeaponMasterPlaceholder {
    IL2CPP_REGISTER_METHOD(0x0056FAD0, app::ICondition*, get_ResolvedCondition, (app::WeaponMasterPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0056FB80, void, Spawn, (app::WeaponMasterPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0056FBB0, void, InstantiateFromPooledObj, (app::WeaponMasterPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0056FCD0, bool, ShouldSpawn, (app::WeaponMasterPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004181F0, void, ctor, (app::WeaponMasterPlaceholder * this_ptr))
} // namespace app::classes::WeaponMasterPlaceholder
