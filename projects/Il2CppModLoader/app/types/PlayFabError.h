#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabError {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabError__Class** type_info;
        inline app::PlayFabError__Class* get_class() {
            return il2cpp::get_class<app::PlayFabError__Class>(type_info, "PlayFab", "PlayFabError");
        }
        inline app::PlayFabError* create() {
            return il2cpp::create_object<app::PlayFabError>(get_class());
        }
    } // namespace PlayFabError
} // namespace app::classes::types
