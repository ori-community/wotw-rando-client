#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraPivotZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraPivotZone__Class** type_info;
        inline app::CameraPivotZone__Class* get_class() {
            return il2cpp::get_class<app::CameraPivotZone__Class>(type_info, "", "CameraPivotZone");
        }
        inline app::CameraPivotZone* create() {
            return il2cpp::create_object<app::CameraPivotZone>(get_class());
        }
        inline app::CameraPivotZone__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraPivotZone__Array>(get_class(), size);
        }
    } // namespace CameraPivotZone
} // namespace app::classes::types
