#pragma once
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_Hue.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_Hue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_Hue {
        inline app::CameraFilterPack_Blend2Camera_Hue__Class** type_info() {
            static app::CameraFilterPack_Blend2Camera_Hue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Blend2Camera_Hue__Class**)(modloader::win::memory::resolve_rva(0x047885C8));
            }
            return cache;
        }
        inline app::CameraFilterPack_Blend2Camera_Hue__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_Hue__Class>(type_info(), "", "CameraFilterPack_Blend2Camera_Hue");
        }
        inline app::CameraFilterPack_Blend2Camera_Hue* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_Hue>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_Hue
} // namespace app::classes::types
