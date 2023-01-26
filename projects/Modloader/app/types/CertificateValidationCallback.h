#pragma once
#include <Modloader/app/structs/CertificateValidationCallback.h>
#include <Modloader/app/structs/CertificateValidationCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CertificateValidationCallback {
        inline app::CertificateValidationCallback__Class** type_info() {
            static app::CertificateValidationCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CertificateValidationCallback__Class**)(modloader::win::memory::resolve_rva(0x04753988));
            }
            return cache;
        }
        inline app::CertificateValidationCallback__Class* get_class() {
            return il2cpp::get_class<app::CertificateValidationCallback__Class>(type_info(), "Mono.Security.Protocol.Tls", "CertificateValidationCallback");
        }
        inline app::CertificateValidationCallback* create() {
            return il2cpp::create_object<app::CertificateValidationCallback>(get_class());
        }
    } // namespace CertificateValidationCallback
} // namespace app::classes::types
