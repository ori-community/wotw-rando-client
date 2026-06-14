#pragma once
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_Exclusion.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_Exclusion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_Exclusion {
        inline app::CameraFilterPack_Blend2Camera_Exclusion__Class** type_info() {
            static app::CameraFilterPack_Blend2Camera_Exclusion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Blend2Camera_Exclusion__Class**)(modloader::win::memory::resolve_rva(0x0474CC48));
            }
            return cache;
        }
        inline app::CameraFilterPack_Blend2Camera_Exclusion__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_Exclusion__Class>(type_info(), "", "CameraFilterPack_Blend2Camera_Exclusion");
        }
        inline app::CameraFilterPack_Blend2Camera_Exclusion* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_Exclusion>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_Exclusion
} // namespace app::classes::types
