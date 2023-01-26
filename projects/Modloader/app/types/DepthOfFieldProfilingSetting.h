#pragma once
#include <Modloader/app/structs/DepthOfFieldProfilingSetting.h>
#include <Modloader/app/structs/DepthOfFieldProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DepthOfFieldProfilingSetting {
        inline app::DepthOfFieldProfilingSetting__Class** type_info() {
            static app::DepthOfFieldProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DepthOfFieldProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DepthOfFieldProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::DepthOfFieldProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "DepthOfFieldProfilingSetting");
        }
        inline app::DepthOfFieldProfilingSetting* create() {
            return il2cpp::create_object<app::DepthOfFieldProfilingSetting>(get_class());
        }
    } // namespace DepthOfFieldProfilingSetting
} // namespace app::classes::types
