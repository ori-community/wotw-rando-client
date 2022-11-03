#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_TV_ARCADE {
        inline app::ShaderID_CameraFilterPack_TV_ARCADE__Class** type_info = (app::ShaderID_CameraFilterPack_TV_ARCADE__Class**)(modloader::win::memory::resolve_rva(0x0476E0A0));
        inline app::ShaderID_CameraFilterPack_TV_ARCADE__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_TV_ARCADE__Class>(type_info, "", "ShaderID_CameraFilterPack_TV_ARCADE");
        }
        inline app::ShaderID_CameraFilterPack_TV_ARCADE* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_TV_ARCADE>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_TV_ARCADE
} // namespace app::classes::types
