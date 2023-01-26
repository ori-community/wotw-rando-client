#pragma once
#include <Modloader/app/structs/CenterSliceOnlyProfilingSetting.h>
#include <Modloader/app/structs/CenterSliceOnlyProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CenterSliceOnlyProfilingSetting {
        inline app::CenterSliceOnlyProfilingSetting__Class** type_info() {
            static app::CenterSliceOnlyProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CenterSliceOnlyProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CenterSliceOnlyProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::CenterSliceOnlyProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "CenterSliceOnlyProfilingSetting");
        }
        inline app::CenterSliceOnlyProfilingSetting* create() {
            return il2cpp::create_object<app::CenterSliceOnlyProfilingSetting>(get_class());
        }
    } // namespace CenterSliceOnlyProfilingSetting
} // namespace app::classes::types
