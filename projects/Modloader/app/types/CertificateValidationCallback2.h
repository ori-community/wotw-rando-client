#pragma once
#include <Modloader/app/structs/CertificateValidationCallback2.h>
#include <Modloader/app/structs/CertificateValidationCallback2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CertificateValidationCallback2 {
        inline app::CertificateValidationCallback2__Class** type_info() {
            static app::CertificateValidationCallback2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CertificateValidationCallback2__Class**)(modloader::win::memory::resolve_rva(0x04750970));
            }
            return cache;
        }
        inline app::CertificateValidationCallback2__Class* get_class() {
            return il2cpp::get_class<app::CertificateValidationCallback2__Class>(type_info(), "Mono.Security.Protocol.Tls", "CertificateValidationCallback2");
        }
        inline app::CertificateValidationCallback2* create() {
            return il2cpp::create_object<app::CertificateValidationCallback2>(get_class());
        }
    } // namespace CertificateValidationCallback2
} // namespace app::classes::types
