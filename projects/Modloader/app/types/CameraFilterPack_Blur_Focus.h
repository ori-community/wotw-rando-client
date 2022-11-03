#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blur_Focus {
        inline app::CameraFilterPack_Blur_Focus__Class** type_info = (app::CameraFilterPack_Blur_Focus__Class**)(modloader::win::memory::resolve_rva(0x0476DF10));
        inline app::CameraFilterPack_Blur_Focus__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blur_Focus__Class>(type_info, "", "CameraFilterPack_Blur_Focus");
        }
        inline app::CameraFilterPack_Blur_Focus* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blur_Focus>(get_class());
        }
    } // namespace CameraFilterPack_Blur_Focus
} // namespace app::classes::types
