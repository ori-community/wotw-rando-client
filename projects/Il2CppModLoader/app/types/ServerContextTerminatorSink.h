#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerContextTerminatorSink {
        inline app::ServerContextTerminatorSink__Class** type_info = (app::ServerContextTerminatorSink__Class**)(modloader::win::memory::resolve_rva(0x04710B50));
        inline app::ServerContextTerminatorSink__Class* get_class() {
            return il2cpp::get_class<app::ServerContextTerminatorSink__Class>(type_info, "System.Runtime.Remoting.Messaging", "ServerContextTerminatorSink");
        }
        inline app::ServerContextTerminatorSink* create() {
            return il2cpp::create_object<app::ServerContextTerminatorSink>(get_class());
        }
    } // namespace ServerContextTerminatorSink
} // namespace app::classes::types
