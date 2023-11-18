#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Gradients_Therma.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Gradients_Therma__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Gradients_Therma {
        inline app::ShaderID_CameraFilterPack_Gradients_Therma__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Gradients_Therma__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Gradients_Therma__Class**)(modloader::win::memory::resolve_rva(0x047127E8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Gradients_Therma__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Gradients_Therma__Class>(type_info(), "", "ShaderID_CameraFilterPack_Gradients_Therma");
        }
        inline app::ShaderID_CameraFilterPack_Gradients_Therma* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Gradients_Therma>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Gradients_Therma
} // namespace app::classes::types
