#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetCharacterInventoryRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetCharacterInventoryRequest__Class** type_info;
        inline app::GetCharacterInventoryRequest__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterInventoryRequest__Class>(type_info, "PlayFab.ClientModels", "GetCharacterInventoryRequest");
        }
        inline app::GetCharacterInventoryRequest* create() {
            return il2cpp::create_object<app::GetCharacterInventoryRequest>(get_class());
        }
    } // namespace GetCharacterInventoryRequest
} // namespace app::classes::types
