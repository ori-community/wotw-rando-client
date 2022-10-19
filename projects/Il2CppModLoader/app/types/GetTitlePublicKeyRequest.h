#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetTitlePublicKeyRequest {
        inline app::GetTitlePublicKeyRequest__Class** type_info = (app::GetTitlePublicKeyRequest__Class**)(modloader::win::memory::resolve_rva(0x04737AF8));
        inline app::GetTitlePublicKeyRequest__Class* get_class() {
            return il2cpp::get_class<app::GetTitlePublicKeyRequest__Class>(type_info, "PlayFab.ClientModels", "GetTitlePublicKeyRequest");
        }
        inline app::GetTitlePublicKeyRequest* create() {
            return il2cpp::create_object<app::GetTitlePublicKeyRequest>(get_class());
        }
    } // namespace GetTitlePublicKeyRequest
} // namespace app::classes::types
