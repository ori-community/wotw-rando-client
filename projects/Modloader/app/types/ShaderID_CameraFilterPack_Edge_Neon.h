#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Edge_Neon.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Edge_Neon__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Edge_Neon {
        inline app::ShaderID_CameraFilterPack_Edge_Neon__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Edge_Neon__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Edge_Neon__Class**)(modloader::win::memory::resolve_rva(0x04780830));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Edge_Neon__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Edge_Neon__Class>(type_info(), "", "ShaderID_CameraFilterPack_Edge_Neon");
        }
        inline app::ShaderID_CameraFilterPack_Edge_Neon* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Edge_Neon>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Edge_Neon
} // namespace app::classes::types
