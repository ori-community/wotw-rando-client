#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PhysicsEffectsMap {
    IL2CPP_REGISTER_METHOD(0x014FF5D0, void, PopulateRuntimeCache, (app::PhysicsEffectsMap * this_ptr, app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache * cache))
    IL2CPP_REGISTER_METHOD(0x014FF6C0, void, ctor, (app::PhysicsEffectsMap * this_ptr))
}
