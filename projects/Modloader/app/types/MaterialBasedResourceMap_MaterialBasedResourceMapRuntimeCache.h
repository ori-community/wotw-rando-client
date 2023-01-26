#pragma once
#include <Modloader/app/structs/MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache.h>
#include <Modloader/app/structs/MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache {
        inline app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache__Class** type_info() {
            static app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache__Class**)(modloader::win::memory::resolve_rva(0x0471B370));
            }
            return cache;
        }
        inline app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache__Class* get_class() {
            return il2cpp::get_nested_class<app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache__Class>(type_info(), "", "MaterialBasedResourceMap", "MaterialBasedResourceMapRuntimeCache");
        }
        inline app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache* create() {
            return il2cpp::create_object<app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache>(get_class());
        }
    } // namespace MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache
} // namespace app::classes::types
