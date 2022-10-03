#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_EyesVision_2 {
        namespace {
            app::CameraFilterPack_EyesVision_2__Class* type_info_ref = nullptr;
        }
        app::CameraFilterPack_EyesVision_2__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_EyesVision_2__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_EyesVision_2__Class>(type_info, "", "CameraFilterPack_EyesVision_2");
        }
        inline app::CameraFilterPack_EyesVision_2* create() {
            return il2cpp::create_object<app::CameraFilterPack_EyesVision_2>(get_class());
        }
    } // namespace CameraFilterPack_EyesVision_2
} // namespace app::classes::types
