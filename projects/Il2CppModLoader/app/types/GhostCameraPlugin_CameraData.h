#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostCameraPlugin_CameraData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostCameraPlugin_CameraData__Class** type_info;
        inline app::GhostCameraPlugin_CameraData__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostCameraPlugin_CameraData__Class>(type_info, "", "GhostCameraPlugin", "CameraData");
        }
        inline app::GhostCameraPlugin_CameraData* create() {
            return il2cpp::create_object<app::GhostCameraPlugin_CameraData>(get_class());
        }
    } // namespace GhostCameraPlugin_CameraData
} // namespace app::classes::types
