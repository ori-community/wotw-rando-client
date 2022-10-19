#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostCameraPlugin_CameraData {
        inline app::GhostCameraPlugin_CameraData__Class** type_info = (app::GhostCameraPlugin_CameraData__Class**)(modloader::win::memory::resolve_rva(0x04727328));
        inline app::GhostCameraPlugin_CameraData__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostCameraPlugin_CameraData__Class>(type_info, "", "GhostCameraPlugin", "CameraData");
        }
        inline app::GhostCameraPlugin_CameraData* create() {
            return il2cpp::create_object<app::GhostCameraPlugin_CameraData>(get_class());
        }
    } // namespace GhostCameraPlugin_CameraData
} // namespace app::classes::types
