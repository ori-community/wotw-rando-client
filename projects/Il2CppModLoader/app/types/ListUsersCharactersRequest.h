#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListUsersCharactersRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListUsersCharactersRequest__Class** type_info;
        inline app::ListUsersCharactersRequest__Class* get_class() {
            return il2cpp::get_class<app::ListUsersCharactersRequest__Class>(type_info, "PlayFab.ClientModels", "ListUsersCharactersRequest");
        }
        inline app::ListUsersCharactersRequest* create() {
            return il2cpp::create_object<app::ListUsersCharactersRequest>(get_class());
        }
    } // namespace ListUsersCharactersRequest
} // namespace app::classes::types
