#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Pixelisation_OilPaint.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Pixelisation_OilPaint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Pixelisation_OilPaint {
        inline app::ShaderID_CameraFilterPack_Pixelisation_OilPaint__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Pixelisation_OilPaint__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Pixelisation_OilPaint__Class**)(modloader::win::memory::resolve_rva(0x04778AE8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Pixelisation_OilPaint__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Pixelisation_OilPaint__Class>(type_info(), "", "ShaderID_CameraFilterPack_Pixelisation_OilPaint");
        }
        inline app::ShaderID_CameraFilterPack_Pixelisation_OilPaint* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Pixelisation_OilPaint>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Pixelisation_OilPaint
} // namespace app::classes::types
