#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NoBlurAroundFocusSliceProfilingSetting {
        namespace {
            inline app::NoBlurAroundFocusSliceProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::NoBlurAroundFocusSliceProfilingSetting__Class** type_info = &type_info_ref;
        inline app::NoBlurAroundFocusSliceProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::NoBlurAroundFocusSliceProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "NoBlurAroundFocusSliceProfilingSetting");
        }
        inline app::NoBlurAroundFocusSliceProfilingSetting* create() {
            return il2cpp::create_object<app::NoBlurAroundFocusSliceProfilingSetting>(get_class());
        }
    } // namespace NoBlurAroundFocusSliceProfilingSetting
} // namespace app::classes::types
