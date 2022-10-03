#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetTitlePublicKeyRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetTitlePublicKeyRequest__Class** type_info;
        inline app::GetTitlePublicKeyRequest__Class* get_class() {
            return il2cpp::get_class<app::GetTitlePublicKeyRequest__Class>(type_info, "PlayFab.ClientModels", "GetTitlePublicKeyRequest");
        }
        inline app::GetTitlePublicKeyRequest* create() {
            return il2cpp::create_object<app::GetTitlePublicKeyRequest>(get_class());
        }
    } // namespace GetTitlePublicKeyRequest
} // namespace app::classes::types
