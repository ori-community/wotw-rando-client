#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Film_ColorPerfection__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Film_ColorPerfection.h>

namespace app::classes::types {
    namespace CameraFilterPack_Film_ColorPerfection {
        inline app::CameraFilterPack_Film_ColorPerfection__Class** type_info = (app::CameraFilterPack_Film_ColorPerfection__Class**)(modloader::win::memory::resolve_rva(0x0474F9A0));
        inline app::CameraFilterPack_Film_ColorPerfection__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Film_ColorPerfection__Class>(type_info, "", "CameraFilterPack_Film_ColorPerfection");
        }
        inline app::CameraFilterPack_Film_ColorPerfection* create() {
            return il2cpp::create_object<app::CameraFilterPack_Film_ColorPerfection>(get_class());
        }
    } // namespace CameraFilterPack_Film_ColorPerfection
} // namespace app::classes::types
