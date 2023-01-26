#pragma once
#include <Modloader/app/structs/CatalogItemBundleInfo_1.h>
#include <Modloader/app/structs/CatalogItemBundleInfo_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CatalogItemBundleInfo_1 {
        inline app::CatalogItemBundleInfo_1__Class** type_info() {
            static app::CatalogItemBundleInfo_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CatalogItemBundleInfo_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CatalogItemBundleInfo_1__Class* get_class() {
            return il2cpp::get_class<app::CatalogItemBundleInfo_1__Class>(type_info(), "PlayFab.ServerModels", "CatalogItemBundleInfo");
        }
        inline app::CatalogItemBundleInfo_1* create() {
            return il2cpp::create_object<app::CatalogItemBundleInfo_1>(get_class());
        }
    } // namespace CatalogItemBundleInfo_1
} // namespace app::classes::types
