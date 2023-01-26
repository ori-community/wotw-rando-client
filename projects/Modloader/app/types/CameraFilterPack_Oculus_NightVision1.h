#pragma once
#include <Modloader/app/structs/CameraFilterPack_Oculus_NightVision1.h>
#include <Modloader/app/structs/CameraFilterPack_Oculus_NightVision1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Oculus_NightVision1 {
        inline app::CameraFilterPack_Oculus_NightVision1__Class** type_info() {
            static app::CameraFilterPack_Oculus_NightVision1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Oculus_NightVision1__Class**)(modloader::win::memory::resolve_rva(0x0476CB20));
            }
            return cache;
        }
        inline app::CameraFilterPack_Oculus_NightVision1__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Oculus_NightVision1__Class>(type_info(), "", "CameraFilterPack_Oculus_NightVision1");
        }
        inline app::CameraFilterPack_Oculus_NightVision1* create() {
            return il2cpp::create_object<app::CameraFilterPack_Oculus_NightVision1>(get_class());
        }
    } // namespace CameraFilterPack_Oculus_NightVision1
} // namespace app::classes::types
