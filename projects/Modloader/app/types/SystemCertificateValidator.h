#pragma once
#include <Modloader/app/structs/SystemCertificateValidator.h>
#include <Modloader/app/structs/SystemCertificateValidator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SystemCertificateValidator {
        inline app::SystemCertificateValidator__Class** type_info() {
            static app::SystemCertificateValidator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SystemCertificateValidator__Class**)(modloader::win::memory::resolve_rva(0x047089B8));
            }
            return cache;
        }
        inline app::SystemCertificateValidator__Class* get_class() {
            return il2cpp::get_class<app::SystemCertificateValidator__Class>(type_info(), "Mono.Net.Security", "SystemCertificateValidator");
        }
        inline app::SystemCertificateValidator* create() {
            return il2cpp::create_object<app::SystemCertificateValidator>(get_class());
        }
    } // namespace SystemCertificateValidator
} // namespace app::classes::types
