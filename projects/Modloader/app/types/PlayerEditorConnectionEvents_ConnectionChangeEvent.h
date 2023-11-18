#pragma once
#include <Modloader/app/structs/PlayerEditorConnectionEvents_ConnectionChangeEvent.h>
#include <Modloader/app/structs/PlayerEditorConnectionEvents_ConnectionChangeEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerEditorConnectionEvents_ConnectionChangeEvent {
        inline app::PlayerEditorConnectionEvents_ConnectionChangeEvent__Class** type_info() {
            static app::PlayerEditorConnectionEvents_ConnectionChangeEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerEditorConnectionEvents_ConnectionChangeEvent__Class**)(modloader::win::memory::resolve_rva(0x047109C0));
            }
            return cache;
        }
        inline app::PlayerEditorConnectionEvents_ConnectionChangeEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerEditorConnectionEvents_ConnectionChangeEvent__Class>(type_info(), "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents", "ConnectionChangeEvent");
        }
        inline app::PlayerEditorConnectionEvents_ConnectionChangeEvent* create() {
            return il2cpp::create_object<app::PlayerEditorConnectionEvents_ConnectionChangeEvent>(get_class());
        }
    } // namespace PlayerEditorConnectionEvents_ConnectionChangeEvent
} // namespace app::classes::types
