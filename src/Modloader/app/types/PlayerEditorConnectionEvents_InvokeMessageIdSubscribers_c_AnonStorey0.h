#pragma once
#include <Modloader/app/structs/PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_c_AnonStorey0.h>
#include <Modloader/app/structs/PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_c_AnonStorey0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_c_AnonStorey0 {
        inline app::PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_c_AnonStorey0__Class** type_info() {
            static app::PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_c_AnonStorey0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_c_AnonStorey0__Class**)(modloader::win::memory::resolve_rva(0x0476D658));
            }
            return cache;
        }
        inline app::PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_c_AnonStorey0__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_c_AnonStorey0__Class>(type_info(), "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents", "<InvokeMessageIdSubscribers>c__AnonStorey0");
        }
        inline app::PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_c_AnonStorey0* create() {
            return il2cpp::create_object<app::PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_c_AnonStorey0>(get_class());
        }
    } // namespace PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_c_AnonStorey0
} // namespace app::classes::types
