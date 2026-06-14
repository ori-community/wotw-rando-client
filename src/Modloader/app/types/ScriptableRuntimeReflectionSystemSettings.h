#pragma once
#include <Modloader/app/structs/ScriptableRuntimeReflectionSystemSettings.h>
#include <Modloader/app/structs/ScriptableRuntimeReflectionSystemSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScriptableRuntimeReflectionSystemSettings {
        inline app::ScriptableRuntimeReflectionSystemSettings__Class** type_info() {
            static app::ScriptableRuntimeReflectionSystemSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScriptableRuntimeReflectionSystemSettings__Class**)(modloader::win::memory::resolve_rva(0x0475BB28));
            }
            return cache;
        }
        inline app::ScriptableRuntimeReflectionSystemSettings__Class* get_class() {
            return il2cpp::get_class<app::ScriptableRuntimeReflectionSystemSettings__Class>(type_info(), "UnityEngine.Experimental.Rendering", "ScriptableRuntimeReflectionSystemSettings");
        }
        inline app::ScriptableRuntimeReflectionSystemSettings* create() {
            return il2cpp::create_object<app::ScriptableRuntimeReflectionSystemSettings>(get_class());
        }
    } // namespace ScriptableRuntimeReflectionSystemSettings
} // namespace app::classes::types
