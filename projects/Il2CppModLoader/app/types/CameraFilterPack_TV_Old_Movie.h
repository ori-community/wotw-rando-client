#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_Old_Movie {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_TV_Old_Movie__Class** type_info;
        inline app::CameraFilterPack_TV_Old_Movie__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_Old_Movie__Class>(type_info, "", "CameraFilterPack_TV_Old_Movie");
        }
        inline app::CameraFilterPack_TV_Old_Movie* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_Old_Movie>(get_class());
        }
    } // namespace CameraFilterPack_TV_Old_Movie
} // namespace app::classes::types
