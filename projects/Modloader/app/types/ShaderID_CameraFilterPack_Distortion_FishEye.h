#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Distortion_FishEye.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Distortion_FishEye__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Distortion_FishEye {
        inline app::ShaderID_CameraFilterPack_Distortion_FishEye__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Distortion_FishEye__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Distortion_FishEye__Class**)(modloader::win::memory::resolve_rva(0x0473B608));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Distortion_FishEye__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Distortion_FishEye__Class>(type_info(), "", "ShaderID_CameraFilterPack_Distortion_FishEye");
        }
        inline app::ShaderID_CameraFilterPack_Distortion_FishEye* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Distortion_FishEye>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Distortion_FishEye
} // namespace app::classes::types
