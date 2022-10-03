#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerContext__Class** type_info;
        inline app::ServerContext__Class* get_class() {
            return il2cpp::get_class<app::ServerContext__Class>(type_info, "Mono.Security.Protocol.Tls", "ServerContext");
        }
        inline app::ServerContext* create() {
            return il2cpp::create_object<app::ServerContext>(get_class());
        }
    } // namespace ServerContext
} // namespace app::classes::types
