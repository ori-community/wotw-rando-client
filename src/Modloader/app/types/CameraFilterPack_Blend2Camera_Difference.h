#pragma once
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_Difference.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_Difference__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_Difference {
        inline app::CameraFilterPack_Blend2Camera_Difference__Class** type_info() {
            static app::CameraFilterPack_Blend2Camera_Difference__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Blend2Camera_Difference__Class**)(modloader::win::memory::resolve_rva(0x04786A38));
            }
            return cache;
        }
        inline app::CameraFilterPack_Blend2Camera_Difference__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_Difference__Class>(type_info(), "", "CameraFilterPack_Blend2Camera_Difference");
        }
        inline app::CameraFilterPack_Blend2Camera_Difference* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_Difference>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_Difference
} // namespace app::classes::types
