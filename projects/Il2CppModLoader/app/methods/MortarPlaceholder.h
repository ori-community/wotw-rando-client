#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MortarPlaceholder {
    IL2CPP_REGISTER_METHOD(0x0147DF40, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x010D6940, app::GameObject *, get_Prefab, (app::MortarPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0147DFE0, bool, get_RequiresGroundToSpawn, (app::MortarPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075F290, void, ClearPrefabLinks, (app::MortarPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsUsingVariations, (app::MortarPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0147E080, app::MortarEntity *, get_CurrentEntity, (app::MortarPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0147E140, float, get_MaxSpitRangeEx, (app::MortarPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0147E180, void, Spawn, (app::MortarPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0147E270, void, InstantiateFromPooledObj, (app::MortarPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0147E6C0, void, ctor, (app::MortarPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0147E780, void, cctor, ())
}
