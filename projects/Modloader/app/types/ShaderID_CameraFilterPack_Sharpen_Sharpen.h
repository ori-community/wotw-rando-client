#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Sharpen_Sharpen.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Sharpen_Sharpen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Sharpen_Sharpen {
        inline app::ShaderID_CameraFilterPack_Sharpen_Sharpen__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Sharpen_Sharpen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Sharpen_Sharpen__Class**)(modloader::win::memory::resolve_rva(0x0474D508));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Sharpen_Sharpen__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Sharpen_Sharpen__Class>(type_info(), "", "ShaderID_CameraFilterPack_Sharpen_Sharpen");
        }
        inline app::ShaderID_CameraFilterPack_Sharpen_Sharpen* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Sharpen_Sharpen>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Sharpen_Sharpen
} // namespace app::classes::types
