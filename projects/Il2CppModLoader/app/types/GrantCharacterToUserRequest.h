#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrantCharacterToUserRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GrantCharacterToUserRequest__Class** type_info;
        inline app::GrantCharacterToUserRequest__Class* get_class() {
            return il2cpp::get_class<app::GrantCharacterToUserRequest__Class>(type_info, "PlayFab.ClientModels", "GrantCharacterToUserRequest");
        }
        inline app::GrantCharacterToUserRequest* create() {
            return il2cpp::create_object<app::GrantCharacterToUserRequest>(get_class());
        }
    } // namespace GrantCharacterToUserRequest
} // namespace app::classes::types
