#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Color_Invert.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Color_Invert__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Color_Invert {
        inline app::ShaderID_CameraFilterPack_Color_Invert__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Color_Invert__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Color_Invert__Class**)(modloader::win::memory::resolve_rva(0x0475BEF8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Color_Invert__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Color_Invert__Class>(type_info(), "", "ShaderID_CameraFilterPack_Color_Invert");
        }
        inline app::ShaderID_CameraFilterPack_Color_Invert* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Color_Invert>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Color_Invert
} // namespace app::classes::types
