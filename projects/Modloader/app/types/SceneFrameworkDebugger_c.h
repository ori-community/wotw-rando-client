#pragma once
#include <Modloader/app/structs/SceneFrameworkDebugger_c.h>
#include <Modloader/app/structs/SceneFrameworkDebugger_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneFrameworkDebugger_c {
        inline app::SceneFrameworkDebugger_c__Class** type_info() {
            static app::SceneFrameworkDebugger_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneFrameworkDebugger_c__Class**)(modloader::win::memory::resolve_rva(0x0474B868));
            }
            return cache;
        }
        inline app::SceneFrameworkDebugger_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneFrameworkDebugger_c__Class>(type_info(), "", "SceneFrameworkDebugger", "<>c");
        }
        inline app::SceneFrameworkDebugger_c* create() {
            return il2cpp::create_object<app::SceneFrameworkDebugger_c>(get_class());
        }
    } // namespace SceneFrameworkDebugger_c
} // namespace app::classes::types
