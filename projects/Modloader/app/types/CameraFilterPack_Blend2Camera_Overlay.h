#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_Overlay {
        inline app::CameraFilterPack_Blend2Camera_Overlay__Class** type_info = (app::CameraFilterPack_Blend2Camera_Overlay__Class**)(modloader::win::memory::resolve_rva(0x0470B300));
        inline app::CameraFilterPack_Blend2Camera_Overlay__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_Overlay__Class>(type_info, "", "CameraFilterPack_Blend2Camera_Overlay");
        }
        inline app::CameraFilterPack_Blend2Camera_Overlay* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_Overlay>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_Overlay
} // namespace app::classes::types
