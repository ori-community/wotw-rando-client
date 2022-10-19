#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Atmosphere_Rain {
        namespace {
            inline app::CameraFilterPack_Atmosphere_Rain__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Atmosphere_Rain__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Atmosphere_Rain__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Atmosphere_Rain__Class>(type_info, "", "CameraFilterPack_Atmosphere_Rain");
        }
        inline app::CameraFilterPack_Atmosphere_Rain* create() {
            return il2cpp::create_object<app::CameraFilterPack_Atmosphere_Rain>(get_class());
        }
    } // namespace CameraFilterPack_Atmosphere_Rain
} // namespace app::classes::types
