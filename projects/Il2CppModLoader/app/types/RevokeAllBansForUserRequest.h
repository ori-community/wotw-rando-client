#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RevokeAllBansForUserRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RevokeAllBansForUserRequest__Class** type_info;
        inline app::RevokeAllBansForUserRequest__Class* get_class() {
            return il2cpp::get_class<app::RevokeAllBansForUserRequest__Class>(type_info, "PlayFab.ServerModels", "RevokeAllBansForUserRequest");
        }
        inline app::RevokeAllBansForUserRequest* create() {
            return il2cpp::create_object<app::RevokeAllBansForUserRequest>(get_class());
        }
    } // namespace RevokeAllBansForUserRequest
} // namespace app::classes::types
