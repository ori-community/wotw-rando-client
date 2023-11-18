#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Vision_Warp.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Vision_Warp__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Vision_Warp {
        inline app::ShaderID_CameraFilterPack_Vision_Warp__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Vision_Warp__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Vision_Warp__Class**)(modloader::win::memory::resolve_rva(0x04767DE0));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Vision_Warp__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Vision_Warp__Class>(type_info(), "", "ShaderID_CameraFilterPack_Vision_Warp");
        }
        inline app::ShaderID_CameraFilterPack_Vision_Warp* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Vision_Warp>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Vision_Warp
} // namespace app::classes::types
