#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PointerInputModule_ButtonState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PointerInputModule_ButtonState__Class** type_info;
        inline app::PointerInputModule_ButtonState__Class* get_class() {
            return il2cpp::get_nested_class<app::PointerInputModule_ButtonState__Class>(type_info, "UnityEngine.EventSystems", "PointerInputModule", "ButtonState");
        }
        inline app::PointerInputModule_ButtonState* create() {
            return il2cpp::create_object<app::PointerInputModule_ButtonState>(get_class());
        }
        inline app::PointerInputModule_ButtonState__Array* create_array(int size) {
            return il2cpp::array_new<app::PointerInputModule_ButtonState__Array>(get_class(), size);
        }
    } // namespace PointerInputModule_ButtonState
} // namespace app::classes::types
