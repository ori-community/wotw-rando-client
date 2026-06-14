#pragma once
#include <Modloader/app/structs/MaterialBasedResourceMap.h>
#include <Modloader/app/structs/MaterialBasedResourceMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaterialBasedResourceMap {
        inline app::MaterialBasedResourceMap__Class** type_info() {
            static app::MaterialBasedResourceMap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaterialBasedResourceMap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaterialBasedResourceMap__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedResourceMap__Class>(type_info(), "", "MaterialBasedResourceMap");
        }
        inline app::MaterialBasedResourceMap* create() {
            return il2cpp::create_object<app::MaterialBasedResourceMap>(get_class());
        }
    } // namespace MaterialBasedResourceMap
} // namespace app::classes::types
