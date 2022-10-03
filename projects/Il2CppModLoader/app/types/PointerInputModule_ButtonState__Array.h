#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PointerInputModule_ButtonState__Array {
        namespace {
            app::PointerInputModule_ButtonState__Array__Class* type_info_ref = nullptr;
        }
        app::PointerInputModule_ButtonState__Array__Class** type_info = &type_info_ref;
        inline app::PointerInputModule_ButtonState__Array__Class* get_class() {
            return il2cpp::get_class<app::PointerInputModule_ButtonState__Array__Class>(type_info, "UnityEngine.EventSystems", "PointerInputModule+ButtonState[]");
        }
        inline app::PointerInputModule_ButtonState__Array* create() {
            return il2cpp::create_object<app::PointerInputModule_ButtonState__Array>(get_class());
        }
    } // namespace PointerInputModule_ButtonState__Array
} // namespace app::classes::types
