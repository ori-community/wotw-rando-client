#pragma once
#include <Modloader/app/structs/MaskErasingFixOffSlicesProfilingSetting.h>
#include <Modloader/app/structs/MaskErasingFixOffSlicesProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaskErasingFixOffSlicesProfilingSetting {
        inline app::MaskErasingFixOffSlicesProfilingSetting__Class** type_info() {
            static app::MaskErasingFixOffSlicesProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaskErasingFixOffSlicesProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaskErasingFixOffSlicesProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::MaskErasingFixOffSlicesProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "MaskErasingFixOffSlicesProfilingSetting");
        }
        inline app::MaskErasingFixOffSlicesProfilingSetting* create() {
            return il2cpp::create_object<app::MaskErasingFixOffSlicesProfilingSetting>(get_class());
        }
    } // namespace MaskErasingFixOffSlicesProfilingSetting
} // namespace app::classes::types
