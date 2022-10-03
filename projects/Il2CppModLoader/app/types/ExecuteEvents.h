#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExecuteEvents {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExecuteEvents__Class** type_info;
        inline app::ExecuteEvents__Class* get_class() {
            return il2cpp::get_class<app::ExecuteEvents__Class>(type_info, "UnityEngine.EventSystems", "ExecuteEvents");
        }
        inline app::ExecuteEvents* create() {
            return il2cpp::create_object<app::ExecuteEvents>(get_class());
        }
    } // namespace ExecuteEvents
} // namespace app::classes::types
