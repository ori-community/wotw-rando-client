#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MessageEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MessageEventArgs__Class** type_info;
        inline app::MessageEventArgs__Class* get_class() {
            return il2cpp::get_class<app::MessageEventArgs__Class>(type_info, "UnityEngine.Networking.PlayerConnection", "MessageEventArgs");
        }
        inline app::MessageEventArgs* create() {
            return il2cpp::create_object<app::MessageEventArgs>(get_class());
        }
    } // namespace MessageEventArgs
} // namespace app::classes::types
