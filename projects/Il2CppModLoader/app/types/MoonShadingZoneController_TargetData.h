#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonShadingZoneController_TargetData {
        inline app::MoonShadingZoneController_TargetData__Class** type_info = (app::MoonShadingZoneController_TargetData__Class**)(modloader::win::memory::resolve_rva(0x0477C250));
        inline app::MoonShadingZoneController_TargetData__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonShadingZoneController_TargetData__Class>(type_info, "", "MoonShadingZoneController", "TargetData");
        }
        inline app::MoonShadingZoneController_TargetData* create() {
            return il2cpp::create_object<app::MoonShadingZoneController_TargetData>(get_class());
        }
        inline app::MoonShadingZoneController_TargetData__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonShadingZoneController_TargetData__Array>(get_class(), size);
        }
        inline app::MoonShadingZoneController_TargetData__Array* create_array(const std::vector<app::MoonShadingZoneController_TargetData*>& items) {
            return il2cpp::array_new<app::MoonShadingZoneController_TargetData__Array>(get_class(), items);
        }
    } // namespace MoonShadingZoneController_TargetData
} // namespace app::classes::types
