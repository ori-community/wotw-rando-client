#pragma once
#include <Modloader/app/structs/ProgressReport.h>
#include <Modloader/app/structs/ProgressReport__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProgressReport {
        inline app::ProgressReport__Class** type_info() {
            static app::ProgressReport__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProgressReport__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProgressReport__Class* get_class() {
            return il2cpp::get_class<app::ProgressReport__Class>(type_info(), "Moon.ContinuousIntegration", "ProgressReport");
        }
        inline app::ProgressReport* create() {
            return il2cpp::create_object<app::ProgressReport>(get_class());
        }
    } // namespace ProgressReport
} // namespace app::classes::types
