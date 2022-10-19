#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClientContextReplySink {
        inline app::ClientContextReplySink__Class** type_info = (app::ClientContextReplySink__Class**)(modloader::win::memory::resolve_rva(0x0472C518));
        inline app::ClientContextReplySink__Class* get_class() {
            return il2cpp::get_class<app::ClientContextReplySink__Class>(type_info, "System.Runtime.Remoting.Messaging", "ClientContextReplySink");
        }
        inline app::ClientContextReplySink* create() {
            return il2cpp::create_object<app::ClientContextReplySink>(get_class());
        }
    } // namespace ClientContextReplySink
} // namespace app::classes::types
