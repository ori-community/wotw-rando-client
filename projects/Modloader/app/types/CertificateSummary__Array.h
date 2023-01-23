#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CertificateSummary__Array__Class.h>
#include <Modloader/app/structs/CertificateSummary__Array.h>

namespace app::classes::types {
    namespace CertificateSummary__Array {
        namespace {
            inline app::CertificateSummary__Array__Class* type_info_ref = nullptr;
        }
        inline app::CertificateSummary__Array__Class** type_info = &type_info_ref;
        inline app::CertificateSummary__Array__Class* get_class() {
            return il2cpp::get_class<app::CertificateSummary__Array__Class>(type_info, "PlayFab.MultiplayerModels", "CertificateSummary[]");
        }
        inline app::CertificateSummary__Array* create() {
            return il2cpp::create_object<app::CertificateSummary__Array>(get_class());
        }
    } // namespace CertificateSummary__Array
} // namespace app::classes::types
