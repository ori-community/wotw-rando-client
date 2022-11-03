#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Color_Chromatic_Aberration {
        inline app::CameraFilterPack_Color_Chromatic_Aberration__Class** type_info = (app::CameraFilterPack_Color_Chromatic_Aberration__Class**)(modloader::win::memory::resolve_rva(0x04758580));
        inline app::CameraFilterPack_Color_Chromatic_Aberration__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Color_Chromatic_Aberration__Class>(type_info, "", "CameraFilterPack_Color_Chromatic_Aberration");
        }
        inline app::CameraFilterPack_Color_Chromatic_Aberration* create() {
            return il2cpp::create_object<app::CameraFilterPack_Color_Chromatic_Aberration>(get_class());
        }
    } // namespace CameraFilterPack_Color_Chromatic_Aberration
} // namespace app::classes::types
