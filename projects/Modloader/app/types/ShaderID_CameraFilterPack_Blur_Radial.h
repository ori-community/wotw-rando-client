#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blur_Radial.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blur_Radial__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blur_Radial {
        inline app::ShaderID_CameraFilterPack_Blur_Radial__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Blur_Radial__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Blur_Radial__Class**)(modloader::win::memory::resolve_rva(0x04790560));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Blur_Radial__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blur_Radial__Class>(type_info(), "", "ShaderID_CameraFilterPack_Blur_Radial");
        }
        inline app::ShaderID_CameraFilterPack_Blur_Radial* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blur_Radial>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blur_Radial
} // namespace app::classes::types
