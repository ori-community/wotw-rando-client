#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TlsServerSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TlsServerSettings__Class** type_info;
        inline app::TlsServerSettings__Class* get_class() {
            return il2cpp::get_class<app::TlsServerSettings__Class>(type_info, "Mono.Security.Protocol.Tls", "TlsServerSettings");
        }
        inline app::TlsServerSettings* create() {
            return il2cpp::create_object<app::TlsServerSettings>(get_class());
        }
    } // namespace TlsServerSettings
} // namespace app::classes::types
