#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MaterialBasedLizardEffectsMap.h>
#include <Modloader/app/structs/MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache.h>

namespace app::classes::MaterialBasedLizardEffectsMap {
    IL2CPP_REGISTER_METHOD(0x013805D0, void, PopulateRuntimeCache, (app::MaterialBasedLizardEffectsMap * this_ptr, app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache* cache))
    IL2CPP_REGISTER_METHOD(0x01380730, void, ctor, (app::MaterialBasedLizardEffectsMap * this_ptr))
} // namespace app::classes::MaterialBasedLizardEffectsMap
