#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_TV_Old_Movie {
        inline app::ShaderID_CameraFilterPack_TV_Old_Movie__Class** type_info = (app::ShaderID_CameraFilterPack_TV_Old_Movie__Class**)(modloader::win::memory::resolve_rva(0x04724B10));
        inline app::ShaderID_CameraFilterPack_TV_Old_Movie__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_TV_Old_Movie__Class>(type_info, "", "ShaderID_CameraFilterPack_TV_Old_Movie");
        }
        inline app::ShaderID_CameraFilterPack_TV_Old_Movie* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_TV_Old_Movie>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_TV_Old_Movie
} // namespace app::classes::types
