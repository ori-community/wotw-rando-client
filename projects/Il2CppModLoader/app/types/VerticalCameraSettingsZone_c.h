#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerticalCameraSettingsZone_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VerticalCameraSettingsZone_c__Class** type_info;
        inline app::VerticalCameraSettingsZone_c__Class* get_class() {
            return il2cpp::get_nested_class<app::VerticalCameraSettingsZone_c__Class>(type_info, "", "VerticalCameraSettingsZone", "<>c");
        }
        inline app::VerticalCameraSettingsZone_c* create() {
            return il2cpp::create_object<app::VerticalCameraSettingsZone_c>(get_class());
        }
    } // namespace VerticalCameraSettingsZone_c
} // namespace app::classes::types
