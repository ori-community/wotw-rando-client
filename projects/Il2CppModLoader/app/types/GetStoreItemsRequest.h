#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetStoreItemsRequest {
        inline app::GetStoreItemsRequest__Class** type_info = (app::GetStoreItemsRequest__Class**)(modloader::win::memory::resolve_rva(0x04795148));
        inline app::GetStoreItemsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetStoreItemsRequest__Class>(type_info, "PlayFab.ClientModels", "GetStoreItemsRequest");
        }
        inline app::GetStoreItemsRequest* create() {
            return il2cpp::create_object<app::GetStoreItemsRequest>(get_class());
        }
    } // namespace GetStoreItemsRequest
} // namespace app::classes::types
