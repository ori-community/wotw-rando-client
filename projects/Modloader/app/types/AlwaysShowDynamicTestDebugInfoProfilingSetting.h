#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AlwaysShowDynamicTestDebugInfoProfilingSetting__Class.h>
#include <Modloader/app/structs/AlwaysShowDynamicTestDebugInfoProfilingSetting.h>

namespace app::classes::types {
    namespace AlwaysShowDynamicTestDebugInfoProfilingSetting {
        namespace {
            inline app::AlwaysShowDynamicTestDebugInfoProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::AlwaysShowDynamicTestDebugInfoProfilingSetting__Class** type_info = &type_info_ref;
        inline app::AlwaysShowDynamicTestDebugInfoProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::AlwaysShowDynamicTestDebugInfoProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "AlwaysShowDynamicTestDebugInfoProfilingSetting");
        }
        inline app::AlwaysShowDynamicTestDebugInfoProfilingSetting* create() {
            return il2cpp::create_object<app::AlwaysShowDynamicTestDebugInfoProfilingSetting>(get_class());
        }
    } // namespace AlwaysShowDynamicTestDebugInfoProfilingSetting
} // namespace app::classes::types
