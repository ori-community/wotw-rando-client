#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blur_BlurHole.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blur_BlurHole__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blur_BlurHole {
        inline app::ShaderID_CameraFilterPack_Blur_BlurHole__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Blur_BlurHole__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Blur_BlurHole__Class**)(modloader::win::memory::resolve_rva(0x04727718));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Blur_BlurHole__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blur_BlurHole__Class>(type_info(), "", "ShaderID_CameraFilterPack_Blur_BlurHole");
        }
        inline app::ShaderID_CameraFilterPack_Blur_BlurHole* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blur_BlurHole>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blur_BlurHole
} // namespace app::classes::types
