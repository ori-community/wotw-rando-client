#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetCatalogItemsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetCatalogItemsRequest__Class** type_info;
        inline app::GetCatalogItemsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetCatalogItemsRequest__Class>(type_info, "PlayFab.ClientModels", "GetCatalogItemsRequest");
        }
        inline app::GetCatalogItemsRequest* create() {
            return il2cpp::create_object<app::GetCatalogItemsRequest>(get_class());
        }
    } // namespace GetCatalogItemsRequest
} // namespace app::classes::types
