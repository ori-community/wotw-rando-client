#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabEvent__Class** type_info;
        inline app::PlayFabEvent__Class* get_class() {
            return il2cpp::get_class<app::PlayFabEvent__Class>(type_info, "PlayFab", "PlayFabEvent");
        }
        inline app::PlayFabEvent* create() {
            return il2cpp::create_object<app::PlayFabEvent>(get_class());
        }
    } // namespace PlayFabEvent
} // namespace app::classes::types
