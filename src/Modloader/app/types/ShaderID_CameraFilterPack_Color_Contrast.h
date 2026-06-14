#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Color_Contrast.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Color_Contrast__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Color_Contrast {
        inline app::ShaderID_CameraFilterPack_Color_Contrast__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Color_Contrast__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Color_Contrast__Class**)(modloader::win::memory::resolve_rva(0x047885C0));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Color_Contrast__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Color_Contrast__Class>(type_info(), "", "ShaderID_CameraFilterPack_Color_Contrast");
        }
        inline app::ShaderID_CameraFilterPack_Color_Contrast* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Color_Contrast>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Color_Contrast
} // namespace app::classes::types
