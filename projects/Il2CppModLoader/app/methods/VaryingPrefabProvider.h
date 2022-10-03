#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::VaryingPrefabProvider {
    IL2CPP_REGISTER_METHOD(0x013BA8D0, app::GameObject*, Prefab, (app::VaryingPrefabProvider * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x013BA970, app::GameObject__Array*, GetPotentialPrefabs, (app::VaryingPrefabProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::VaryingPrefabProvider * this_ptr))
} // namespace app::classes::VaryingPrefabProvider
