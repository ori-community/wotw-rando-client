#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Color_Noise.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Color_Noise__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Color_Noise {
        inline app::ShaderID_CameraFilterPack_Color_Noise__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Color_Noise__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Color_Noise__Class**)(modloader::win::memory::resolve_rva(0x0479A2F8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Color_Noise__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Color_Noise__Class>(type_info(), "", "ShaderID_CameraFilterPack_Color_Noise");
        }
        inline app::ShaderID_CameraFilterPack_Color_Noise* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Color_Noise>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Color_Noise
} // namespace app::classes::types
