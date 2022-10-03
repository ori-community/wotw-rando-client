#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache {
    IL2CPP_REGISTER_METHOD(0x01380BD0, app::List_1_MaterialBasedResourceMapEntry_*, get_Entries, (app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01380D30, app::List_1_System_Object_*, get_Defaults, (app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018F2E50, bool, TryGet, (app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache * this_ptr, app::SurfaceMaterialType__Enum type, app::Object** resource))
    IL2CPP_REGISTER_METHOD(0x018F3050, bool, TryGetDefault, (app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache * this_ptr, app::SurfaceMaterialType__Enum type, app::Object** resource))
} // namespace app::classes::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache
