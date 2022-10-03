#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_EXTRA_Rotation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_EXTRA_Rotation__Class** type_info;
        inline app::CameraFilterPack_EXTRA_Rotation__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_EXTRA_Rotation__Class>(type_info, "", "CameraFilterPack_EXTRA_Rotation");
        }
        inline app::CameraFilterPack_EXTRA_Rotation* create() {
            return il2cpp::create_object<app::CameraFilterPack_EXTRA_Rotation>(get_class());
        }
    } // namespace CameraFilterPack_EXTRA_Rotation
} // namespace app::classes::types
