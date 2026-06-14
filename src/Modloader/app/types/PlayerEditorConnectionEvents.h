#pragma once
#include <Modloader/app/structs/PlayerEditorConnectionEvents.h>
#include <Modloader/app/structs/PlayerEditorConnectionEvents__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerEditorConnectionEvents {
        inline app::PlayerEditorConnectionEvents__Class** type_info() {
            static app::PlayerEditorConnectionEvents__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerEditorConnectionEvents__Class**)(modloader::win::memory::resolve_rva(0x04768E60));
            }
            return cache;
        }
        inline app::PlayerEditorConnectionEvents__Class* get_class() {
            return il2cpp::get_class<app::PlayerEditorConnectionEvents__Class>(type_info(), "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents");
        }
        inline app::PlayerEditorConnectionEvents* create() {
            return il2cpp::create_object<app::PlayerEditorConnectionEvents>(get_class());
        }
    } // namespace PlayerEditorConnectionEvents
} // namespace app::classes::types
