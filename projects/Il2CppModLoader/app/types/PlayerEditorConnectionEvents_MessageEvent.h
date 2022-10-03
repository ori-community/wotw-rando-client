#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerEditorConnectionEvents_MessageEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerEditorConnectionEvents_MessageEvent__Class** type_info;
        inline app::PlayerEditorConnectionEvents_MessageEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerEditorConnectionEvents_MessageEvent__Class>(type_info, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents", "MessageEvent");
        }
        inline app::PlayerEditorConnectionEvents_MessageEvent* create() {
            return il2cpp::create_object<app::PlayerEditorConnectionEvents_MessageEvent>(get_class());
        }
    } // namespace PlayerEditorConnectionEvents_MessageEvent
} // namespace app::classes::types
