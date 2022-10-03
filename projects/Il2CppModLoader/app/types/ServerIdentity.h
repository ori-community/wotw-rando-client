#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerIdentity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerIdentity__Class** type_info;
        inline app::ServerIdentity__Class* get_class() {
            return il2cpp::get_class<app::ServerIdentity__Class>(type_info, "System.Runtime.Remoting", "ServerIdentity");
        }
        inline app::ServerIdentity* create() {
            return il2cpp::create_object<app::ServerIdentity>(get_class());
        }
    } // namespace ServerIdentity
} // namespace app::classes::types
