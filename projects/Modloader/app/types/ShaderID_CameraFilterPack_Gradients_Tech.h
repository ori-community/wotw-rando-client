#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Gradients_Tech__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Gradients_Tech.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Gradients_Tech {
        inline app::ShaderID_CameraFilterPack_Gradients_Tech__Class** type_info = (app::ShaderID_CameraFilterPack_Gradients_Tech__Class**)(modloader::win::memory::resolve_rva(0x047267F0));
        inline app::ShaderID_CameraFilterPack_Gradients_Tech__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Gradients_Tech__Class>(type_info, "", "ShaderID_CameraFilterPack_Gradients_Tech");
        }
        inline app::ShaderID_CameraFilterPack_Gradients_Tech* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Gradients_Tech>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Gradients_Tech
} // namespace app::classes::types
