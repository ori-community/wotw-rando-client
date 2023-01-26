#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Retro_Loading.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Retro_Loading__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Retro_Loading {
        inline app::ShaderID_CameraFilterPack_Retro_Loading__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Retro_Loading__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Retro_Loading__Class**)(modloader::win::memory::resolve_rva(0x047957D8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Retro_Loading__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Retro_Loading__Class>(type_info(), "", "ShaderID_CameraFilterPack_Retro_Loading");
        }
        inline app::ShaderID_CameraFilterPack_Retro_Loading* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Retro_Loading>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Retro_Loading
} // namespace app::classes::types
