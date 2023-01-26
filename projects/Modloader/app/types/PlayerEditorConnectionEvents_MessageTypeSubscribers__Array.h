#pragma once
#include <Modloader/app/structs/PlayerEditorConnectionEvents_MessageTypeSubscribers__Array.h>
#include <Modloader/app/structs/PlayerEditorConnectionEvents_MessageTypeSubscribers__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerEditorConnectionEvents_MessageTypeSubscribers__Array {
        inline app::PlayerEditorConnectionEvents_MessageTypeSubscribers__Array__Class** type_info() {
            static app::PlayerEditorConnectionEvents_MessageTypeSubscribers__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerEditorConnectionEvents_MessageTypeSubscribers__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerEditorConnectionEvents_MessageTypeSubscribers__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerEditorConnectionEvents_MessageTypeSubscribers__Array__Class>(type_info(), "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents+MessageTypeSubscribers[]");
        }
        inline app::PlayerEditorConnectionEvents_MessageTypeSubscribers__Array* create() {
            return il2cpp::create_object<app::PlayerEditorConnectionEvents_MessageTypeSubscribers__Array>(get_class());
        }
    } // namespace PlayerEditorConnectionEvents_MessageTypeSubscribers__Array
} // namespace app::classes::types
