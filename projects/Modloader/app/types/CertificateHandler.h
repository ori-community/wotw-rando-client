#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CertificateHandler {
        namespace {
            inline app::CertificateHandler__Class* type_info_ref = nullptr;
        }
        inline app::CertificateHandler__Class** type_info = &type_info_ref;
        inline app::CertificateHandler__Class* get_class() {
            return il2cpp::get_class<app::CertificateHandler__Class>(type_info, "UnityEngine.Networking", "CertificateHandler");
        }
        inline app::CertificateHandler* create() {
            return il2cpp::create_object<app::CertificateHandler>(get_class());
        }
    } // namespace CertificateHandler
} // namespace app::classes::types
