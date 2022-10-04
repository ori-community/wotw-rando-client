#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IScriptableRuntimeReflectionSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IScriptableRuntimeReflectionSystem__Class** type_info;
        inline app::IScriptableRuntimeReflectionSystem__Class* get_class() {
            return il2cpp::get_class<app::IScriptableRuntimeReflectionSystem__Class>(type_info, "UnityEngine.Experimental.Rendering", "IScriptableRuntimeReflectionSystem");
        }
        inline app::IScriptableRuntimeReflectionSystem* create() {
            return il2cpp::create_object<app::IScriptableRuntimeReflectionSystem>(get_class());
        }
    } // namespace IScriptableRuntimeReflectionSystem
} // namespace app::classes::types
