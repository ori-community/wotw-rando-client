#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraTargetSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraTargetSettings__Class** type_info;
        inline app::CameraTargetSettings__Class* get_class() {
            return il2cpp::get_class<app::CameraTargetSettings__Class>(type_info, "Moon", "CameraTargetSettings");
        }
        inline app::CameraTargetSettings* create() {
            return il2cpp::create_object<app::CameraTargetSettings>(get_class());
        }
        inline app::CameraTargetSettings__Boxed* box(app::CameraTargetSettings value) {
            return il2cpp::box_value<app::CameraTargetSettings__Boxed>(get_class(), value);
        }
        inline app::CameraTargetSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraTargetSettings__Array>(get_class(), size);
        }
    } // namespace CameraTargetSettings
} // namespace app::classes::types
