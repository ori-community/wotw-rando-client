#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Gradients_Hue {
        namespace {
            app::CameraFilterPack_Gradients_Hue__Class* type_info_ref = nullptr;
        }
        app::CameraFilterPack_Gradients_Hue__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Gradients_Hue__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Gradients_Hue__Class>(type_info, "", "CameraFilterPack_Gradients_Hue");
        }
        inline app::CameraFilterPack_Gradients_Hue* create() {
            return il2cpp::create_object<app::CameraFilterPack_Gradients_Hue>(get_class());
        }
    } // namespace CameraFilterPack_Gradients_Hue
} // namespace app::classes::types
