#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_Tiles.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_Tiles__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_TV_Tiles {
        inline app::ShaderID_CameraFilterPack_TV_Tiles__Class** type_info() {
            static app::ShaderID_CameraFilterPack_TV_Tiles__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_TV_Tiles__Class**)(modloader::win::memory::resolve_rva(0x047260C8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_TV_Tiles__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_TV_Tiles__Class>(type_info(), "", "ShaderID_CameraFilterPack_TV_Tiles");
        }
        inline app::ShaderID_CameraFilterPack_TV_Tiles* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_TV_Tiles>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_TV_Tiles
} // namespace app::classes::types
