#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerEditorConnectionEvents_ConnectionChangeEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerEditorConnectionEvents_ConnectionChangeEvent__Class** type_info;
        inline app::PlayerEditorConnectionEvents_ConnectionChangeEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerEditorConnectionEvents_ConnectionChangeEvent__Class>(type_info, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents", "ConnectionChangeEvent");
        }
        inline app::PlayerEditorConnectionEvents_ConnectionChangeEvent* create() {
            return il2cpp::create_object<app::PlayerEditorConnectionEvents_ConnectionChangeEvent>(get_class());
        }
    } // namespace PlayerEditorConnectionEvents_ConnectionChangeEvent
} // namespace app::classes::types
