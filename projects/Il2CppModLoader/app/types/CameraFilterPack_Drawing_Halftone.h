#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Halftone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Drawing_Halftone__Class** type_info;
        inline app::CameraFilterPack_Drawing_Halftone__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Halftone__Class>(type_info, "", "CameraFilterPack_Drawing_Halftone");
        }
        inline app::CameraFilterPack_Drawing_Halftone* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Halftone>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Halftone
} // namespace app::classes::types
