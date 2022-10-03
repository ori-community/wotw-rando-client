#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetStoreItemsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetStoreItemsRequest__Class** type_info;
        inline app::GetStoreItemsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetStoreItemsRequest__Class>(type_info, "PlayFab.ClientModels", "GetStoreItemsRequest");
        }
        inline app::GetStoreItemsRequest* create() {
            return il2cpp::create_object<app::GetStoreItemsRequest>(get_class());
        }
    } // namespace GetStoreItemsRequest
} // namespace app::classes::types
