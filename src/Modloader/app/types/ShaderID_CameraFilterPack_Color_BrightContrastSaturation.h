#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Color_BrightContrastSaturation.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Color_BrightContrastSaturation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Color_BrightContrastSaturation {
        inline app::ShaderID_CameraFilterPack_Color_BrightContrastSaturation__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Color_BrightContrastSaturation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Color_BrightContrastSaturation__Class**)(modloader::win::memory::resolve_rva(0x0473FE00));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Color_BrightContrastSaturation__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Color_BrightContrastSaturation__Class>(type_info(), "", "ShaderID_CameraFilterPack_Color_BrightContrastSaturation");
        }
        inline app::ShaderID_CameraFilterPack_Color_BrightContrastSaturation* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Color_BrightContrastSaturation>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Color_BrightContrastSaturation
} // namespace app::classes::types
