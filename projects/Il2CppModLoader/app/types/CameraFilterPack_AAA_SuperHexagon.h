#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_AAA_SuperHexagon {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_AAA_SuperHexagon__Class** type_info;
        inline app::CameraFilterPack_AAA_SuperHexagon__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_AAA_SuperHexagon__Class>(type_info, "", "CameraFilterPack_AAA_SuperHexagon");
        }
        inline app::CameraFilterPack_AAA_SuperHexagon* create() {
            return il2cpp::create_object<app::CameraFilterPack_AAA_SuperHexagon>(get_class());
        }
    } // namespace CameraFilterPack_AAA_SuperHexagon
} // namespace app::classes::types
