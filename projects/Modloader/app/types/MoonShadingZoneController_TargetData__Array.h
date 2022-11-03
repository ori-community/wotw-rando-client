#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonShadingZoneController_TargetData__Array {
        namespace {
            inline app::MoonShadingZoneController_TargetData__Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonShadingZoneController_TargetData__Array__Class** type_info = &type_info_ref;
        inline app::MoonShadingZoneController_TargetData__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonShadingZoneController_TargetData__Array__Class>(type_info, "", "MoonShadingZoneController+TargetData[]");
        }
        inline app::MoonShadingZoneController_TargetData__Array* create() {
            return il2cpp::create_object<app::MoonShadingZoneController_TargetData__Array>(get_class());
        }
    } // namespace MoonShadingZoneController_TargetData__Array
} // namespace app::classes::types
