#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetUserInventoryRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetUserInventoryRequest__Class** type_info;
        inline app::GetUserInventoryRequest__Class* get_class() {
            return il2cpp::get_class<app::GetUserInventoryRequest__Class>(type_info, "PlayFab.ClientModels", "GetUserInventoryRequest");
        }
        inline app::GetUserInventoryRequest* create() {
            return il2cpp::create_object<app::GetUserInventoryRequest>(get_class());
        }
    } // namespace GetUserInventoryRequest
} // namespace app::classes::types
