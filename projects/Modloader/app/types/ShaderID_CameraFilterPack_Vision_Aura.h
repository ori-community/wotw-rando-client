#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Vision_Aura.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Vision_Aura__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Vision_Aura {
        inline app::ShaderID_CameraFilterPack_Vision_Aura__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Vision_Aura__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Vision_Aura__Class**)(modloader::win::memory::resolve_rva(0x0470EE58));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Vision_Aura__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Vision_Aura__Class>(type_info(), "", "ShaderID_CameraFilterPack_Vision_Aura");
        }
        inline app::ShaderID_CameraFilterPack_Vision_Aura* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Vision_Aura>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Vision_Aura
} // namespace app::classes::types
