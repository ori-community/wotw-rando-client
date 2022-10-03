#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GraphicsDeviceType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GraphicsDeviceType__Enum__Class** type_info;
        inline app::GraphicsDeviceType__Enum__Class* get_class() {
            return il2cpp::get_class<app::GraphicsDeviceType__Enum__Class>(type_info, "UnityEngine.Rendering", "GraphicsDeviceType");
        }
        inline app::GraphicsDeviceType__Enum* create() {
            return il2cpp::create_object<app::GraphicsDeviceType__Enum>(get_class());
        }
    } // namespace GraphicsDeviceType__Enum
} // namespace app::classes::types
