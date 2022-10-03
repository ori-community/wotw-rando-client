#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DoStressTestsProfilingSetting {
        namespace {
            app::DoStressTestsProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::DoStressTestsProfilingSetting__Class** type_info = &type_info_ref;
        inline app::DoStressTestsProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::DoStressTestsProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "DoStressTestsProfilingSetting");
        }
        inline app::DoStressTestsProfilingSetting* create() {
            return il2cpp::create_object<app::DoStressTestsProfilingSetting>(get_class());
        }
    } // namespace DoStressTestsProfilingSetting
} // namespace app::classes::types
