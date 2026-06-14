#pragma once
#include <Modloader/app/structs/PointerInputModule_ButtonState__Array.h>
#include <Modloader/app/structs/PointerInputModule_ButtonState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PointerInputModule_ButtonState__Array {
        inline app::PointerInputModule_ButtonState__Array__Class** type_info() {
            static app::PointerInputModule_ButtonState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PointerInputModule_ButtonState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PointerInputModule_ButtonState__Array__Class* get_class() {
            return il2cpp::get_class<app::PointerInputModule_ButtonState__Array__Class>(type_info(), "UnityEngine.EventSystems", "PointerInputModule+ButtonState[]");
        }
        inline app::PointerInputModule_ButtonState__Array* create() {
            return il2cpp::create_object<app::PointerInputModule_ButtonState__Array>(get_class());
        }
    } // namespace PointerInputModule_ButtonState__Array
} // namespace app::classes::types
