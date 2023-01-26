#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_EXTRA_Rotation.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_EXTRA_Rotation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_EXTRA_Rotation {
        inline app::ShaderID_CameraFilterPack_EXTRA_Rotation__Class** type_info() {
            static app::ShaderID_CameraFilterPack_EXTRA_Rotation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_EXTRA_Rotation__Class**)(modloader::win::memory::resolve_rva(0x04754B48));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_EXTRA_Rotation__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_EXTRA_Rotation__Class>(type_info(), "", "ShaderID_CameraFilterPack_EXTRA_Rotation");
        }
        inline app::ShaderID_CameraFilterPack_EXTRA_Rotation* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_EXTRA_Rotation>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_EXTRA_Rotation
} // namespace app::classes::types
