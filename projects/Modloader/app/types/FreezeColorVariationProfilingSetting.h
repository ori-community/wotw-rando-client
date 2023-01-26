#pragma once
#include <Modloader/app/structs/FreezeColorVariationProfilingSetting.h>
#include <Modloader/app/structs/FreezeColorVariationProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FreezeColorVariationProfilingSetting {
        inline app::FreezeColorVariationProfilingSetting__Class** type_info() {
            static app::FreezeColorVariationProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FreezeColorVariationProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FreezeColorVariationProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::FreezeColorVariationProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "FreezeColorVariationProfilingSetting");
        }
        inline app::FreezeColorVariationProfilingSetting* create() {
            return il2cpp::create_object<app::FreezeColorVariationProfilingSetting>(get_class());
        }
    } // namespace FreezeColorVariationProfilingSetting
} // namespace app::classes::types
