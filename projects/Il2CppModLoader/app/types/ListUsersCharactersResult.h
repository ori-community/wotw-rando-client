#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListUsersCharactersResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListUsersCharactersResult__Class** type_info;
        inline app::ListUsersCharactersResult__Class* get_class() {
            return il2cpp::get_class<app::ListUsersCharactersResult__Class>(type_info, "PlayFab.ClientModels", "ListUsersCharactersResult");
        }
        inline app::ListUsersCharactersResult* create() {
            return il2cpp::create_object<app::ListUsersCharactersResult>(get_class());
        }
    } // namespace ListUsersCharactersResult
} // namespace app::classes::types
