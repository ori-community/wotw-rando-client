#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_NightVisionFX.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_NightVisionFX__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_NightVisionFX {
        inline app::ShaderID_CameraFilterPack_NightVisionFX__Class** type_info() {
            static app::ShaderID_CameraFilterPack_NightVisionFX__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_NightVisionFX__Class**)(modloader::win::memory::resolve_rva(0x04783520));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_NightVisionFX__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_NightVisionFX__Class>(type_info(), "", "ShaderID_CameraFilterPack_NightVisionFX");
        }
        inline app::ShaderID_CameraFilterPack_NightVisionFX* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_NightVisionFX>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_NightVisionFX
} // namespace app::classes::types
