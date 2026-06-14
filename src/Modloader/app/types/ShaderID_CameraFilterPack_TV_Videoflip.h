#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_Videoflip.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_Videoflip__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_TV_Videoflip {
        inline app::ShaderID_CameraFilterPack_TV_Videoflip__Class** type_info() {
            static app::ShaderID_CameraFilterPack_TV_Videoflip__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_TV_Videoflip__Class**)(modloader::win::memory::resolve_rva(0x04771068));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_TV_Videoflip__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_TV_Videoflip__Class>(type_info(), "", "ShaderID_CameraFilterPack_TV_Videoflip");
        }
        inline app::ShaderID_CameraFilterPack_TV_Videoflip* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_TV_Videoflip>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_TV_Videoflip
} // namespace app::classes::types
