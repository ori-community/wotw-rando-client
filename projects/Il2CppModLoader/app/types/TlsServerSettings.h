#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TlsServerSettings {
        inline app::TlsServerSettings__Class** type_info = (app::TlsServerSettings__Class**)(modloader::win::memory::resolve_rva(0x0475DDD0));
        inline app::TlsServerSettings__Class* get_class() {
            return il2cpp::get_class<app::TlsServerSettings__Class>(type_info, "Mono.Security.Protocol.Tls", "TlsServerSettings");
        }
        inline app::TlsServerSettings* create() {
            return il2cpp::create_object<app::TlsServerSettings>(get_class());
        }
    } // namespace TlsServerSettings
} // namespace app::classes::types
