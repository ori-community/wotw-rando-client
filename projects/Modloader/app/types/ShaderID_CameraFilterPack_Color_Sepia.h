#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Color_Sepia.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Color_Sepia__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Color_Sepia {
        inline app::ShaderID_CameraFilterPack_Color_Sepia__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Color_Sepia__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Color_Sepia__Class**)(modloader::win::memory::resolve_rva(0x047730B8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Color_Sepia__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Color_Sepia__Class>(type_info(), "", "ShaderID_CameraFilterPack_Color_Sepia");
        }
        inline app::ShaderID_CameraFilterPack_Color_Sepia* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Color_Sepia>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Color_Sepia
} // namespace app::classes::types
