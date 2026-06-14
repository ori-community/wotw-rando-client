#pragma once
#include <Modloader/app/structs/PointerInputModule_MouseState.h>
#include <Modloader/app/structs/PointerInputModule_MouseState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PointerInputModule_MouseState {
        inline app::PointerInputModule_MouseState__Class** type_info() {
            static app::PointerInputModule_MouseState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PointerInputModule_MouseState__Class**)(modloader::win::memory::resolve_rva(0x04729E00));
            }
            return cache;
        }
        inline app::PointerInputModule_MouseState__Class* get_class() {
            return il2cpp::get_nested_class<app::PointerInputModule_MouseState__Class>(type_info(), "UnityEngine.EventSystems", "PointerInputModule", "MouseState");
        }
        inline app::PointerInputModule_MouseState* create() {
            return il2cpp::create_object<app::PointerInputModule_MouseState>(get_class());
        }
    } // namespace PointerInputModule_MouseState
} // namespace app::classes::types
