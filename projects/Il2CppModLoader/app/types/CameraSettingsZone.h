#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraSettingsZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraSettingsZone__Class** type_info;
        inline app::CameraSettingsZone__Class* get_class() {
            return il2cpp::get_class<app::CameraSettingsZone__Class>(type_info, "", "CameraSettingsZone");
        }
        inline app::CameraSettingsZone* create() {
            return il2cpp::create_object<app::CameraSettingsZone>(get_class());
        }
        inline app::CameraSettingsZone__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraSettingsZone__Array>(get_class(), size);
        }
    } // namespace CameraSettingsZone
} // namespace app::classes::types
