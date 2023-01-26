#pragma once
#include <Modloader/app/structs/CameraFilterPack_Atmosphere_Snow_8bits.h>
#include <Modloader/app/structs/CameraFilterPack_Atmosphere_Snow_8bits__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Atmosphere_Snow_8bits {
        inline app::CameraFilterPack_Atmosphere_Snow_8bits__Class** type_info() {
            static app::CameraFilterPack_Atmosphere_Snow_8bits__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_Atmosphere_Snow_8bits__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_Atmosphere_Snow_8bits__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Atmosphere_Snow_8bits__Class>(type_info(), "", "CameraFilterPack_Atmosphere_Snow_8bits");
        }
        inline app::CameraFilterPack_Atmosphere_Snow_8bits* create() {
            return il2cpp::create_object<app::CameraFilterPack_Atmosphere_Snow_8bits>(get_class());
        }
    } // namespace CameraFilterPack_Atmosphere_Snow_8bits
} // namespace app::classes::types
