#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_Vcr {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_TV_Vcr__Class** type_info;
        inline app::CameraFilterPack_TV_Vcr__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_Vcr__Class>(type_info, "", "CameraFilterPack_TV_Vcr");
        }
        inline app::CameraFilterPack_TV_Vcr* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_Vcr>(get_class());
        }
    } // namespace CameraFilterPack_TV_Vcr
} // namespace app::classes::types
