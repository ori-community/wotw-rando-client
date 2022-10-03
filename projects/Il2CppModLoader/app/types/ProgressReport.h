#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProgressReport {
        namespace {
            app::ProgressReport__Class* type_info_ref = nullptr;
        }
        app::ProgressReport__Class** type_info = &type_info_ref;
        inline app::ProgressReport__Class* get_class() {
            return il2cpp::get_class<app::ProgressReport__Class>(type_info, "Moon.ContinuousIntegration", "ProgressReport");
        }
        inline app::ProgressReport* create() {
            return il2cpp::create_object<app::ProgressReport>(get_class());
        }
    } // namespace ProgressReport
} // namespace app::classes::types
