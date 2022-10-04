#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDragHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDragHandler__Class** type_info;
        inline app::IDragHandler__Class* get_class() {
            return il2cpp::get_class<app::IDragHandler__Class>(type_info, "UnityEngine.EventSystems", "IDragHandler");
        }
        inline app::IDragHandler* create() {
            return il2cpp::create_object<app::IDragHandler>(get_class());
        }
    } // namespace IDragHandler
} // namespace app::classes::types
