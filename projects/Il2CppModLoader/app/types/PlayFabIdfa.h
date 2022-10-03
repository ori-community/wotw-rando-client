#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabIdfa {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabIdfa__Class** type_info;
        inline app::PlayFabIdfa__Class* get_class() {
            return il2cpp::get_class<app::PlayFabIdfa__Class>(type_info, "PlayFab.Internal", "PlayFabIdfa");
        }
        inline app::PlayFabIdfa* create() {
            return il2cpp::create_object<app::PlayFabIdfa>(get_class());
        }
    } // namespace PlayFabIdfa
} // namespace app::classes::types
