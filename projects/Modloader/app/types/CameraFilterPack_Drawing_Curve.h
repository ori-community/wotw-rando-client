#pragma once
#include <Modloader/app/structs/CameraFilterPack_Drawing_Curve.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_Curve__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Curve {
        inline app::CameraFilterPack_Drawing_Curve__Class** type_info() {
            static app::CameraFilterPack_Drawing_Curve__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Drawing_Curve__Class**)(modloader::win::memory::resolve_rva(0x0471A100));
            }
            return cache;
        }
        inline app::CameraFilterPack_Drawing_Curve__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Curve__Class>(type_info(), "", "CameraFilterPack_Drawing_Curve");
        }
        inline app::CameraFilterPack_Drawing_Curve* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Curve>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Curve
} // namespace app::classes::types
