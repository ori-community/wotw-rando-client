#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Special_Bubble {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Special_Bubble__Class** type_info;
        inline app::CameraFilterPack_Special_Bubble__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Special_Bubble__Class>(type_info, "", "CameraFilterPack_Special_Bubble");
        }
        inline app::CameraFilterPack_Special_Bubble* create() {
            return il2cpp::create_object<app::CameraFilterPack_Special_Bubble>(get_class());
        }
    } // namespace CameraFilterPack_Special_Bubble
} // namespace app::classes::types
