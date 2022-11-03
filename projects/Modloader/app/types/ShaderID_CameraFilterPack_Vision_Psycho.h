#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Vision_Psycho {
        inline app::ShaderID_CameraFilterPack_Vision_Psycho__Class** type_info = (app::ShaderID_CameraFilterPack_Vision_Psycho__Class**)(modloader::win::memory::resolve_rva(0x0471D290));
        inline app::ShaderID_CameraFilterPack_Vision_Psycho__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Vision_Psycho__Class>(type_info, "", "ShaderID_CameraFilterPack_Vision_Psycho");
        }
        inline app::ShaderID_CameraFilterPack_Vision_Psycho* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Vision_Psycho>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Vision_Psycho
} // namespace app::classes::types
