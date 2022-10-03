#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Manga3 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Drawing_Manga3__Class** type_info;
        inline app::CameraFilterPack_Drawing_Manga3__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Manga3__Class>(type_info, "", "CameraFilterPack_Drawing_Manga3");
        }
        inline app::CameraFilterPack_Drawing_Manga3* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Manga3>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Manga3
} // namespace app::classes::types
