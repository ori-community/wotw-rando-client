#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blend2Camera_VividLight.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blend2Camera_VividLight__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blend2Camera_VividLight {
        inline app::ShaderID_CameraFilterPack_Blend2Camera_VividLight__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Blend2Camera_VividLight__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Blend2Camera_VividLight__Class**)(modloader::win::memory::resolve_rva(0x04705608));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_VividLight__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blend2Camera_VividLight__Class>(type_info(), "", "ShaderID_CameraFilterPack_Blend2Camera_VividLight");
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_VividLight* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blend2Camera_VividLight>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blend2Camera_VividLight
} // namespace app::classes::types
