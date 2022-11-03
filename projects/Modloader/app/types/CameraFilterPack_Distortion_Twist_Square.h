#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Distortion_Twist_Square {
        namespace {
            inline app::CameraFilterPack_Distortion_Twist_Square__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Distortion_Twist_Square__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Distortion_Twist_Square__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Distortion_Twist_Square__Class>(type_info, "", "CameraFilterPack_Distortion_Twist_Square");
        }
        inline app::CameraFilterPack_Distortion_Twist_Square* create() {
            return il2cpp::create_object<app::CameraFilterPack_Distortion_Twist_Square>(get_class());
        }
    } // namespace CameraFilterPack_Distortion_Twist_Square
} // namespace app::classes::types
