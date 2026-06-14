#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blend2Camera_Exclusion.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blend2Camera_Exclusion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blend2Camera_Exclusion {
        inline app::ShaderID_CameraFilterPack_Blend2Camera_Exclusion__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Blend2Camera_Exclusion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Blend2Camera_Exclusion__Class**)(modloader::win::memory::resolve_rva(0x04725310));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_Exclusion__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blend2Camera_Exclusion__Class>(type_info(), "", "ShaderID_CameraFilterPack_Blend2Camera_Exclusion");
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_Exclusion* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blend2Camera_Exclusion>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blend2Camera_Exclusion
} // namespace app::classes::types
