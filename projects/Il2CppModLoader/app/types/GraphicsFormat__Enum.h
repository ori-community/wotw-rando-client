#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GraphicsFormat__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GraphicsFormat__Enum__Class** type_info;
        inline app::GraphicsFormat__Enum__Class* get_class() {
            return il2cpp::get_class<app::GraphicsFormat__Enum__Class>(type_info, "UnityEngine.Experimental.Rendering", "GraphicsFormat");
        }
        inline app::GraphicsFormat__Enum* create() {
            return il2cpp::create_object<app::GraphicsFormat__Enum>(get_class());
        }
    } // namespace GraphicsFormat__Enum
} // namespace app::classes::types
