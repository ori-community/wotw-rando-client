#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Color_YUV.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Color_YUV__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Color_YUV {
        inline app::ShaderID_CameraFilterPack_Color_YUV__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Color_YUV__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Color_YUV__Class**)(modloader::win::memory::resolve_rva(0x04791AA0));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Color_YUV__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Color_YUV__Class>(type_info(), "", "ShaderID_CameraFilterPack_Color_YUV");
        }
        inline app::ShaderID_CameraFilterPack_Color_YUV* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Color_YUV>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Color_YUV
} // namespace app::classes::types
