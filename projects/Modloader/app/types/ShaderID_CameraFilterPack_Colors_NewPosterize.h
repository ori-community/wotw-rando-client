#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Colors_NewPosterize {
        inline app::ShaderID_CameraFilterPack_Colors_NewPosterize__Class** type_info = (app::ShaderID_CameraFilterPack_Colors_NewPosterize__Class**)(modloader::win::memory::resolve_rva(0x047751D0));
        inline app::ShaderID_CameraFilterPack_Colors_NewPosterize__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Colors_NewPosterize__Class>(type_info, "", "ShaderID_CameraFilterPack_Colors_NewPosterize");
        }
        inline app::ShaderID_CameraFilterPack_Colors_NewPosterize* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Colors_NewPosterize>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Colors_NewPosterize
} // namespace app::classes::types
