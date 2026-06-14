#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Film_ColorPerfection.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Film_ColorPerfection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Film_ColorPerfection {
        inline app::ShaderID_CameraFilterPack_Film_ColorPerfection__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Film_ColorPerfection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Film_ColorPerfection__Class**)(modloader::win::memory::resolve_rva(0x04766888));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Film_ColorPerfection__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Film_ColorPerfection__Class>(type_info(), "", "ShaderID_CameraFilterPack_Film_ColorPerfection");
        }
        inline app::ShaderID_CameraFilterPack_Film_ColorPerfection* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Film_ColorPerfection>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Film_ColorPerfection
} // namespace app::classes::types
