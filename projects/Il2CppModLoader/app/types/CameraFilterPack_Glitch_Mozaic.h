#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Glitch_Mozaic {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Glitch_Mozaic__Class** type_info;
        inline app::CameraFilterPack_Glitch_Mozaic__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Glitch_Mozaic__Class>(type_info, "", "CameraFilterPack_Glitch_Mozaic");
        }
        inline app::CameraFilterPack_Glitch_Mozaic* create() {
            return il2cpp::create_object<app::CameraFilterPack_Glitch_Mozaic>(get_class());
        }
    } // namespace CameraFilterPack_Glitch_Mozaic
} // namespace app::classes::types
