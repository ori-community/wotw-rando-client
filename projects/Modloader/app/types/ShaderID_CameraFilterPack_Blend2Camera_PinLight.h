#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blend2Camera_PinLight__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blend2Camera_PinLight.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blend2Camera_PinLight {
        inline app::ShaderID_CameraFilterPack_Blend2Camera_PinLight__Class** type_info = (app::ShaderID_CameraFilterPack_Blend2Camera_PinLight__Class**)(modloader::win::memory::resolve_rva(0x0472BFE8));
        inline app::ShaderID_CameraFilterPack_Blend2Camera_PinLight__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blend2Camera_PinLight__Class>(type_info, "", "ShaderID_CameraFilterPack_Blend2Camera_PinLight");
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_PinLight* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blend2Camera_PinLight>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blend2Camera_PinLight
} // namespace app::classes::types
