#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScriptableRuntimeReflectionSystemWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScriptableRuntimeReflectionSystemWrapper__Class** type_info;
        inline app::ScriptableRuntimeReflectionSystemWrapper__Class* get_class() {
            return il2cpp::get_class<app::ScriptableRuntimeReflectionSystemWrapper__Class>(type_info, "UnityEngine.Experimental.Rendering", "ScriptableRuntimeReflectionSystemWrapper");
        }
        inline app::ScriptableRuntimeReflectionSystemWrapper* create() {
            return il2cpp::create_object<app::ScriptableRuntimeReflectionSystemWrapper>(get_class());
        }
    } // namespace ScriptableRuntimeReflectionSystemWrapper
} // namespace app::classes::types
