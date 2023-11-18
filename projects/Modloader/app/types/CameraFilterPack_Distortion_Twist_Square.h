#pragma once
#include <Modloader/app/structs/CameraFilterPack_Distortion_Twist_Square.h>
#include <Modloader/app/structs/CameraFilterPack_Distortion_Twist_Square__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Distortion_Twist_Square {
        inline app::CameraFilterPack_Distortion_Twist_Square__Class** type_info() {
            static app::CameraFilterPack_Distortion_Twist_Square__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_Distortion_Twist_Square__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_Distortion_Twist_Square__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Distortion_Twist_Square__Class>(type_info(), "", "CameraFilterPack_Distortion_Twist_Square");
        }
        inline app::CameraFilterPack_Distortion_Twist_Square* create() {
            return il2cpp::create_object<app::CameraFilterPack_Distortion_Twist_Square>(get_class());
        }
    } // namespace CameraFilterPack_Distortion_Twist_Square
} // namespace app::classes::types
