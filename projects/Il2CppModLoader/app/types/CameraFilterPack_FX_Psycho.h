#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_Psycho {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_FX_Psycho__Class** type_info;
        inline app::CameraFilterPack_FX_Psycho__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_Psycho__Class>(type_info, "", "CameraFilterPack_FX_Psycho");
        }
        inline app::CameraFilterPack_FX_Psycho* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_Psycho>(get_class());
        }
    } // namespace CameraFilterPack_FX_Psycho
} // namespace app::classes::types
