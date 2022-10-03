#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache__Class** type_info;
        inline app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache__Class* get_class() {
            return il2cpp::get_nested_class<app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache__Class>(type_info, "", "MaterialBasedResourceMap", "MaterialBasedResourceMapRuntimeCache");
        }
        inline app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache* create() {
            return il2cpp::create_object<app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache>(get_class());
        }
    } // namespace MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache
} // namespace app::classes::types
