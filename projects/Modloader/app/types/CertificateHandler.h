#pragma once
#include <Modloader/app/structs/CertificateHandler.h>
#include <Modloader/app/structs/CertificateHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CertificateHandler {
        inline app::CertificateHandler__Class** type_info() {
            static app::CertificateHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CertificateHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CertificateHandler__Class* get_class() {
            return il2cpp::get_class<app::CertificateHandler__Class>(type_info(), "UnityEngine.Networking", "CertificateHandler");
        }
        inline app::CertificateHandler* create() {
            return il2cpp::create_object<app::CertificateHandler>(get_class());
        }
    } // namespace CertificateHandler
} // namespace app::classes::types
