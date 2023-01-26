#pragma once
#include <Modloader/app/structs/MonoLocalCertificateSelectionCallback.h>
#include <Modloader/app/structs/MonoLocalCertificateSelectionCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoLocalCertificateSelectionCallback {
        inline app::MonoLocalCertificateSelectionCallback__Class** type_info() {
            static app::MonoLocalCertificateSelectionCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonoLocalCertificateSelectionCallback__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonoLocalCertificateSelectionCallback__Class* get_class() {
            return il2cpp::get_class<app::MonoLocalCertificateSelectionCallback__Class>(type_info(), "Mono.Security.Interface", "MonoLocalCertificateSelectionCallback");
        }
        inline app::MonoLocalCertificateSelectionCallback* create() {
            return il2cpp::create_object<app::MonoLocalCertificateSelectionCallback>(get_class());
        }
    } // namespace MonoLocalCertificateSelectionCallback
} // namespace app::classes::types
