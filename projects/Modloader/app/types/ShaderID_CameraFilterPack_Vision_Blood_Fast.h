#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Vision_Blood_Fast.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Vision_Blood_Fast__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Vision_Blood_Fast {
        inline app::ShaderID_CameraFilterPack_Vision_Blood_Fast__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Vision_Blood_Fast__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Vision_Blood_Fast__Class**)(modloader::win::memory::resolve_rva(0x04779170));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Vision_Blood_Fast__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Vision_Blood_Fast__Class>(type_info(), "", "ShaderID_CameraFilterPack_Vision_Blood_Fast");
        }
        inline app::ShaderID_CameraFilterPack_Vision_Blood_Fast* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Vision_Blood_Fast>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Vision_Blood_Fast
} // namespace app::classes::types
