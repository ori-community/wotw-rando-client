#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_Ascii.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_Ascii__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_FX_Ascii {
        inline app::ShaderID_CameraFilterPack_FX_Ascii__Class** type_info() {
            static app::ShaderID_CameraFilterPack_FX_Ascii__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_FX_Ascii__Class**)(modloader::win::memory::resolve_rva(0x04791130));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_FX_Ascii__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_FX_Ascii__Class>(type_info(), "", "ShaderID_CameraFilterPack_FX_Ascii");
        }
        inline app::ShaderID_CameraFilterPack_FX_Ascii* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_FX_Ascii>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_FX_Ascii
} // namespace app::classes::types
