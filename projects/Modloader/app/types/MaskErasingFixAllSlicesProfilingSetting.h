#pragma once
#include <Modloader/app/structs/MaskErasingFixAllSlicesProfilingSetting.h>
#include <Modloader/app/structs/MaskErasingFixAllSlicesProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaskErasingFixAllSlicesProfilingSetting {
        inline app::MaskErasingFixAllSlicesProfilingSetting__Class** type_info() {
            static app::MaskErasingFixAllSlicesProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaskErasingFixAllSlicesProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaskErasingFixAllSlicesProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::MaskErasingFixAllSlicesProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "MaskErasingFixAllSlicesProfilingSetting");
        }
        inline app::MaskErasingFixAllSlicesProfilingSetting* create() {
            return il2cpp::create_object<app::MaskErasingFixAllSlicesProfilingSetting>(get_class());
        }
    } // namespace MaskErasingFixAllSlicesProfilingSetting
} // namespace app::classes::types
