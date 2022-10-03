#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_WideScreenCircle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_TV_WideScreenCircle__Class** type_info;
        inline app::CameraFilterPack_TV_WideScreenCircle__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_WideScreenCircle__Class>(type_info, "", "CameraFilterPack_TV_WideScreenCircle");
        }
        inline app::CameraFilterPack_TV_WideScreenCircle* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_WideScreenCircle>(get_class());
        }
    } // namespace CameraFilterPack_TV_WideScreenCircle
} // namespace app::classes::types
