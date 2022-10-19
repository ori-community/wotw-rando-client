#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Gradients_ElectricGradient {
        inline app::ShaderID_CameraFilterPack_Gradients_ElectricGradient__Class** type_info = (app::ShaderID_CameraFilterPack_Gradients_ElectricGradient__Class**)(modloader::win::memory::resolve_rva(0x0477CD28));
        inline app::ShaderID_CameraFilterPack_Gradients_ElectricGradient__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Gradients_ElectricGradient__Class>(type_info, "", "ShaderID_CameraFilterPack_Gradients_ElectricGradient");
        }
        inline app::ShaderID_CameraFilterPack_Gradients_ElectricGradient* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Gradients_ElectricGradient>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Gradients_ElectricGradient
} // namespace app::classes::types
