#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Gradients_FireGradient.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Gradients_FireGradient__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Gradients_FireGradient {
        inline app::ShaderID_CameraFilterPack_Gradients_FireGradient__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Gradients_FireGradient__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Gradients_FireGradient__Class**)(modloader::win::memory::resolve_rva(0x0476B6C8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Gradients_FireGradient__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Gradients_FireGradient__Class>(type_info(), "", "ShaderID_CameraFilterPack_Gradients_FireGradient");
        }
        inline app::ShaderID_CameraFilterPack_Gradients_FireGradient* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Gradients_FireGradient>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Gradients_FireGradient
} // namespace app::classes::types
