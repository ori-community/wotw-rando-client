#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClientSessionCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ClientSessionCache__Class** type_info;
        inline app::ClientSessionCache__Class* get_class() {
            return il2cpp::get_class<app::ClientSessionCache__Class>(type_info, "Mono.Security.Protocol.Tls", "ClientSessionCache");
        }
        inline app::ClientSessionCache* create() {
            return il2cpp::create_object<app::ClientSessionCache>(get_class());
        }
    } // namespace ClientSessionCache
} // namespace app::classes::types
