#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PostProcessingProfilingSetting {
        namespace {
            inline app::PostProcessingProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::PostProcessingProfilingSetting__Class** type_info = &type_info_ref;
        inline app::PostProcessingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::PostProcessingProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "PostProcessingProfilingSetting");
        }
        inline app::PostProcessingProfilingSetting* create() {
            return il2cpp::create_object<app::PostProcessingProfilingSetting>(get_class());
        }
    } // namespace PostProcessingProfilingSetting
} // namespace app::classes::types
