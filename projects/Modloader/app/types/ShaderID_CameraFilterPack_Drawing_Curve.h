#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Curve.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Curve__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Drawing_Curve {
        inline app::ShaderID_CameraFilterPack_Drawing_Curve__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Drawing_Curve__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Drawing_Curve__Class**)(modloader::win::memory::resolve_rva(0x0478F858));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Drawing_Curve__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Drawing_Curve__Class>(type_info(), "", "ShaderID_CameraFilterPack_Drawing_Curve");
        }
        inline app::ShaderID_CameraFilterPack_Drawing_Curve* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Drawing_Curve>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Drawing_Curve
} // namespace app::classes::types
