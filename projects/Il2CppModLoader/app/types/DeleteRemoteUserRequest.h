#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeleteRemoteUserRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeleteRemoteUserRequest__Class** type_info;
        inline app::DeleteRemoteUserRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteRemoteUserRequest__Class>(type_info, "PlayFab.MultiplayerModels", "DeleteRemoteUserRequest");
        }
        inline app::DeleteRemoteUserRequest* create() {
            return il2cpp::create_object<app::DeleteRemoteUserRequest>(get_class());
        }
    } // namespace DeleteRemoteUserRequest
} // namespace app::classes::types
