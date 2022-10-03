#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerEditorConnectionEvents {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerEditorConnectionEvents__Class** type_info;
        inline app::PlayerEditorConnectionEvents__Class* get_class() {
            return il2cpp::get_class<app::PlayerEditorConnectionEvents__Class>(type_info, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents");
        }
        inline app::PlayerEditorConnectionEvents* create() {
            return il2cpp::create_object<app::PlayerEditorConnectionEvents>(get_class());
        }
    } // namespace PlayerEditorConnectionEvents
} // namespace app::classes::types
