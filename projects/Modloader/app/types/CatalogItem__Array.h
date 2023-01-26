#pragma once
#include <Modloader/app/structs/CatalogItem__Array.h>
#include <Modloader/app/structs/CatalogItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CatalogItem__Array {
        inline app::CatalogItem__Array__Class** type_info() {
            static app::CatalogItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CatalogItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CatalogItem__Array__Class* get_class() {
            return il2cpp::get_class<app::CatalogItem__Array__Class>(type_info(), "PlayFab.ClientModels", "CatalogItem[]");
        }
        inline app::CatalogItem__Array* create() {
            return il2cpp::create_object<app::CatalogItem__Array>(get_class());
        }
    } // namespace CatalogItem__Array
} // namespace app::classes::types
