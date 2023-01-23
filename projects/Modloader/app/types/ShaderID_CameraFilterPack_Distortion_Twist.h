#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Distortion_Twist__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Distortion_Twist.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Distortion_Twist {
        inline app::ShaderID_CameraFilterPack_Distortion_Twist__Class** type_info = (app::ShaderID_CameraFilterPack_Distortion_Twist__Class**)(modloader::win::memory::resolve_rva(0x04791800));
        inline app::ShaderID_CameraFilterPack_Distortion_Twist__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Distortion_Twist__Class>(type_info, "", "ShaderID_CameraFilterPack_Distortion_Twist");
        }
        inline app::ShaderID_CameraFilterPack_Distortion_Twist* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Distortion_Twist>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Distortion_Twist
} // namespace app::classes::types
