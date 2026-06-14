#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_Dot_Circle.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_Dot_Circle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_FX_Dot_Circle {
        inline app::ShaderID_CameraFilterPack_FX_Dot_Circle__Class** type_info() {
            static app::ShaderID_CameraFilterPack_FX_Dot_Circle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_FX_Dot_Circle__Class**)(modloader::win::memory::resolve_rva(0x04777CD8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_FX_Dot_Circle__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_FX_Dot_Circle__Class>(type_info(), "", "ShaderID_CameraFilterPack_FX_Dot_Circle");
        }
        inline app::ShaderID_CameraFilterPack_FX_Dot_Circle* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_FX_Dot_Circle>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_FX_Dot_Circle
} // namespace app::classes::types
