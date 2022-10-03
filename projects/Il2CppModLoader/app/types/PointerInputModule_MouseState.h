#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PointerInputModule_MouseState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PointerInputModule_MouseState__Class** type_info;
        inline app::PointerInputModule_MouseState__Class* get_class() {
            return il2cpp::get_nested_class<app::PointerInputModule_MouseState__Class>(type_info, "UnityEngine.EventSystems", "PointerInputModule", "MouseState");
        }
        inline app::PointerInputModule_MouseState* create() {
            return il2cpp::create_object<app::PointerInputModule_MouseState>(get_class());
        }
    } // namespace PointerInputModule_MouseState
} // namespace app::classes::types
