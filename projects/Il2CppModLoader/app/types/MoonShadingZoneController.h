#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonShadingZoneController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonShadingZoneController__Class** type_info;
        inline app::MoonShadingZoneController__Class* get_class() {
            return il2cpp::get_class<app::MoonShadingZoneController__Class>(type_info, "", "MoonShadingZoneController");
        }
        inline app::MoonShadingZoneController* create() {
            return il2cpp::create_object<app::MoonShadingZoneController>(get_class());
        }
    } // namespace MoonShadingZoneController
} // namespace app::classes::types
