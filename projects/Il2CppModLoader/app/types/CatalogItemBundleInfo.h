#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CatalogItemBundleInfo {
        namespace {
            inline app::CatalogItemBundleInfo__Class* type_info_ref = nullptr;
        }
        inline app::CatalogItemBundleInfo__Class** type_info = &type_info_ref;
        inline app::CatalogItemBundleInfo__Class* get_class() {
            return il2cpp::get_class<app::CatalogItemBundleInfo__Class>(type_info, "PlayFab.ClientModels", "CatalogItemBundleInfo");
        }
        inline app::CatalogItemBundleInfo* create() {
            return il2cpp::create_object<app::CatalogItemBundleInfo>(get_class());
        }
    } // namespace CatalogItemBundleInfo
} // namespace app::classes::types
