#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Light_Water.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Light_Water__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Light_Water {
        inline app::ShaderID_CameraFilterPack_Light_Water__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Light_Water__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Light_Water__Class**)(modloader::win::memory::resolve_rva(0x0473A7F0));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Light_Water__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Light_Water__Class>(type_info(), "", "ShaderID_CameraFilterPack_Light_Water");
        }
        inline app::ShaderID_CameraFilterPack_Light_Water* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Light_Water>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Light_Water
} // namespace app::classes::types
