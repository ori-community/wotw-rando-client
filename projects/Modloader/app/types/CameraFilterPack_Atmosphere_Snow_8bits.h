#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Atmosphere_Snow_8bits {
        namespace {
            inline app::CameraFilterPack_Atmosphere_Snow_8bits__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Atmosphere_Snow_8bits__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Atmosphere_Snow_8bits__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Atmosphere_Snow_8bits__Class>(type_info, "", "CameraFilterPack_Atmosphere_Snow_8bits");
        }
        inline app::CameraFilterPack_Atmosphere_Snow_8bits* create() {
            return il2cpp::create_object<app::CameraFilterPack_Atmosphere_Snow_8bits>(get_class());
        }
    } // namespace CameraFilterPack_Atmosphere_Snow_8bits
} // namespace app::classes::types
