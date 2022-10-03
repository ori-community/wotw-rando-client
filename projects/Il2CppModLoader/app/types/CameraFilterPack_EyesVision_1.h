#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_EyesVision_1 {
        namespace {
            app::CameraFilterPack_EyesVision_1__Class* type_info_ref = nullptr;
        }
        app::CameraFilterPack_EyesVision_1__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_EyesVision_1__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_EyesVision_1__Class>(type_info, "", "CameraFilterPack_EyesVision_1");
        }
        inline app::CameraFilterPack_EyesVision_1* create() {
            return il2cpp::create_object<app::CameraFilterPack_EyesVision_1>(get_class());
        }
    } // namespace CameraFilterPack_EyesVision_1
} // namespace app::classes::types
