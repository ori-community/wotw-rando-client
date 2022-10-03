#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClientSessionInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ClientSessionInfo__Class** type_info;
        inline app::ClientSessionInfo__Class* get_class() {
            return il2cpp::get_class<app::ClientSessionInfo__Class>(type_info, "Mono.Security.Protocol.Tls", "ClientSessionInfo");
        }
        inline app::ClientSessionInfo* create() {
            return il2cpp::create_object<app::ClientSessionInfo>(get_class());
        }
    } // namespace ClientSessionInfo
} // namespace app::classes::types
