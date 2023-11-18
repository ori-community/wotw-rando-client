#pragma once
#include <Modloader/app/structs/CatalogItemContainerInfo.h>
#include <Modloader/app/structs/CatalogItemContainerInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CatalogItemContainerInfo {
        inline app::CatalogItemContainerInfo__Class** type_info() {
            static app::CatalogItemContainerInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CatalogItemContainerInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CatalogItemContainerInfo__Class* get_class() {
            return il2cpp::get_class<app::CatalogItemContainerInfo__Class>(type_info(), "PlayFab.ClientModels", "CatalogItemContainerInfo");
        }
        inline app::CatalogItemContainerInfo* create() {
            return il2cpp::create_object<app::CatalogItemContainerInfo>(get_class());
        }
    } // namespace CatalogItemContainerInfo
} // namespace app::classes::types
