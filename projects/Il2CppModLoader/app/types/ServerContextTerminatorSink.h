#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerContextTerminatorSink {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerContextTerminatorSink__Class** type_info;
        inline app::ServerContextTerminatorSink__Class* get_class() {
            return il2cpp::get_class<app::ServerContextTerminatorSink__Class>(type_info, "System.Runtime.Remoting.Messaging", "ServerContextTerminatorSink");
        }
        inline app::ServerContextTerminatorSink* create() {
            return il2cpp::create_object<app::ServerContextTerminatorSink>(get_class());
        }
    } // namespace ServerContextTerminatorSink
} // namespace app::classes::types
