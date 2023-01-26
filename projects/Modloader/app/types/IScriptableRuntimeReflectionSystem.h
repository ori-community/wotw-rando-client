#pragma once
#include <Modloader/app/structs/IScriptableRuntimeReflectionSystem.h>
#include <Modloader/app/structs/IScriptableRuntimeReflectionSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IScriptableRuntimeReflectionSystem {
        inline app::IScriptableRuntimeReflectionSystem__Class** type_info() {
            static app::IScriptableRuntimeReflectionSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IScriptableRuntimeReflectionSystem__Class**)(modloader::win::memory::resolve_rva(0x04776CB8));
            }
            return cache;
        }
        inline app::IScriptableRuntimeReflectionSystem__Class* get_class() {
            return il2cpp::get_class<app::IScriptableRuntimeReflectionSystem__Class>(type_info(), "UnityEngine.Experimental.Rendering", "IScriptableRuntimeReflectionSystem");
        }
    } // namespace IScriptableRuntimeReflectionSystem
} // namespace app::classes::types
