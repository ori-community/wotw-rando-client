#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blend2Camera_ColorBurn.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blend2Camera_ColorBurn__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blend2Camera_ColorBurn {
        inline app::ShaderID_CameraFilterPack_Blend2Camera_ColorBurn__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Blend2Camera_ColorBurn__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Blend2Camera_ColorBurn__Class**)(modloader::win::memory::resolve_rva(0x0478D730));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_ColorBurn__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blend2Camera_ColorBurn__Class>(type_info(), "", "ShaderID_CameraFilterPack_Blend2Camera_ColorBurn");
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_ColorBurn* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blend2Camera_ColorBurn>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blend2Camera_ColorBurn
} // namespace app::classes::types
