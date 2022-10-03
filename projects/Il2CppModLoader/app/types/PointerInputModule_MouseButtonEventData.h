#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PointerInputModule_MouseButtonEventData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PointerInputModule_MouseButtonEventData__Class** type_info;
        inline app::PointerInputModule_MouseButtonEventData__Class* get_class() {
            return il2cpp::get_nested_class<app::PointerInputModule_MouseButtonEventData__Class>(type_info, "UnityEngine.EventSystems", "PointerInputModule", "MouseButtonEventData");
        }
        inline app::PointerInputModule_MouseButtonEventData* create() {
            return il2cpp::create_object<app::PointerInputModule_MouseButtonEventData>(get_class());
        }
    } // namespace PointerInputModule_MouseButtonEventData
} // namespace app::classes::types
