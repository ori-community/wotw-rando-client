#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_Vintage.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_Vintage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_TV_Vintage {
        inline app::ShaderID_CameraFilterPack_TV_Vintage__Class** type_info() {
            static app::ShaderID_CameraFilterPack_TV_Vintage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_TV_Vintage__Class**)(modloader::win::memory::resolve_rva(0x04725CA8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_TV_Vintage__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_TV_Vintage__Class>(type_info(), "", "ShaderID_CameraFilterPack_TV_Vintage");
        }
        inline app::ShaderID_CameraFilterPack_TV_Vintage* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_TV_Vintage>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_TV_Vintage
} // namespace app::classes::types
