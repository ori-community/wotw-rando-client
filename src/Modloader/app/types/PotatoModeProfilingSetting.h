#pragma once
#include <Modloader/app/structs/PotatoModeProfilingSetting.h>
#include <Modloader/app/structs/PotatoModeProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PotatoModeProfilingSetting {
        inline app::PotatoModeProfilingSetting__Class** type_info() {
            static app::PotatoModeProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PotatoModeProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PotatoModeProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::PotatoModeProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "PotatoModeProfilingSetting");
        }
        inline app::PotatoModeProfilingSetting* create() {
            return il2cpp::create_object<app::PotatoModeProfilingSetting>(get_class());
        }
    } // namespace PotatoModeProfilingSetting
} // namespace app::classes::types
