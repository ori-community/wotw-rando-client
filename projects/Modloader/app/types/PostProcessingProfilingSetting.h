#pragma once
#include <Modloader/app/structs/PostProcessingProfilingSetting.h>
#include <Modloader/app/structs/PostProcessingProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostProcessingProfilingSetting {
        inline app::PostProcessingProfilingSetting__Class** type_info() {
            static app::PostProcessingProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostProcessingProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostProcessingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::PostProcessingProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "PostProcessingProfilingSetting");
        }
        inline app::PostProcessingProfilingSetting* create() {
            return il2cpp::create_object<app::PostProcessingProfilingSetting>(get_class());
        }
    } // namespace PostProcessingProfilingSetting
} // namespace app::classes::types
