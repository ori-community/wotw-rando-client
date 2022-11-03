#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Colors_Brightness {
        inline app::ShaderID_CameraFilterPack_Colors_Brightness__Class** type_info = (app::ShaderID_CameraFilterPack_Colors_Brightness__Class**)(modloader::win::memory::resolve_rva(0x047482A8));
        inline app::ShaderID_CameraFilterPack_Colors_Brightness__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Colors_Brightness__Class>(type_info, "", "ShaderID_CameraFilterPack_Colors_Brightness");
        }
        inline app::ShaderID_CameraFilterPack_Colors_Brightness* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Colors_Brightness>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Colors_Brightness
} // namespace app::classes::types
