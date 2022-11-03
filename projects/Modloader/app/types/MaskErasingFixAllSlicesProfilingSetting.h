#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaskErasingFixAllSlicesProfilingSetting {
        namespace {
            inline app::MaskErasingFixAllSlicesProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::MaskErasingFixAllSlicesProfilingSetting__Class** type_info = &type_info_ref;
        inline app::MaskErasingFixAllSlicesProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::MaskErasingFixAllSlicesProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "MaskErasingFixAllSlicesProfilingSetting");
        }
        inline app::MaskErasingFixAllSlicesProfilingSetting* create() {
            return il2cpp::create_object<app::MaskErasingFixAllSlicesProfilingSetting>(get_class());
        }
    } // namespace MaskErasingFixAllSlicesProfilingSetting
} // namespace app::classes::types
