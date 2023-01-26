#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PhysicsEffectsMap.h>
#include <Modloader/app/structs/MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache.h>

namespace app::classes::PhysicsEffectsMap {
    IL2CPP_REGISTER_METHOD(0x014FF5D0, void, PopulateRuntimeCache, (app::PhysicsEffectsMap * this_ptr, app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache* cache))
    IL2CPP_REGISTER_METHOD(0x014FF6C0, void, ctor, (app::PhysicsEffectsMap * this_ptr))
} // namespace app::classes::PhysicsEffectsMap
