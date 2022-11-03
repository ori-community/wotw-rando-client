#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneFrameworkDebugger_c {
        inline app::SceneFrameworkDebugger_c__Class** type_info = (app::SceneFrameworkDebugger_c__Class**)(modloader::win::memory::resolve_rva(0x0474B868));
        inline app::SceneFrameworkDebugger_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneFrameworkDebugger_c__Class>(type_info, "", "SceneFrameworkDebugger", "<>c");
        }
        inline app::SceneFrameworkDebugger_c* create() {
            return il2cpp::create_object<app::SceneFrameworkDebugger_c>(get_class());
        }
    } // namespace SceneFrameworkDebugger_c
} // namespace app::classes::types
