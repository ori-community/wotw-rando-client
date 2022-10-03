#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabEventRouter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabEventRouter__Class** type_info;
        inline app::PlayFabEventRouter__Class* get_class() {
            return il2cpp::get_class<app::PlayFabEventRouter__Class>(type_info, "PlayFab", "PlayFabEventRouter");
        }
        inline app::PlayFabEventRouter* create() {
            return il2cpp::create_object<app::PlayFabEventRouter>(get_class());
        }
    } // namespace PlayFabEventRouter
} // namespace app::classes::types
