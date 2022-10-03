#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonShadingZoneController_TargetData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonShadingZoneController_TargetData__Class** type_info;
        inline app::MoonShadingZoneController_TargetData__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonShadingZoneController_TargetData__Class>(type_info, "", "MoonShadingZoneController", "TargetData");
        }
        inline app::MoonShadingZoneController_TargetData* create() {
            return il2cpp::create_object<app::MoonShadingZoneController_TargetData>(get_class());
        }
        inline app::MoonShadingZoneController_TargetData__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonShadingZoneController_TargetData__Array>(get_class(), size);
        }
    } // namespace MoonShadingZoneController_TargetData
} // namespace app::classes::types
