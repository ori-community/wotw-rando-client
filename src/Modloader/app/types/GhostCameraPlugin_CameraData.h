#pragma once
#include <Modloader/app/structs/GhostCameraPlugin_CameraData.h>
#include <Modloader/app/structs/GhostCameraPlugin_CameraData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostCameraPlugin_CameraData {
        inline app::GhostCameraPlugin_CameraData__Class** type_info() {
            static app::GhostCameraPlugin_CameraData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostCameraPlugin_CameraData__Class**)(modloader::win::memory::resolve_rva(0x04727328));
            }
            return cache;
        }
        inline app::GhostCameraPlugin_CameraData__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostCameraPlugin_CameraData__Class>(type_info(), "", "GhostCameraPlugin", "CameraData");
        }
        inline app::GhostCameraPlugin_CameraData* create() {
            return il2cpp::create_object<app::GhostCameraPlugin_CameraData>(get_class());
        }
    } // namespace GhostCameraPlugin_CameraData
} // namespace app::classes::types
