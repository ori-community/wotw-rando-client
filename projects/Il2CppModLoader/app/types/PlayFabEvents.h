#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabEvents {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabEvents__Class** type_info;
        inline app::PlayFabEvents__Class* get_class() {
            return il2cpp::get_class<app::PlayFabEvents__Class>(type_info, "PlayFab.Events", "PlayFabEvents");
        }
        inline app::PlayFabEvents* create() {
            return il2cpp::create_object<app::PlayFabEvents>(get_class());
        }
    } // namespace PlayFabEvents
} // namespace app::classes::types
