#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Oculus_NightVision5__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Oculus_NightVision5.h>

namespace app::classes::types {
    namespace CameraFilterPack_Oculus_NightVision5 {
        namespace {
            inline app::CameraFilterPack_Oculus_NightVision5__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Oculus_NightVision5__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Oculus_NightVision5__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Oculus_NightVision5__Class>(type_info, "", "CameraFilterPack_Oculus_NightVision5");
        }
        inline app::CameraFilterPack_Oculus_NightVision5* create() {
            return il2cpp::create_object<app::CameraFilterPack_Oculus_NightVision5>(get_class());
        }
    } // namespace CameraFilterPack_Oculus_NightVision5
} // namespace app::classes::types
