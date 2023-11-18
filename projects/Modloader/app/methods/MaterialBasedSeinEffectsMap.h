#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MaterialBasedSeinEffectsMap.h>
#include <Modloader/app/structs/MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache.h>

namespace app::classes::MaterialBasedSeinEffectsMap {
    IL2CPP_REGISTER_METHOD(0x01380E90, void, PopulateRuntimeCache, (app::MaterialBasedSeinEffectsMap * this_ptr, app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache* cache))
    IL2CPP_REGISTER_METHOD(0x01380FB0, void, ctor, (app::MaterialBasedSeinEffectsMap * this_ptr))
} // namespace app::classes::MaterialBasedSeinEffectsMap
