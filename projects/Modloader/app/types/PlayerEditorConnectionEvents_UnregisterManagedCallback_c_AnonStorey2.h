#pragma once
#include <Modloader/app/structs/PlayerEditorConnectionEvents_UnregisterManagedCallback_c_AnonStorey2.h>
#include <Modloader/app/structs/PlayerEditorConnectionEvents_UnregisterManagedCallback_c_AnonStorey2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerEditorConnectionEvents_UnregisterManagedCallback_c_AnonStorey2 {
        inline app::PlayerEditorConnectionEvents_UnregisterManagedCallback_c_AnonStorey2__Class** type_info() {
            static app::PlayerEditorConnectionEvents_UnregisterManagedCallback_c_AnonStorey2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerEditorConnectionEvents_UnregisterManagedCallback_c_AnonStorey2__Class**)(modloader::win::memory::resolve_rva(0x04731D40));
            }
            return cache;
        }
        inline app::PlayerEditorConnectionEvents_UnregisterManagedCallback_c_AnonStorey2__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerEditorConnectionEvents_UnregisterManagedCallback_c_AnonStorey2__Class>(type_info(), "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents", "<UnregisterManagedCallback>c__AnonStorey2");
        }
        inline app::PlayerEditorConnectionEvents_UnregisterManagedCallback_c_AnonStorey2* create() {
            return il2cpp::create_object<app::PlayerEditorConnectionEvents_UnregisterManagedCallback_c_AnonStorey2>(get_class());
        }
    } // namespace PlayerEditorConnectionEvents_UnregisterManagedCallback_c_AnonStorey2
} // namespace app::classes::types
