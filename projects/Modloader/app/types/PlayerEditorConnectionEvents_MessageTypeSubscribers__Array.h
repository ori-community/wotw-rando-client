#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerEditorConnectionEvents_MessageTypeSubscribers__Array__Class.h>
#include <Modloader/app/structs/PlayerEditorConnectionEvents_MessageTypeSubscribers__Array.h>

namespace app::classes::types {
    namespace PlayerEditorConnectionEvents_MessageTypeSubscribers__Array {
        namespace {
            inline app::PlayerEditorConnectionEvents_MessageTypeSubscribers__Array__Class* type_info_ref = nullptr;
        }
        inline app::PlayerEditorConnectionEvents_MessageTypeSubscribers__Array__Class** type_info = &type_info_ref;
        inline app::PlayerEditorConnectionEvents_MessageTypeSubscribers__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerEditorConnectionEvents_MessageTypeSubscribers__Array__Class>(type_info, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents+MessageTypeSubscribers[]");
        }
        inline app::PlayerEditorConnectionEvents_MessageTypeSubscribers__Array* create() {
            return il2cpp::create_object<app::PlayerEditorConnectionEvents_MessageTypeSubscribers__Array>(get_class());
        }
    } // namespace PlayerEditorConnectionEvents_MessageTypeSubscribers__Array
} // namespace app::classes::types
