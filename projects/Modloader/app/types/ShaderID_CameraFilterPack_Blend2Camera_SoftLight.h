#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blend2Camera_SoftLight.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blend2Camera_SoftLight__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blend2Camera_SoftLight {
        inline app::ShaderID_CameraFilterPack_Blend2Camera_SoftLight__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Blend2Camera_SoftLight__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Blend2Camera_SoftLight__Class**)(modloader::win::memory::resolve_rva(0x04746738));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_SoftLight__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blend2Camera_SoftLight__Class>(type_info(), "", "ShaderID_CameraFilterPack_Blend2Camera_SoftLight");
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_SoftLight* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blend2Camera_SoftLight>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blend2Camera_SoftLight
} // namespace app::classes::types
