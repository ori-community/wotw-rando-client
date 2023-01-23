#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Color_RGB__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Color_RGB.h>

namespace app::classes::types {
    namespace CameraFilterPack_Color_RGB {
        inline app::CameraFilterPack_Color_RGB__Class** type_info = (app::CameraFilterPack_Color_RGB__Class**)(modloader::win::memory::resolve_rva(0x0472A618));
        inline app::CameraFilterPack_Color_RGB__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Color_RGB__Class>(type_info, "", "CameraFilterPack_Color_RGB");
        }
        inline app::CameraFilterPack_Color_RGB* create() {
            return il2cpp::create_object<app::CameraFilterPack_Color_RGB>(get_class());
        }
    } // namespace CameraFilterPack_Color_RGB
} // namespace app::classes::types
