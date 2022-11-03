#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerConnection_Unregister_c_AnonStorey1 {
        inline app::PlayerConnection_Unregister_c_AnonStorey1__Class** type_info = (app::PlayerConnection_Unregister_c_AnonStorey1__Class**)(modloader::win::memory::resolve_rva(0x0476AFD0));
        inline app::PlayerConnection_Unregister_c_AnonStorey1__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerConnection_Unregister_c_AnonStorey1__Class>(type_info, "UnityEngine.Networking.PlayerConnection", "PlayerConnection", "<Unregister>c__AnonStorey1");
        }
        inline app::PlayerConnection_Unregister_c_AnonStorey1* create() {
            return il2cpp::create_object<app::PlayerConnection_Unregister_c_AnonStorey1>(get_class());
        }
    } // namespace PlayerConnection_Unregister_c_AnonStorey1
} // namespace app::classes::types
