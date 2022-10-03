#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetCatalogItemsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetCatalogItemsResult__Class** type_info;
        inline app::GetCatalogItemsResult__Class* get_class() {
            return il2cpp::get_class<app::GetCatalogItemsResult__Class>(type_info, "PlayFab.ClientModels", "GetCatalogItemsResult");
        }
        inline app::GetCatalogItemsResult* create() {
            return il2cpp::create_object<app::GetCatalogItemsResult>(get_class());
        }
    } // namespace GetCatalogItemsResult
} // namespace app::classes::types
