#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CartPlaceholder {
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::Cart *, get_ActiveCart, (app::CartPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B3C920, void, Start, (app::CartPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B3C9B0, bool, get_CanSpawn, (app::CartPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B3CD10, app::LegacyEntity *, Instantiate, (app::CartPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCD0, void, RegisterCartSet, (app::CartPlaceholder * this_ptr, app::CartSet * cart_set))
    IL2CPP_REGISTER_METHOD(0x00B3D4E0, void, UpdateSpawnState, (app::CartPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B3D6C0, void, ctor, (app::CartPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B3D770, void, _Instantiate_b__15_0, (app::CartPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470A7B8, CartPlaceholder__Instantiate_b__15_0__MethodInfo)
}
