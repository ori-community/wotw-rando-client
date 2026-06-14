#pragma once
#include <Modloader/app/structs/CameraFilterPack_Color_Chromatic_Aberration.h>
#include <Modloader/app/structs/CameraFilterPack_Color_Chromatic_Aberration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Color_Chromatic_Aberration {
        inline app::CameraFilterPack_Color_Chromatic_Aberration__Class** type_info() {
            static app::CameraFilterPack_Color_Chromatic_Aberration__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Color_Chromatic_Aberration__Class**)(modloader::win::memory::resolve_rva(0x04758580));
            }
            return cache;
        }
        inline app::CameraFilterPack_Color_Chromatic_Aberration__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Color_Chromatic_Aberration__Class>(type_info(), "", "CameraFilterPack_Color_Chromatic_Aberration");
        }
        inline app::CameraFilterPack_Color_Chromatic_Aberration* create() {
            return il2cpp::create_object<app::CameraFilterPack_Color_Chromatic_Aberration>(get_class());
        }
    } // namespace CameraFilterPack_Color_Chromatic_Aberration
} // namespace app::classes::types
