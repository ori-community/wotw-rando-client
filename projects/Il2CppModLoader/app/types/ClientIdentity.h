#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClientIdentity {
        inline app::ClientIdentity__Class** type_info = (app::ClientIdentity__Class**)(modloader::win::memory::resolve_rva(0x0475B150));
        inline app::ClientIdentity__Class* get_class() {
            return il2cpp::get_class<app::ClientIdentity__Class>(type_info, "System.Runtime.Remoting", "ClientIdentity");
        }
        inline app::ClientIdentity* create() {
            return il2cpp::create_object<app::ClientIdentity>(get_class());
        }
    } // namespace ClientIdentity
} // namespace app::classes::types
