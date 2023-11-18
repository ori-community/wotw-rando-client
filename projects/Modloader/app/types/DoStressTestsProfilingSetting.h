#pragma once
#include <Modloader/app/structs/DoStressTestsProfilingSetting.h>
#include <Modloader/app/structs/DoStressTestsProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DoStressTestsProfilingSetting {
        inline app::DoStressTestsProfilingSetting__Class** type_info() {
            static app::DoStressTestsProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DoStressTestsProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DoStressTestsProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::DoStressTestsProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "DoStressTestsProfilingSetting");
        }
        inline app::DoStressTestsProfilingSetting* create() {
            return il2cpp::create_object<app::DoStressTestsProfilingSetting>(get_class());
        }
    } // namespace DoStressTestsProfilingSetting
} // namespace app::classes::types
