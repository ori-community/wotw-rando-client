#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Antialiasing_FXAA.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Antialiasing_FXAA__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Antialiasing_FXAA {
        inline app::ShaderID_CameraFilterPack_Antialiasing_FXAA__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Antialiasing_FXAA__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Antialiasing_FXAA__Class**)(modloader::win::memory::resolve_rva(0x04727430));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Antialiasing_FXAA__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Antialiasing_FXAA__Class>(type_info(), "", "ShaderID_CameraFilterPack_Antialiasing_FXAA");
        }
        inline app::ShaderID_CameraFilterPack_Antialiasing_FXAA* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Antialiasing_FXAA>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Antialiasing_FXAA
} // namespace app::classes::types
