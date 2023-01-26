#pragma once
#include <Modloader/app/structs/MaskErasingFixFocusedSliceProfilingSetting.h>
#include <Modloader/app/structs/MaskErasingFixFocusedSliceProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaskErasingFixFocusedSliceProfilingSetting {
        inline app::MaskErasingFixFocusedSliceProfilingSetting__Class** type_info() {
            static app::MaskErasingFixFocusedSliceProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaskErasingFixFocusedSliceProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaskErasingFixFocusedSliceProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::MaskErasingFixFocusedSliceProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "MaskErasingFixFocusedSliceProfilingSetting");
        }
        inline app::MaskErasingFixFocusedSliceProfilingSetting* create() {
            return il2cpp::create_object<app::MaskErasingFixFocusedSliceProfilingSetting>(get_class());
        }
    } // namespace MaskErasingFixFocusedSliceProfilingSetting
} // namespace app::classes::types
