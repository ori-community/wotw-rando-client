#pragma once
#include <Modloader/app/structs/CameraFilterPack_Distortion_Twist.h>
#include <Modloader/app/structs/CameraFilterPack_Distortion_Twist__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Distortion_Twist {
        inline app::CameraFilterPack_Distortion_Twist__Class** type_info() {
            static app::CameraFilterPack_Distortion_Twist__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_Distortion_Twist__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_Distortion_Twist__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Distortion_Twist__Class>(type_info(), "", "CameraFilterPack_Distortion_Twist");
        }
        inline app::CameraFilterPack_Distortion_Twist* create() {
            return il2cpp::create_object<app::CameraFilterPack_Distortion_Twist>(get_class());
        }
    } // namespace CameraFilterPack_Distortion_Twist
} // namespace app::classes::types
