#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMessageSink {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMessageSink__Class** type_info;
        inline app::IMessageSink__Class* get_class() {
            return il2cpp::get_class<app::IMessageSink__Class>(type_info, "System.Runtime.Remoting.Messaging", "IMessageSink");
        }
    } // namespace IMessageSink
} // namespace app::classes::types
