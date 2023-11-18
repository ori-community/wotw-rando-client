#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blur_Steam.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blur_Steam__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blur_Steam {
        inline app::ShaderID_CameraFilterPack_Blur_Steam__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Blur_Steam__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Blur_Steam__Class**)(modloader::win::memory::resolve_rva(0x04770938));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Blur_Steam__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blur_Steam__Class>(type_info(), "", "ShaderID_CameraFilterPack_Blur_Steam");
        }
        inline app::ShaderID_CameraFilterPack_Blur_Steam* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blur_Steam>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blur_Steam
} // namespace app::classes::types
