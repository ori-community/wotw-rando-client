#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache {
        inline app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache__Class** type_info = (app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache__Class**)(modloader::win::memory::resolve_rva(0x0471B370));
        inline app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache__Class* get_class() {
            return il2cpp::get_nested_class<app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache__Class>(type_info, "", "MaterialBasedResourceMap", "MaterialBasedResourceMapRuntimeCache");
        }
        inline app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache* create() {
            return il2cpp::create_object<app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache>(get_class());
        }
    } // namespace MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache
} // namespace app::classes::types
