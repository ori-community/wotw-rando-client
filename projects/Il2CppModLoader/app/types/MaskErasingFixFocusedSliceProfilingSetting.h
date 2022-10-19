#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaskErasingFixFocusedSliceProfilingSetting {
        namespace {
            inline app::MaskErasingFixFocusedSliceProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::MaskErasingFixFocusedSliceProfilingSetting__Class** type_info = &type_info_ref;
        inline app::MaskErasingFixFocusedSliceProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::MaskErasingFixFocusedSliceProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "MaskErasingFixFocusedSliceProfilingSetting");
        }
        inline app::MaskErasingFixFocusedSliceProfilingSetting* create() {
            return il2cpp::create_object<app::MaskErasingFixFocusedSliceProfilingSetting>(get_class());
        }
    } // namespace MaskErasingFixFocusedSliceProfilingSetting
} // namespace app::classes::types
