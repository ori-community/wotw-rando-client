#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Colors_HUE_Rotate {
        inline app::ShaderID_CameraFilterPack_Colors_HUE_Rotate__Class** type_info = (app::ShaderID_CameraFilterPack_Colors_HUE_Rotate__Class**)(modloader::win::memory::resolve_rva(0x047926E0));
        inline app::ShaderID_CameraFilterPack_Colors_HUE_Rotate__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Colors_HUE_Rotate__Class>(type_info, "", "ShaderID_CameraFilterPack_Colors_HUE_Rotate");
        }
        inline app::ShaderID_CameraFilterPack_Colors_HUE_Rotate* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Colors_HUE_Rotate>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Colors_HUE_Rotate
} // namespace app::classes::types
