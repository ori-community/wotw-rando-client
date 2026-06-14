#pragma once
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_Darken.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_Darken__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_Darken {
        inline app::CameraFilterPack_Blend2Camera_Darken__Class** type_info() {
            static app::CameraFilterPack_Blend2Camera_Darken__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Blend2Camera_Darken__Class**)(modloader::win::memory::resolve_rva(0x0472C528));
            }
            return cache;
        }
        inline app::CameraFilterPack_Blend2Camera_Darken__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_Darken__Class>(type_info(), "", "CameraFilterPack_Blend2Camera_Darken");
        }
        inline app::CameraFilterPack_Blend2Camera_Darken* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_Darken>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_Darken
} // namespace app::classes::types
