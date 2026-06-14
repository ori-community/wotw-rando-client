#pragma once
#include <Modloader/app/structs/PlayerEditorConnectionEvents_MessageEvent.h>
#include <Modloader/app/structs/PlayerEditorConnectionEvents_MessageEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerEditorConnectionEvents_MessageEvent {
        inline app::PlayerEditorConnectionEvents_MessageEvent__Class** type_info() {
            static app::PlayerEditorConnectionEvents_MessageEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerEditorConnectionEvents_MessageEvent__Class**)(modloader::win::memory::resolve_rva(0x047774D0));
            }
            return cache;
        }
        inline app::PlayerEditorConnectionEvents_MessageEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerEditorConnectionEvents_MessageEvent__Class>(type_info(), "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents", "MessageEvent");
        }
        inline app::PlayerEditorConnectionEvents_MessageEvent* create() {
            return il2cpp::create_object<app::PlayerEditorConnectionEvents_MessageEvent>(get_class());
        }
    } // namespace PlayerEditorConnectionEvents_MessageEvent
} // namespace app::classes::types
