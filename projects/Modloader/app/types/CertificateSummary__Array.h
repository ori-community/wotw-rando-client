#pragma once
#include <Modloader/app/structs/CertificateSummary__Array.h>
#include <Modloader/app/structs/CertificateSummary__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CertificateSummary__Array {
        inline app::CertificateSummary__Array__Class** type_info() {
            static app::CertificateSummary__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CertificateSummary__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CertificateSummary__Array__Class* get_class() {
            return il2cpp::get_class<app::CertificateSummary__Array__Class>(type_info(), "PlayFab.MultiplayerModels", "CertificateSummary[]");
        }
        inline app::CertificateSummary__Array* create() {
            return il2cpp::create_object<app::CertificateSummary__Array>(get_class());
        }
    } // namespace CertificateSummary__Array
} // namespace app::classes::types
