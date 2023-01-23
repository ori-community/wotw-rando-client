#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerConnection__Class.h>
#include <Modloader/app/structs/PlayerConnection.h>

namespace app::classes::types {
    namespace PlayerConnection {
        inline app::PlayerConnection__Class** type_info = (app::PlayerConnection__Class**)(modloader::win::memory::resolve_rva(0x0474F698));
        inline app::PlayerConnection__Class* get_class() {
            return il2cpp::get_class<app::PlayerConnection__Class>(type_info, "UnityEngine.Networking.PlayerConnection", "PlayerConnection");
        }
        inline app::PlayerConnection* create() {
            return il2cpp::create_object<app::PlayerConnection>(get_class());
        }
    } // namespace PlayerConnection
} // namespace app::classes::types
