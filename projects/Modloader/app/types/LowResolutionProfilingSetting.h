#pragma once
#include <Modloader/app/structs/LowResolutionProfilingSetting.h>
#include <Modloader/app/structs/LowResolutionProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LowResolutionProfilingSetting {
        inline app::LowResolutionProfilingSetting__Class** type_info() {
            static app::LowResolutionProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LowResolutionProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LowResolutionProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::LowResolutionProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "LowResolutionProfilingSetting");
        }
        inline app::LowResolutionProfilingSetting* create() {
            return il2cpp::create_object<app::LowResolutionProfilingSetting>(get_class());
        }
    } // namespace LowResolutionProfilingSetting
} // namespace app::classes::types
