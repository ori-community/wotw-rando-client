#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blend2Camera_LinearDodge.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blend2Camera_LinearDodge__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blend2Camera_LinearDodge {
        inline app::ShaderID_CameraFilterPack_Blend2Camera_LinearDodge__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Blend2Camera_LinearDodge__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Blend2Camera_LinearDodge__Class**)(modloader::win::memory::resolve_rva(0x0473CBB8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_LinearDodge__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blend2Camera_LinearDodge__Class>(type_info(), "", "ShaderID_CameraFilterPack_Blend2Camera_LinearDodge");
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_LinearDodge* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blend2Camera_LinearDodge>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blend2Camera_LinearDodge
} // namespace app::classes::types
