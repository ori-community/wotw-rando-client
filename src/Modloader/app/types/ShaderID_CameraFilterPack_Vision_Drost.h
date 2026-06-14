#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Vision_Drost.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Vision_Drost__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Vision_Drost {
        inline app::ShaderID_CameraFilterPack_Vision_Drost__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Vision_Drost__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Vision_Drost__Class**)(modloader::win::memory::resolve_rva(0x047425C8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Vision_Drost__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Vision_Drost__Class>(type_info(), "", "ShaderID_CameraFilterPack_Vision_Drost");
        }
        inline app::ShaderID_CameraFilterPack_Vision_Drost* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Vision_Drost>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Vision_Drost
} // namespace app::classes::types
