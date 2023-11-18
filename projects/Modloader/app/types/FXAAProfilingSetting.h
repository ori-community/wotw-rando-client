#pragma once
#include <Modloader/app/structs/FXAAProfilingSetting.h>
#include <Modloader/app/structs/FXAAProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FXAAProfilingSetting {
        inline app::FXAAProfilingSetting__Class** type_info() {
            static app::FXAAProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FXAAProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FXAAProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::FXAAProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "FXAAProfilingSetting");
        }
        inline app::FXAAProfilingSetting* create() {
            return il2cpp::create_object<app::FXAAProfilingSetting>(get_class());
        }
    } // namespace FXAAProfilingSetting
} // namespace app::classes::types
