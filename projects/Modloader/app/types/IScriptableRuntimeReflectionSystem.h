#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IScriptableRuntimeReflectionSystem {
        inline app::IScriptableRuntimeReflectionSystem__Class** type_info = (app::IScriptableRuntimeReflectionSystem__Class**)(modloader::win::memory::resolve_rva(0x04776CB8));
        inline app::IScriptableRuntimeReflectionSystem__Class* get_class() {
            return il2cpp::get_class<app::IScriptableRuntimeReflectionSystem__Class>(type_info, "UnityEngine.Experimental.Rendering", "IScriptableRuntimeReflectionSystem");
        }
    } // namespace IScriptableRuntimeReflectionSystem
} // namespace app::classes::types
