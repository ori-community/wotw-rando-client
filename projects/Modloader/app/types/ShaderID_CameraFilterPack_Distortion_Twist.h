#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Distortion_Twist.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Distortion_Twist__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Distortion_Twist {
        inline app::ShaderID_CameraFilterPack_Distortion_Twist__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Distortion_Twist__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Distortion_Twist__Class**)(modloader::win::memory::resolve_rva(0x04791800));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Distortion_Twist__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Distortion_Twist__Class>(type_info(), "", "ShaderID_CameraFilterPack_Distortion_Twist");
        }
        inline app::ShaderID_CameraFilterPack_Distortion_Twist* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Distortion_Twist>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Distortion_Twist
} // namespace app::classes::types
