#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_c_AnonStorey0 {
        inline app::PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_c_AnonStorey0__Class** type_info = (app::PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_c_AnonStorey0__Class**)(modloader::win::memory::resolve_rva(0x0476D658));
        inline app::PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_c_AnonStorey0__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_c_AnonStorey0__Class>(type_info, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents", "<InvokeMessageIdSubscribers>c__AnonStorey0");
        }
        inline app::PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_c_AnonStorey0* create() {
            return il2cpp::create_object<app::PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_c_AnonStorey0>(get_class());
        }
    } // namespace PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_c_AnonStorey0
} // namespace app::classes::types
