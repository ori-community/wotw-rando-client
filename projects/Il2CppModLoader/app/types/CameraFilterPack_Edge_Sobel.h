#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Edge_Sobel {
        namespace {
            app::CameraFilterPack_Edge_Sobel__Class* type_info_ref = nullptr;
        }
        app::CameraFilterPack_Edge_Sobel__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Edge_Sobel__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Edge_Sobel__Class>(type_info, "", "CameraFilterPack_Edge_Sobel");
        }
        inline app::CameraFilterPack_Edge_Sobel* create() {
            return il2cpp::create_object<app::CameraFilterPack_Edge_Sobel>(get_class());
        }
    } // namespace CameraFilterPack_Edge_Sobel
} // namespace app::classes::types
