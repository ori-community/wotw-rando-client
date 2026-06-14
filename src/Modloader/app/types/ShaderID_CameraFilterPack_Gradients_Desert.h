#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Gradients_Desert.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Gradients_Desert__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Gradients_Desert {
        inline app::ShaderID_CameraFilterPack_Gradients_Desert__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Gradients_Desert__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Gradients_Desert__Class**)(modloader::win::memory::resolve_rva(0x0477B840));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Gradients_Desert__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Gradients_Desert__Class>(type_info(), "", "ShaderID_CameraFilterPack_Gradients_Desert");
        }
        inline app::ShaderID_CameraFilterPack_Gradients_Desert* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Gradients_Desert>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Gradients_Desert
} // namespace app::classes::types
