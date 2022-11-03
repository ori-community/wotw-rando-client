#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_TV_80 {
        inline app::ShaderID_CameraFilterPack_TV_80__Class** type_info = (app::ShaderID_CameraFilterPack_TV_80__Class**)(modloader::win::memory::resolve_rva(0x0470EE50));
        inline app::ShaderID_CameraFilterPack_TV_80__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_TV_80__Class>(type_info, "", "ShaderID_CameraFilterPack_TV_80");
        }
        inline app::ShaderID_CameraFilterPack_TV_80* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_TV_80>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_TV_80
} // namespace app::classes::types
