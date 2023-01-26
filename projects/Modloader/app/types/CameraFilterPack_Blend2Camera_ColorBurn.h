#pragma once
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_ColorBurn.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_ColorBurn__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_ColorBurn {
        inline app::CameraFilterPack_Blend2Camera_ColorBurn__Class** type_info() {
            static app::CameraFilterPack_Blend2Camera_ColorBurn__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Blend2Camera_ColorBurn__Class**)(modloader::win::memory::resolve_rva(0x047324D8));
            }
            return cache;
        }
        inline app::CameraFilterPack_Blend2Camera_ColorBurn__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_ColorBurn__Class>(type_info(), "", "CameraFilterPack_Blend2Camera_ColorBurn");
        }
        inline app::CameraFilterPack_Blend2Camera_ColorBurn* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_ColorBurn>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_ColorBurn
} // namespace app::classes::types
