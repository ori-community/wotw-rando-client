#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_LED.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_LED__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_TV_LED {
        inline app::ShaderID_CameraFilterPack_TV_LED__Class** type_info() {
            static app::ShaderID_CameraFilterPack_TV_LED__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_TV_LED__Class**)(modloader::win::memory::resolve_rva(0x0476AC30));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_TV_LED__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_TV_LED__Class>(type_info(), "", "ShaderID_CameraFilterPack_TV_LED");
        }
        inline app::ShaderID_CameraFilterPack_TV_LED* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_TV_LED>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_TV_LED
} // namespace app::classes::types
