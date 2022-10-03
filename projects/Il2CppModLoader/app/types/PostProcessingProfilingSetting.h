#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PostProcessingProfilingSetting {
        namespace {
            app::PostProcessingProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::PostProcessingProfilingSetting__Class** type_info = &type_info_ref;
        inline app::PostProcessingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::PostProcessingProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "PostProcessingProfilingSetting");
        }
        inline app::PostProcessingProfilingSetting* create() {
            return il2cpp::create_object<app::PostProcessingProfilingSetting>(get_class());
        }
    } // namespace PostProcessingProfilingSetting
} // namespace app::classes::types
