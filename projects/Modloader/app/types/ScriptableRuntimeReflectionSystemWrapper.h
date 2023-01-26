#pragma once
#include <Modloader/app/structs/ScriptableRuntimeReflectionSystemWrapper.h>
#include <Modloader/app/structs/ScriptableRuntimeReflectionSystemWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScriptableRuntimeReflectionSystemWrapper {
        inline app::ScriptableRuntimeReflectionSystemWrapper__Class** type_info() {
            static app::ScriptableRuntimeReflectionSystemWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScriptableRuntimeReflectionSystemWrapper__Class**)(modloader::win::memory::resolve_rva(0x0475C270));
            }
            return cache;
        }
        inline app::ScriptableRuntimeReflectionSystemWrapper__Class* get_class() {
            return il2cpp::get_class<app::ScriptableRuntimeReflectionSystemWrapper__Class>(type_info(), "UnityEngine.Experimental.Rendering", "ScriptableRuntimeReflectionSystemWrapper");
        }
        inline app::ScriptableRuntimeReflectionSystemWrapper* create() {
            return il2cpp::create_object<app::ScriptableRuntimeReflectionSystemWrapper>(get_class());
        }
    } // namespace ScriptableRuntimeReflectionSystemWrapper
} // namespace app::classes::types
