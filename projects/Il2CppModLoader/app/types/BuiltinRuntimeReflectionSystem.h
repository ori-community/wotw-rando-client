#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuiltinRuntimeReflectionSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BuiltinRuntimeReflectionSystem__Class** type_info;
        inline app::BuiltinRuntimeReflectionSystem__Class* get_class() {
            return il2cpp::get_class<app::BuiltinRuntimeReflectionSystem__Class>(type_info, "UnityEngine.Experimental.Rendering", "BuiltinRuntimeReflectionSystem");
        }
        inline app::BuiltinRuntimeReflectionSystem* create() {
            return il2cpp::create_object<app::BuiltinRuntimeReflectionSystem>(get_class());
        }
    } // namespace BuiltinRuntimeReflectionSystem
} // namespace app::classes::types
