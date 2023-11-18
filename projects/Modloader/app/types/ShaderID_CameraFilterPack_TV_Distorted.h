#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_Distorted.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_Distorted__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_TV_Distorted {
        inline app::ShaderID_CameraFilterPack_TV_Distorted__Class** type_info() {
            static app::ShaderID_CameraFilterPack_TV_Distorted__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_TV_Distorted__Class**)(modloader::win::memory::resolve_rva(0x0478E468));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_TV_Distorted__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_TV_Distorted__Class>(type_info(), "", "ShaderID_CameraFilterPack_TV_Distorted");
        }
        inline app::ShaderID_CameraFilterPack_TV_Distorted* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_TV_Distorted>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_TV_Distorted
} // namespace app::classes::types
