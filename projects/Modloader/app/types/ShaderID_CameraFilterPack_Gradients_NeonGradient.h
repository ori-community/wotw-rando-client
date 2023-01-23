#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Gradients_NeonGradient__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Gradients_NeonGradient.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Gradients_NeonGradient {
        inline app::ShaderID_CameraFilterPack_Gradients_NeonGradient__Class** type_info = (app::ShaderID_CameraFilterPack_Gradients_NeonGradient__Class**)(modloader::win::memory::resolve_rva(0x04721528));
        inline app::ShaderID_CameraFilterPack_Gradients_NeonGradient__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Gradients_NeonGradient__Class>(type_info, "", "ShaderID_CameraFilterPack_Gradients_NeonGradient");
        }
        inline app::ShaderID_CameraFilterPack_Gradients_NeonGradient* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Gradients_NeonGradient>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Gradients_NeonGradient
} // namespace app::classes::types
