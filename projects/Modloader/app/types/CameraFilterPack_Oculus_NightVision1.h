#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Oculus_NightVision1 {
        inline app::CameraFilterPack_Oculus_NightVision1__Class** type_info = (app::CameraFilterPack_Oculus_NightVision1__Class**)(modloader::win::memory::resolve_rva(0x0476CB20));
        inline app::CameraFilterPack_Oculus_NightVision1__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Oculus_NightVision1__Class>(type_info, "", "CameraFilterPack_Oculus_NightVision1");
        }
        inline app::CameraFilterPack_Oculus_NightVision1* create() {
            return il2cpp::create_object<app::CameraFilterPack_Oculus_NightVision1>(get_class());
        }
    } // namespace CameraFilterPack_Oculus_NightVision1
} // namespace app::classes::types
