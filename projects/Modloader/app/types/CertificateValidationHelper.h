#pragma once
#include <Modloader/app/structs/CertificateValidationHelper.h>
#include <Modloader/app/structs/CertificateValidationHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CertificateValidationHelper {
        inline app::CertificateValidationHelper__Class** type_info() {
            static app::CertificateValidationHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CertificateValidationHelper__Class**)(modloader::win::memory::resolve_rva(0x04718390));
            }
            return cache;
        }
        inline app::CertificateValidationHelper__Class* get_class() {
            return il2cpp::get_class<app::CertificateValidationHelper__Class>(type_info(), "Mono.Security.Interface", "CertificateValidationHelper");
        }
        inline app::CertificateValidationHelper* create() {
            return il2cpp::create_object<app::CertificateValidationHelper>(get_class());
        }
    } // namespace CertificateValidationHelper
} // namespace app::classes::types
