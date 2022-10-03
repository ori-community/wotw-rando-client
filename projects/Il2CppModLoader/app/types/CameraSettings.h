#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraSettings__Class** type_info;
        inline app::CameraSettings__Class* get_class() {
            return il2cpp::get_class<app::CameraSettings__Class>(type_info, "", "CameraSettings");
        }
        inline app::CameraSettings* create() {
            return il2cpp::create_object<app::CameraSettings>(get_class());
        }
        inline app::CameraSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraSettings__Array>(get_class(), size);
        }
    } // namespace CameraSettings
} // namespace app::classes::types
