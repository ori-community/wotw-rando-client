#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WwiseEnabledProfilingSetting {
        namespace {
            inline app::WwiseEnabledProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::WwiseEnabledProfilingSetting__Class** type_info = &type_info_ref;
        inline app::WwiseEnabledProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::WwiseEnabledProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "WwiseEnabledProfilingSetting");
        }
        inline app::WwiseEnabledProfilingSetting* create() {
            return il2cpp::create_object<app::WwiseEnabledProfilingSetting>(get_class());
        }
    } // namespace WwiseEnabledProfilingSetting
} // namespace app::classes::types
