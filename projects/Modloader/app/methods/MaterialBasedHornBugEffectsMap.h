#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MaterialBasedHornBugEffectsMap {
    IL2CPP_REGISTER_METHOD(0x0137F9F0, void, PopulateRuntimeCache, (app::MaterialBasedHornBugEffectsMap * this_ptr, app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache* cache))
    IL2CPP_REGISTER_METHOD(0x0137FB50, app::List_1_UnityEngine_GameObject_*, GenerateListWithAllEffectPrefabs, (app::MaterialBasedHornBugEffectsMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0137FEA0, app::SurfaceMaterialType__Enum__Array*, GenerateArrayWithConfiguredSurfaces, (app::MaterialBasedHornBugEffectsMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01380220, void, ctor, (app::MaterialBasedHornBugEffectsMap * this_ptr))
} // namespace app::classes::MaterialBasedHornBugEffectsMap
