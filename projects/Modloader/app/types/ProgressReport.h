#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ProgressReport__Class.h>
#include <Modloader/app/structs/ProgressReport.h>

namespace app::classes::types {
    namespace ProgressReport {
        namespace {
            inline app::ProgressReport__Class* type_info_ref = nullptr;
        }
        inline app::ProgressReport__Class** type_info = &type_info_ref;
        inline app::ProgressReport__Class* get_class() {
            return il2cpp::get_class<app::ProgressReport__Class>(type_info, "Moon.ContinuousIntegration", "ProgressReport");
        }
        inline app::ProgressReport* create() {
            return il2cpp::create_object<app::ProgressReport>(get_class());
        }
    } // namespace ProgressReport
} // namespace app::classes::types
