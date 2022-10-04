#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMessage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMessage__Class** type_info;
        inline app::IMessage__Class* get_class() {
            return il2cpp::get_class<app::IMessage__Class>(type_info, "System.Runtime.Remoting.Messaging", "IMessage");
        }
    } // namespace IMessage
} // namespace app::classes::types
