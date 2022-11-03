#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CertificateValidationCallback {
        inline app::CertificateValidationCallback__Class** type_info = (app::CertificateValidationCallback__Class**)(modloader::win::memory::resolve_rva(0x04753988));
        inline app::CertificateValidationCallback__Class* get_class() {
            return il2cpp::get_class<app::CertificateValidationCallback__Class>(type_info, "Mono.Security.Protocol.Tls", "CertificateValidationCallback");
        }
        inline app::CertificateValidationCallback* create() {
            return il2cpp::create_object<app::CertificateValidationCallback>(get_class());
        }
    } // namespace CertificateValidationCallback
} // namespace app::classes::types
