#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_Posterize.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_Posterize__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_TV_Posterize {
        inline app::ShaderID_CameraFilterPack_TV_Posterize__Class** type_info() {
            static app::ShaderID_CameraFilterPack_TV_Posterize__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_TV_Posterize__Class**)(modloader::win::memory::resolve_rva(0x0472BBA8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_TV_Posterize__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_TV_Posterize__Class>(type_info(), "", "ShaderID_CameraFilterPack_TV_Posterize");
        }
        inline app::ShaderID_CameraFilterPack_TV_Posterize* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_TV_Posterize>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_TV_Posterize
} // namespace app::classes::types
