#pragma once
#include <Modloader/app/structs/CatalogItemConsumableInfo.h>
#include <Modloader/app/structs/CatalogItemConsumableInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CatalogItemConsumableInfo {
        inline app::CatalogItemConsumableInfo__Class** type_info() {
            static app::CatalogItemConsumableInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CatalogItemConsumableInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CatalogItemConsumableInfo__Class* get_class() {
            return il2cpp::get_class<app::CatalogItemConsumableInfo__Class>(type_info(), "PlayFab.ClientModels", "CatalogItemConsumableInfo");
        }
        inline app::CatalogItemConsumableInfo* create() {
            return il2cpp::create_object<app::CatalogItemConsumableInfo>(get_class());
        }
    } // namespace CatalogItemConsumableInfo
} // namespace app::classes::types
