#pragma once
#include <Modloader/app/structs/MoonShadingZoneController_TargetData__Array.h>
#include <Modloader/app/structs/MoonShadingZoneController_TargetData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonShadingZoneController_TargetData__Array {
        inline app::MoonShadingZoneController_TargetData__Array__Class** type_info() {
            static app::MoonShadingZoneController_TargetData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonShadingZoneController_TargetData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonShadingZoneController_TargetData__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonShadingZoneController_TargetData__Array__Class>(type_info(), "", "MoonShadingZoneController+TargetData[]");
        }
        inline app::MoonShadingZoneController_TargetData__Array* create() {
            return il2cpp::create_object<app::MoonShadingZoneController_TargetData__Array>(get_class());
        }
    } // namespace MoonShadingZoneController_TargetData__Array
} // namespace app::classes::types
