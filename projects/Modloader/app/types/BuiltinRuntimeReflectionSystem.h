#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BuiltinRuntimeReflectionSystem {
        inline app::BuiltinRuntimeReflectionSystem__Class** type_info = (app::BuiltinRuntimeReflectionSystem__Class**)(modloader::win::memory::resolve_rva(0x0477E0D8));
        inline app::BuiltinRuntimeReflectionSystem__Class* get_class() {
            return il2cpp::get_class<app::BuiltinRuntimeReflectionSystem__Class>(type_info, "UnityEngine.Experimental.Rendering", "BuiltinRuntimeReflectionSystem");
        }
        inline app::BuiltinRuntimeReflectionSystem* create() {
            return il2cpp::create_object<app::BuiltinRuntimeReflectionSystem>(get_class());
        }
    } // namespace BuiltinRuntimeReflectionSystem
} // namespace app::classes::types
