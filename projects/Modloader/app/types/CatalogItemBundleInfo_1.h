#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CatalogItemBundleInfo_1 {
        namespace {
            inline app::CatalogItemBundleInfo_1__Class* type_info_ref = nullptr;
        }
        inline app::CatalogItemBundleInfo_1__Class** type_info = &type_info_ref;
        inline app::CatalogItemBundleInfo_1__Class* get_class() {
            return il2cpp::get_class<app::CatalogItemBundleInfo_1__Class>(type_info, "PlayFab.ServerModels", "CatalogItemBundleInfo");
        }
        inline app::CatalogItemBundleInfo_1* create() {
            return il2cpp::create_object<app::CatalogItemBundleInfo_1>(get_class());
        }
    } // namespace CatalogItemBundleInfo_1
} // namespace app::classes::types
