#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TlsClientCertificate_1 {
        inline app::TlsClientCertificate_1__Class** type_info = (app::TlsClientCertificate_1__Class**)(modloader::win::memory::resolve_rva(0x04715650));
        inline app::TlsClientCertificate_1__Class* get_class() {
            return il2cpp::get_class<app::TlsClientCertificate_1__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Client", "TlsClientCertificate");
        }
        inline app::TlsClientCertificate_1* create() {
            return il2cpp::create_object<app::TlsClientCertificate_1>(get_class());
        }
    } // namespace TlsClientCertificate_1
} // namespace app::classes::types
