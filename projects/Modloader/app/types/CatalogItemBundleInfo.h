#pragma once
#include <Modloader/app/structs/CatalogItemBundleInfo.h>
#include <Modloader/app/structs/CatalogItemBundleInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CatalogItemBundleInfo {
        inline app::CatalogItemBundleInfo__Class** type_info() {
            static app::CatalogItemBundleInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CatalogItemBundleInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CatalogItemBundleInfo__Class* get_class() {
            return il2cpp::get_class<app::CatalogItemBundleInfo__Class>(type_info(), "PlayFab.ClientModels", "CatalogItemBundleInfo");
        }
        inline app::CatalogItemBundleInfo* create() {
            return il2cpp::create_object<app::CatalogItemBundleInfo>(get_class());
        }
    } // namespace CatalogItemBundleInfo
} // namespace app::classes::types
