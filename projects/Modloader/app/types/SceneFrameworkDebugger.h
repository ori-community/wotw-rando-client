#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneFrameworkDebugger {
        inline app::SceneFrameworkDebugger__Class** type_info = (app::SceneFrameworkDebugger__Class**)(modloader::win::memory::resolve_rva(0x0476C368));
        inline app::SceneFrameworkDebugger__Class* get_class() {
            return il2cpp::get_class<app::SceneFrameworkDebugger__Class>(type_info, "", "SceneFrameworkDebugger");
        }
        inline app::SceneFrameworkDebugger* create() {
            return il2cpp::create_object<app::SceneFrameworkDebugger>(get_class());
        }
    } // namespace SceneFrameworkDebugger
} // namespace app::classes::types
