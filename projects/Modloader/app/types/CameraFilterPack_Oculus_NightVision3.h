#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Oculus_NightVision3__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Oculus_NightVision3.h>

namespace app::classes::types {
    namespace CameraFilterPack_Oculus_NightVision3 {
        inline app::CameraFilterPack_Oculus_NightVision3__Class** type_info = (app::CameraFilterPack_Oculus_NightVision3__Class**)(modloader::win::memory::resolve_rva(0x04723B38));
        inline app::CameraFilterPack_Oculus_NightVision3__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Oculus_NightVision3__Class>(type_info, "", "CameraFilterPack_Oculus_NightVision3");
        }
        inline app::CameraFilterPack_Oculus_NightVision3* create() {
            return il2cpp::create_object<app::CameraFilterPack_Oculus_NightVision3>(get_class());
        }
    } // namespace CameraFilterPack_Oculus_NightVision3
} // namespace app::classes::types
