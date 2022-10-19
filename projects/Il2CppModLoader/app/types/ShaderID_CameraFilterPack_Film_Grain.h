#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Film_Grain {
        inline app::ShaderID_CameraFilterPack_Film_Grain__Class** type_info = (app::ShaderID_CameraFilterPack_Film_Grain__Class**)(modloader::win::memory::resolve_rva(0x04733F28));
        inline app::ShaderID_CameraFilterPack_Film_Grain__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Film_Grain__Class>(type_info, "", "ShaderID_CameraFilterPack_Film_Grain");
        }
        inline app::ShaderID_CameraFilterPack_Film_Grain* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Film_Grain>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Film_Grain
} // namespace app::classes::types
