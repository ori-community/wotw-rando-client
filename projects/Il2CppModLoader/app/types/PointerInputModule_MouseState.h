#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PointerInputModule_MouseState {
        inline app::PointerInputModule_MouseState__Class** type_info = (app::PointerInputModule_MouseState__Class**)(modloader::win::memory::resolve_rva(0x04729E00));
        inline app::PointerInputModule_MouseState__Class* get_class() {
            return il2cpp::get_nested_class<app::PointerInputModule_MouseState__Class>(type_info, "UnityEngine.EventSystems", "PointerInputModule", "MouseState");
        }
        inline app::PointerInputModule_MouseState* create() {
            return il2cpp::create_object<app::PointerInputModule_MouseState>(get_class());
        }
    } // namespace PointerInputModule_MouseState
} // namespace app::classes::types
