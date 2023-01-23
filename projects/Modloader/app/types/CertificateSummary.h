#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CertificateSummary__Class.h>
#include <Modloader/app/structs/CertificateSummary.h>
#include <Modloader/app/structs/CertificateSummary__Array.h>

namespace app::classes::types {
    namespace CertificateSummary {
        namespace {
            inline app::CertificateSummary__Class* type_info_ref = nullptr;
        }
        inline app::CertificateSummary__Class** type_info = &type_info_ref;
        inline app::CertificateSummary__Class* get_class() {
            return il2cpp::get_class<app::CertificateSummary__Class>(type_info, "PlayFab.MultiplayerModels", "CertificateSummary");
        }
        inline app::CertificateSummary* create() {
            return il2cpp::create_object<app::CertificateSummary>(get_class());
        }
        inline app::CertificateSummary__Array* create_array(int size) {
            return il2cpp::array_new<app::CertificateSummary__Array>(get_class(), size);
        }
        inline app::CertificateSummary__Array* create_array(const std::vector<app::CertificateSummary*>& items) {
            return il2cpp::array_new<app::CertificateSummary__Array>(get_class(), items);
        }
    } // namespace CertificateSummary
} // namespace app::classes::types
