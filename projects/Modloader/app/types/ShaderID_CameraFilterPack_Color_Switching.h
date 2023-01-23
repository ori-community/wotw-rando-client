#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Color_Switching__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Color_Switching.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Color_Switching {
        inline app::ShaderID_CameraFilterPack_Color_Switching__Class** type_info = (app::ShaderID_CameraFilterPack_Color_Switching__Class**)(modloader::win::memory::resolve_rva(0x0475C858));
        inline app::ShaderID_CameraFilterPack_Color_Switching__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Color_Switching__Class>(type_info, "", "ShaderID_CameraFilterPack_Color_Switching");
        }
        inline app::ShaderID_CameraFilterPack_Color_Switching* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Color_Switching>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Color_Switching
} // namespace app::classes::types
