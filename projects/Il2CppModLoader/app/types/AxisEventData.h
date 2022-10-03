#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AxisEventData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AxisEventData__Class** type_info;
        inline app::AxisEventData__Class* get_class() {
            return il2cpp::get_class<app::AxisEventData__Class>(type_info, "UnityEngine.EventSystems", "AxisEventData");
        }
        inline app::AxisEventData* create() {
            return il2cpp::create_object<app::AxisEventData>(get_class());
        }
    } // namespace AxisEventData
} // namespace app::classes::types
