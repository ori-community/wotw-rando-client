#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraPivotZone__Array {
        namespace {
            app::CameraPivotZone__Array__Class* type_info_ref = nullptr;
        }
        app::CameraPivotZone__Array__Class** type_info = &type_info_ref;
        inline app::CameraPivotZone__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraPivotZone__Array__Class>(type_info, "", "CameraPivotZone[]");
        }
        inline app::CameraPivotZone__Array* create() {
            return il2cpp::create_object<app::CameraPivotZone__Array>(get_class());
        }
    } // namespace CameraPivotZone__Array
} // namespace app::classes::types
