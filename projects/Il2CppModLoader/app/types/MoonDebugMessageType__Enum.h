#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonDebugMessageType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonDebugMessageType__Enum__Class** type_info;
        inline app::MoonDebugMessageType__Enum__Class* get_class() {
            return il2cpp::get_class<app::MoonDebugMessageType__Enum__Class>(type_info, "Moon", "MoonDebugMessageType");
        }
        inline app::MoonDebugMessageType__Enum* create() {
            return il2cpp::create_object<app::MoonDebugMessageType__Enum>(get_class());
        }
    } // namespace MoonDebugMessageType__Enum
} // namespace app::classes::types
