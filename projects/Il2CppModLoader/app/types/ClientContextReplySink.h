#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClientContextReplySink {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ClientContextReplySink__Class** type_info;
        inline app::ClientContextReplySink__Class* get_class() {
            return il2cpp::get_class<app::ClientContextReplySink__Class>(type_info, "System.Runtime.Remoting.Messaging", "ClientContextReplySink");
        }
        inline app::ClientContextReplySink* create() {
            return il2cpp::create_object<app::ClientContextReplySink>(get_class());
        }
    } // namespace ClientContextReplySink
} // namespace app::classes::types
