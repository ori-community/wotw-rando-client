#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Film_ColorPerfection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Film_ColorPerfection__Class** type_info;
        inline app::CameraFilterPack_Film_ColorPerfection__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Film_ColorPerfection__Class>(type_info, "", "CameraFilterPack_Film_ColorPerfection");
        }
        inline app::CameraFilterPack_Film_ColorPerfection* create() {
            return il2cpp::create_object<app::CameraFilterPack_Film_ColorPerfection>(get_class());
        }
    } // namespace CameraFilterPack_Film_ColorPerfection
} // namespace app::classes::types
