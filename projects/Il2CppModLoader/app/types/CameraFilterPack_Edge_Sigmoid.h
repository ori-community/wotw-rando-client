#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Edge_Sigmoid {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Edge_Sigmoid__Class** type_info;
        inline app::CameraFilterPack_Edge_Sigmoid__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Edge_Sigmoid__Class>(type_info, "", "CameraFilterPack_Edge_Sigmoid");
        }
        inline app::CameraFilterPack_Edge_Sigmoid* create() {
            return il2cpp::create_object<app::CameraFilterPack_Edge_Sigmoid>(get_class());
        }
    } // namespace CameraFilterPack_Edge_Sigmoid
} // namespace app::classes::types
