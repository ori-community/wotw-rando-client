#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerEditorConnectionEvents_AddAndCreate_c_AnonStorey1__Class.h>
#include <Modloader/app/structs/PlayerEditorConnectionEvents_AddAndCreate_c_AnonStorey1.h>

namespace app::classes::types {
    namespace PlayerEditorConnectionEvents_AddAndCreate_c_AnonStorey1 {
        inline app::PlayerEditorConnectionEvents_AddAndCreate_c_AnonStorey1__Class** type_info = (app::PlayerEditorConnectionEvents_AddAndCreate_c_AnonStorey1__Class**)(modloader::win::memory::resolve_rva(0x04726C38));
        inline app::PlayerEditorConnectionEvents_AddAndCreate_c_AnonStorey1__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerEditorConnectionEvents_AddAndCreate_c_AnonStorey1__Class>(type_info, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents", "<AddAndCreate>c__AnonStorey1");
        }
        inline app::PlayerEditorConnectionEvents_AddAndCreate_c_AnonStorey1* create() {
            return il2cpp::create_object<app::PlayerEditorConnectionEvents_AddAndCreate_c_AnonStorey1>(get_class());
        }
    } // namespace PlayerEditorConnectionEvents_AddAndCreate_c_AnonStorey1
} // namespace app::classes::types
