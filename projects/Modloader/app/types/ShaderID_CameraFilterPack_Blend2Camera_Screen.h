#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blend2Camera_Screen {
        inline app::ShaderID_CameraFilterPack_Blend2Camera_Screen__Class** type_info = (app::ShaderID_CameraFilterPack_Blend2Camera_Screen__Class**)(modloader::win::memory::resolve_rva(0x047871B8));
        inline app::ShaderID_CameraFilterPack_Blend2Camera_Screen__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blend2Camera_Screen__Class>(type_info, "", "ShaderID_CameraFilterPack_Blend2Camera_Screen");
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_Screen* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blend2Camera_Screen>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blend2Camera_Screen
} // namespace app::classes::types
