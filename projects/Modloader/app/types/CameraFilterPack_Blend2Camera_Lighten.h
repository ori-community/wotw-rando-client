#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_Lighten {
        inline app::CameraFilterPack_Blend2Camera_Lighten__Class** type_info = (app::CameraFilterPack_Blend2Camera_Lighten__Class**)(modloader::win::memory::resolve_rva(0x0472BC08));
        inline app::CameraFilterPack_Blend2Camera_Lighten__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_Lighten__Class>(type_info, "", "CameraFilterPack_Blend2Camera_Lighten");
        }
        inline app::CameraFilterPack_Blend2Camera_Lighten* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_Lighten>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_Lighten
} // namespace app::classes::types
