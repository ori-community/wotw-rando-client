#pragma once
#include <Modloader/app/structs/DepthPrecullProfilingSetting.h>
#include <Modloader/app/structs/DepthPrecullProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DepthPrecullProfilingSetting {
        inline app::DepthPrecullProfilingSetting__Class** type_info() {
            static app::DepthPrecullProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DepthPrecullProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DepthPrecullProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::DepthPrecullProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "DepthPrecullProfilingSetting");
        }
        inline app::DepthPrecullProfilingSetting* create() {
            return il2cpp::create_object<app::DepthPrecullProfilingSetting>(get_class());
        }
    } // namespace DepthPrecullProfilingSetting
} // namespace app::classes::types
