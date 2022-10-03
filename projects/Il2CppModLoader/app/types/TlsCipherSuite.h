#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TlsCipherSuite {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TlsCipherSuite__Class** type_info;
        inline app::TlsCipherSuite__Class* get_class() {
            return il2cpp::get_class<app::TlsCipherSuite__Class>(type_info, "Mono.Security.Protocol.Tls", "TlsCipherSuite");
        }
        inline app::TlsCipherSuite* create() {
            return il2cpp::create_object<app::TlsCipherSuite>(get_class());
        }
    } // namespace TlsCipherSuite
} // namespace app::classes::types
