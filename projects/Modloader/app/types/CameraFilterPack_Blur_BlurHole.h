#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blur_BlurHole {
        inline app::CameraFilterPack_Blur_BlurHole__Class** type_info = (app::CameraFilterPack_Blur_BlurHole__Class**)(modloader::win::memory::resolve_rva(0x0478E3D8));
        inline app::CameraFilterPack_Blur_BlurHole__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blur_BlurHole__Class>(type_info, "", "CameraFilterPack_Blur_BlurHole");
        }
        inline app::CameraFilterPack_Blur_BlurHole* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blur_BlurHole>(get_class());
        }
    } // namespace CameraFilterPack_Blur_BlurHole
} // namespace app::classes::types
