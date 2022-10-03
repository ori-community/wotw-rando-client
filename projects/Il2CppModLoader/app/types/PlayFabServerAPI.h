#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabServerAPI {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabServerAPI__Class** type_info;
        inline app::PlayFabServerAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabServerAPI__Class>(type_info, "PlayFab", "PlayFabServerAPI");
        }
        inline app::PlayFabServerAPI* create() {
            return il2cpp::create_object<app::PlayFabServerAPI>(get_class());
        }
    } // namespace PlayFabServerAPI
} // namespace app::classes::types
