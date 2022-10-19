#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerEditorConnectionEvents {
        inline app::PlayerEditorConnectionEvents__Class** type_info = (app::PlayerEditorConnectionEvents__Class**)(modloader::win::memory::resolve_rva(0x04768E60));
        inline app::PlayerEditorConnectionEvents__Class* get_class() {
            return il2cpp::get_class<app::PlayerEditorConnectionEvents__Class>(type_info, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents");
        }
        inline app::PlayerEditorConnectionEvents* create() {
            return il2cpp::create_object<app::PlayerEditorConnectionEvents>(get_class());
        }
    } // namespace PlayerEditorConnectionEvents
} // namespace app::classes::types
