#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaskErasingFixOffSlicesProfilingSetting {
        namespace {
            inline app::MaskErasingFixOffSlicesProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::MaskErasingFixOffSlicesProfilingSetting__Class** type_info = &type_info_ref;
        inline app::MaskErasingFixOffSlicesProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::MaskErasingFixOffSlicesProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "MaskErasingFixOffSlicesProfilingSetting");
        }
        inline app::MaskErasingFixOffSlicesProfilingSetting* create() {
            return il2cpp::create_object<app::MaskErasingFixOffSlicesProfilingSetting>(get_class());
        }
    } // namespace MaskErasingFixOffSlicesProfilingSetting
} // namespace app::classes::types
