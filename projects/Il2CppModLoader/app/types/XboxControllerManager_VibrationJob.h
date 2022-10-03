#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxControllerManager_VibrationJob {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxControllerManager_VibrationJob__Class** type_info;
        inline app::XboxControllerManager_VibrationJob__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxControllerManager_VibrationJob__Class>(type_info, "Core.Devices", "XboxControllerManager", "VibrationJob");
        }
        inline app::XboxControllerManager_VibrationJob* create() {
            return il2cpp::create_object<app::XboxControllerManager_VibrationJob>(get_class());
        }
        inline app::XboxControllerManager_VibrationJob__Boxed* box(app::XboxControllerManager_VibrationJob value) {
            return il2cpp::box_value<app::XboxControllerManager_VibrationJob__Boxed>(get_class(), value);
        }
    } // namespace XboxControllerManager_VibrationJob
} // namespace app::classes::types
