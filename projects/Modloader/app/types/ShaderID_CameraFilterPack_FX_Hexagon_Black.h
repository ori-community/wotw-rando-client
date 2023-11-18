#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_Hexagon_Black.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_Hexagon_Black__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_FX_Hexagon_Black {
        inline app::ShaderID_CameraFilterPack_FX_Hexagon_Black__Class** type_info() {
            static app::ShaderID_CameraFilterPack_FX_Hexagon_Black__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_FX_Hexagon_Black__Class**)(modloader::win::memory::resolve_rva(0x0478DA78));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_FX_Hexagon_Black__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_FX_Hexagon_Black__Class>(type_info(), "", "ShaderID_CameraFilterPack_FX_Hexagon_Black");
        }
        inline app::ShaderID_CameraFilterPack_FX_Hexagon_Black* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_FX_Hexagon_Black>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_FX_Hexagon_Black
} // namespace app::classes::types
