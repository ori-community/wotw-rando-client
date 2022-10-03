#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClientActivatedIdentity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ClientActivatedIdentity__Class** type_info;
        inline app::ClientActivatedIdentity__Class* get_class() {
            return il2cpp::get_class<app::ClientActivatedIdentity__Class>(type_info, "System.Runtime.Remoting", "ClientActivatedIdentity");
        }
        inline app::ClientActivatedIdentity* create() {
            return il2cpp::create_object<app::ClientActivatedIdentity>(get_class());
        }
    } // namespace ClientActivatedIdentity
} // namespace app::classes::types
