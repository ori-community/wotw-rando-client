#pragma once
#include <Modloader/app/structs/CameraFilterPack_FX_Dot_Circle.h>
#include <Modloader/app/structs/CameraFilterPack_FX_Dot_Circle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_Dot_Circle {
        inline app::CameraFilterPack_FX_Dot_Circle__Class** type_info() {
            static app::CameraFilterPack_FX_Dot_Circle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_FX_Dot_Circle__Class**)(modloader::win::memory::resolve_rva(0x0476A338));
            }
            return cache;
        }
        inline app::CameraFilterPack_FX_Dot_Circle__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_Dot_Circle__Class>(type_info(), "", "CameraFilterPack_FX_Dot_Circle");
        }
        inline app::CameraFilterPack_FX_Dot_Circle* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_Dot_Circle>(get_class());
        }
    } // namespace CameraFilterPack_FX_Dot_Circle
} // namespace app::classes::types
