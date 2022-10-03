#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraSettings_AnimateJobData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraSettings_AnimateJobData__Class** type_info;
        inline app::CameraSettings_AnimateJobData__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraSettings_AnimateJobData__Class>(type_info, "", "CameraSettings", "AnimateJobData");
        }
        inline app::CameraSettings_AnimateJobData* create() {
            return il2cpp::create_object<app::CameraSettings_AnimateJobData>(get_class());
        }
    } // namespace CameraSettings_AnimateJobData
} // namespace app::classes::types
