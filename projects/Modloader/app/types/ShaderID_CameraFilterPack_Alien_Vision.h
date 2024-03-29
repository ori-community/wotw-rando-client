#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Alien_Vision.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Alien_Vision__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Alien_Vision {
        inline app::ShaderID_CameraFilterPack_Alien_Vision__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Alien_Vision__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Alien_Vision__Class**)(modloader::win::memory::resolve_rva(0x0470D9C8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Alien_Vision__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Alien_Vision__Class>(type_info(), "", "ShaderID_CameraFilterPack_Alien_Vision");
        }
        inline app::ShaderID_CameraFilterPack_Alien_Vision* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Alien_Vision>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Alien_Vision
} // namespace app::classes::types
