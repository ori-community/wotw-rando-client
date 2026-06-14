#pragma once
#include <Modloader/app/structs/AlwaysShowDynamicTestDebugInfoProfilingSetting.h>
#include <Modloader/app/structs/AlwaysShowDynamicTestDebugInfoProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AlwaysShowDynamicTestDebugInfoProfilingSetting {
        inline app::AlwaysShowDynamicTestDebugInfoProfilingSetting__Class** type_info() {
            static app::AlwaysShowDynamicTestDebugInfoProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AlwaysShowDynamicTestDebugInfoProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AlwaysShowDynamicTestDebugInfoProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::AlwaysShowDynamicTestDebugInfoProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "AlwaysShowDynamicTestDebugInfoProfilingSetting");
        }
        inline app::AlwaysShowDynamicTestDebugInfoProfilingSetting* create() {
            return il2cpp::create_object<app::AlwaysShowDynamicTestDebugInfoProfilingSetting>(get_class());
        }
    } // namespace AlwaysShowDynamicTestDebugInfoProfilingSetting
} // namespace app::classes::types
