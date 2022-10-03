#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListUsersCharactersResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListUsersCharactersResult_1__Class** type_info;
        inline app::ListUsersCharactersResult_1__Class* get_class() {
            return il2cpp::get_class<app::ListUsersCharactersResult_1__Class>(type_info, "PlayFab.ServerModels", "ListUsersCharactersResult");
        }
        inline app::ListUsersCharactersResult_1* create() {
            return il2cpp::create_object<app::ListUsersCharactersResult_1>(get_class());
        }
    } // namespace ListUsersCharactersResult_1
} // namespace app::classes::types
