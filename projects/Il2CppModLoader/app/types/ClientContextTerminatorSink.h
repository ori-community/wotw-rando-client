#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClientContextTerminatorSink {
        inline app::ClientContextTerminatorSink__Class** type_info = (app::ClientContextTerminatorSink__Class**)(modloader::win::memory::resolve_rva(0x047313F0));
        inline app::ClientContextTerminatorSink__Class* get_class() {
            return il2cpp::get_class<app::ClientContextTerminatorSink__Class>(type_info, "System.Runtime.Remoting.Messaging", "ClientContextTerminatorSink");
        }
        inline app::ClientContextTerminatorSink* create() {
            return il2cpp::create_object<app::ClientContextTerminatorSink>(get_class());
        }
    } // namespace ClientContextTerminatorSink
} // namespace app::classes::types
