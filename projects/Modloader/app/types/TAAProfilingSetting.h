#pragma once
#include <Modloader/app/structs/TAAProfilingSetting.h>
#include <Modloader/app/structs/TAAProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TAAProfilingSetting {
        inline app::TAAProfilingSetting__Class** type_info() {
            static app::TAAProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TAAProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TAAProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::TAAProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "TAAProfilingSetting");
        }
        inline app::TAAProfilingSetting* create() {
            return il2cpp::create_object<app::TAAProfilingSetting>(get_class());
        }
    } // namespace TAAProfilingSetting
} // namespace app::classes::types
