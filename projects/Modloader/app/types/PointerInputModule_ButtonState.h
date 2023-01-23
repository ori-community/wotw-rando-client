#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PointerInputModule_ButtonState__Class.h>
#include <Modloader/app/structs/PointerInputModule_ButtonState.h>
#include <Modloader/app/structs/PointerInputModule_ButtonState__Array.h>

namespace app::classes::types {
    namespace PointerInputModule_ButtonState {
        inline app::PointerInputModule_ButtonState__Class** type_info = (app::PointerInputModule_ButtonState__Class**)(modloader::win::memory::resolve_rva(0x04778278));
        inline app::PointerInputModule_ButtonState__Class* get_class() {
            return il2cpp::get_nested_class<app::PointerInputModule_ButtonState__Class>(type_info, "UnityEngine.EventSystems", "PointerInputModule", "ButtonState");
        }
        inline app::PointerInputModule_ButtonState* create() {
            return il2cpp::create_object<app::PointerInputModule_ButtonState>(get_class());
        }
        inline app::PointerInputModule_ButtonState__Array* create_array(int size) {
            return il2cpp::array_new<app::PointerInputModule_ButtonState__Array>(get_class(), size);
        }
        inline app::PointerInputModule_ButtonState__Array* create_array(const std::vector<app::PointerInputModule_ButtonState*>& items) {
            return il2cpp::array_new<app::PointerInputModule_ButtonState__Array>(get_class(), items);
        }
    } // namespace PointerInputModule_ButtonState
} // namespace app::classes::types
