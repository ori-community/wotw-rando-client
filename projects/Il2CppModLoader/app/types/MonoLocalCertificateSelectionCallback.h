#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoLocalCertificateSelectionCallback {
        namespace {
            app::MonoLocalCertificateSelectionCallback__Class* type_info_ref = nullptr;
        }
        app::MonoLocalCertificateSelectionCallback__Class** type_info = &type_info_ref;
        inline app::MonoLocalCertificateSelectionCallback__Class* get_class() {
            return il2cpp::get_class<app::MonoLocalCertificateSelectionCallback__Class>(type_info, "Mono.Security.Interface", "MonoLocalCertificateSelectionCallback");
        }
        inline app::MonoLocalCertificateSelectionCallback* create() {
            return il2cpp::create_object<app::MonoLocalCertificateSelectionCallback>(get_class());
        }
    } // namespace MonoLocalCertificateSelectionCallback
} // namespace app::classes::types
