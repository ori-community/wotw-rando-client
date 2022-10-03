#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClientIdentity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ClientIdentity__Class** type_info;
        inline app::ClientIdentity__Class* get_class() {
            return il2cpp::get_class<app::ClientIdentity__Class>(type_info, "System.Runtime.Remoting", "ClientIdentity");
        }
        inline app::ClientIdentity* create() {
            return il2cpp::create_object<app::ClientIdentity>(get_class());
        }
    } // namespace ClientIdentity
} // namespace app::classes::types
