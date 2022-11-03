#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Oculus_NightVision2 {
        namespace {
            inline app::CameraFilterPack_Oculus_NightVision2__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Oculus_NightVision2__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Oculus_NightVision2__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Oculus_NightVision2__Class>(type_info, "", "CameraFilterPack_Oculus_NightVision2");
        }
        inline app::CameraFilterPack_Oculus_NightVision2* create() {
            return il2cpp::create_object<app::CameraFilterPack_Oculus_NightVision2>(get_class());
        }
    } // namespace CameraFilterPack_Oculus_NightVision2
} // namespace app::classes::types
