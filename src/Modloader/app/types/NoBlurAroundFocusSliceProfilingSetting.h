#pragma once
#include <Modloader/app/structs/NoBlurAroundFocusSliceProfilingSetting.h>
#include <Modloader/app/structs/NoBlurAroundFocusSliceProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NoBlurAroundFocusSliceProfilingSetting {
        inline app::NoBlurAroundFocusSliceProfilingSetting__Class** type_info() {
            static app::NoBlurAroundFocusSliceProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NoBlurAroundFocusSliceProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NoBlurAroundFocusSliceProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::NoBlurAroundFocusSliceProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "NoBlurAroundFocusSliceProfilingSetting");
        }
        inline app::NoBlurAroundFocusSliceProfilingSetting* create() {
            return il2cpp::create_object<app::NoBlurAroundFocusSliceProfilingSetting>(get_class());
        }
    } // namespace NoBlurAroundFocusSliceProfilingSetting
} // namespace app::classes::types
