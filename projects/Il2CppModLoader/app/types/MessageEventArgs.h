#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MessageEventArgs {
        inline app::MessageEventArgs__Class** type_info = (app::MessageEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04741470));
        inline app::MessageEventArgs__Class* get_class() {
            return il2cpp::get_class<app::MessageEventArgs__Class>(type_info, "UnityEngine.Networking.PlayerConnection", "MessageEventArgs");
        }
        inline app::MessageEventArgs* create() {
            return il2cpp::create_object<app::MessageEventArgs>(get_class());
        }
    } // namespace MessageEventArgs
} // namespace app::classes::types
