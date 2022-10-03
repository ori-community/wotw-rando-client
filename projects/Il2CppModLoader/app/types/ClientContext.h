#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClientContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ClientContext__Class** type_info;
        inline app::ClientContext__Class* get_class() {
            return il2cpp::get_class<app::ClientContext__Class>(type_info, "Mono.Security.Protocol.Tls", "ClientContext");
        }
        inline app::ClientContext* create() {
            return il2cpp::create_object<app::ClientContext>(get_class());
        }
    } // namespace ClientContext
} // namespace app::classes::types
