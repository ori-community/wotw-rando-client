#pragma once
#include <Modloader/app/structs/CameraFilterPack_Gradients_FireGradient.h>
#include <Modloader/app/structs/CameraFilterPack_Gradients_FireGradient__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Gradients_FireGradient {
        inline app::CameraFilterPack_Gradients_FireGradient__Class** type_info() {
            static app::CameraFilterPack_Gradients_FireGradient__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_Gradients_FireGradient__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_Gradients_FireGradient__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Gradients_FireGradient__Class>(type_info(), "", "CameraFilterPack_Gradients_FireGradient");
        }
        inline app::CameraFilterPack_Gradients_FireGradient* create() {
            return il2cpp::create_object<app::CameraFilterPack_Gradients_FireGradient>(get_class());
        }
    } // namespace CameraFilterPack_Gradients_FireGradient
} // namespace app::classes::types
