#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerObjectTerminatorSink {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerObjectTerminatorSink__Class** type_info;
        inline app::ServerObjectTerminatorSink__Class* get_class() {
            return il2cpp::get_class<app::ServerObjectTerminatorSink__Class>(type_info, "System.Runtime.Remoting.Messaging", "ServerObjectTerminatorSink");
        }
        inline app::ServerObjectTerminatorSink* create() {
            return il2cpp::create_object<app::ServerObjectTerminatorSink>(get_class());
        }
    } // namespace ServerObjectTerminatorSink
} // namespace app::classes::types
