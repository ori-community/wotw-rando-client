#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Oculus_NightVision5 {
        namespace {
            app::CameraFilterPack_Oculus_NightVision5__Class* type_info_ref = nullptr;
        }
        app::CameraFilterPack_Oculus_NightVision5__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Oculus_NightVision5__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Oculus_NightVision5__Class>(type_info, "", "CameraFilterPack_Oculus_NightVision5");
        }
        inline app::CameraFilterPack_Oculus_NightVision5* create() {
            return il2cpp::create_object<app::CameraFilterPack_Oculus_NightVision5>(get_class());
        }
    } // namespace CameraFilterPack_Oculus_NightVision5
} // namespace app::classes::types
