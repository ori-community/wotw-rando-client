#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_TV_Chromatical {
        inline app::ShaderID_CameraFilterPack_TV_Chromatical__Class** type_info = (app::ShaderID_CameraFilterPack_TV_Chromatical__Class**)(modloader::win::memory::resolve_rva(0x047507D0));
        inline app::ShaderID_CameraFilterPack_TV_Chromatical__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_TV_Chromatical__Class>(type_info, "", "ShaderID_CameraFilterPack_TV_Chromatical");
        }
        inline app::ShaderID_CameraFilterPack_TV_Chromatical* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_TV_Chromatical>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_TV_Chromatical
} // namespace app::classes::types
