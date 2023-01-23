#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TlsClientCertificateVerify__Class.h>
#include <Modloader/app/structs/TlsClientCertificateVerify.h>

namespace app::classes::types {
    namespace TlsClientCertificateVerify {
        inline app::TlsClientCertificateVerify__Class** type_info = (app::TlsClientCertificateVerify__Class**)(modloader::win::memory::resolve_rva(0x047315D0));
        inline app::TlsClientCertificateVerify__Class* get_class() {
            return il2cpp::get_class<app::TlsClientCertificateVerify__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Server", "TlsClientCertificateVerify");
        }
        inline app::TlsClientCertificateVerify* create() {
            return il2cpp::create_object<app::TlsClientCertificateVerify>(get_class());
        }
    } // namespace TlsClientCertificateVerify
} // namespace app::classes::types
