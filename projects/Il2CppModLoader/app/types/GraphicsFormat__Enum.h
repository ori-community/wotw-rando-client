#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GraphicsFormat__Enum {
        inline app::GraphicsFormat__Enum__Class** type_info = (app::GraphicsFormat__Enum__Class**)(modloader::win::memory::resolve_rva(0x04707500));
        inline app::GraphicsFormat__Enum__Class* get_class() {
            return il2cpp::get_class<app::GraphicsFormat__Enum__Class>(type_info, "UnityEngine.Experimental.Rendering", "GraphicsFormat");
        }
        inline app::GraphicsFormat__Enum* create() {
            return il2cpp::create_object<app::GraphicsFormat__Enum>(get_class());
        }
    } // namespace GraphicsFormat__Enum
} // namespace app::classes::types
