#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TlsClientSettings {
        inline app::TlsClientSettings__Class** type_info = (app::TlsClientSettings__Class**)(modloader::win::memory::resolve_rva(0x04715880));
        inline app::TlsClientSettings__Class* get_class() {
            return il2cpp::get_class<app::TlsClientSettings__Class>(type_info, "Mono.Security.Protocol.Tls", "TlsClientSettings");
        }
        inline app::TlsClientSettings* create() {
            return il2cpp::create_object<app::TlsClientSettings>(get_class());
        }
    } // namespace TlsClientSettings
} // namespace app::classes::types
