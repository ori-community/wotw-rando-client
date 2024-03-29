#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_Hexagon.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_Hexagon__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_FX_Hexagon {
        inline app::ShaderID_CameraFilterPack_FX_Hexagon__Class** type_info() {
            static app::ShaderID_CameraFilterPack_FX_Hexagon__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_FX_Hexagon__Class**)(modloader::win::memory::resolve_rva(0x04736C80));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_FX_Hexagon__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_FX_Hexagon__Class>(type_info(), "", "ShaderID_CameraFilterPack_FX_Hexagon");
        }
        inline app::ShaderID_CameraFilterPack_FX_Hexagon* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_FX_Hexagon>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_FX_Hexagon
} // namespace app::classes::types
