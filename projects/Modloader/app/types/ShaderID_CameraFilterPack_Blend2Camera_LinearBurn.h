#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blend2Camera_LinearBurn.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blend2Camera_LinearBurn__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blend2Camera_LinearBurn {
        inline app::ShaderID_CameraFilterPack_Blend2Camera_LinearBurn__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Blend2Camera_LinearBurn__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Blend2Camera_LinearBurn__Class**)(modloader::win::memory::resolve_rva(0x04736FF8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_LinearBurn__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blend2Camera_LinearBurn__Class>(type_info(), "", "ShaderID_CameraFilterPack_Blend2Camera_LinearBurn");
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_LinearBurn* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blend2Camera_LinearBurn>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blend2Camera_LinearBurn
} // namespace app::classes::types
