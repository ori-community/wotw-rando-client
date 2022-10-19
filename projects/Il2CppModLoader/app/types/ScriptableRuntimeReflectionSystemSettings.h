#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScriptableRuntimeReflectionSystemSettings {
        inline app::ScriptableRuntimeReflectionSystemSettings__Class** type_info = (app::ScriptableRuntimeReflectionSystemSettings__Class**)(modloader::win::memory::resolve_rva(0x0475BB28));
        inline app::ScriptableRuntimeReflectionSystemSettings__Class* get_class() {
            return il2cpp::get_class<app::ScriptableRuntimeReflectionSystemSettings__Class>(type_info, "UnityEngine.Experimental.Rendering", "ScriptableRuntimeReflectionSystemSettings");
        }
        inline app::ScriptableRuntimeReflectionSystemSettings* create() {
            return il2cpp::create_object<app::ScriptableRuntimeReflectionSystemSettings>(get_class());
        }
    } // namespace ScriptableRuntimeReflectionSystemSettings
} // namespace app::classes::types
