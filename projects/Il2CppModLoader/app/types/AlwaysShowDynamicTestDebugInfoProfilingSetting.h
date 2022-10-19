#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
