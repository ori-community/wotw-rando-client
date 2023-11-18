#pragma once
#include <Modloader/app/structs/BuiltinRuntimeReflectionSystem.h>
#include <Modloader/app/structs/BuiltinRuntimeReflectionSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuiltinRuntimeReflectionSystem {
        inline app::BuiltinRuntimeReflectionSystem__Class** type_info() {
            static app::BuiltinRuntimeReflectionSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BuiltinRuntimeReflectionSystem__Class**)(modloader::win::memory::resolve_rva(0x0477E0D8));
            }
            return cache;
        }
        inline app::BuiltinRuntimeReflectionSystem__Class* get_class() {
            return il2cpp::get_class<app::BuiltinRuntimeReflectionSystem__Class>(type_info(), "UnityEngine.Experimental.Rendering", "BuiltinRuntimeReflectionSystem");
        }
        inline app::BuiltinRuntimeReflectionSystem* create() {
            return il2cpp::create_object<app::BuiltinRuntimeReflectionSystem>(get_class());
        }
    } // namespace BuiltinRuntimeReflectionSystem
} // namespace app::classes::types
