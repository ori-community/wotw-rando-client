#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabException__Class** type_info;
        inline app::PlayFabException__Class* get_class() {
            return il2cpp::get_class<app::PlayFabException__Class>(type_info, "PlayFab", "PlayFabException");
        }
        inline app::PlayFabException* create() {
            return il2cpp::create_object<app::PlayFabException>(get_class());
        }
    } // namespace PlayFabException
} // namespace app::classes::types
