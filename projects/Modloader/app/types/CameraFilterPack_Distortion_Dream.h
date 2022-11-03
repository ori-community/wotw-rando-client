#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Distortion_Dream {
        inline app::CameraFilterPack_Distortion_Dream__Class** type_info = (app::CameraFilterPack_Distortion_Dream__Class**)(modloader::win::memory::resolve_rva(0x047681D8));
        inline app::CameraFilterPack_Distortion_Dream__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Distortion_Dream__Class>(type_info, "", "CameraFilterPack_Distortion_Dream");
        }
        inline app::CameraFilterPack_Distortion_Dream* create() {
            return il2cpp::create_object<app::CameraFilterPack_Distortion_Dream>(get_class());
        }
    } // namespace CameraFilterPack_Distortion_Dream
} // namespace app::classes::types
