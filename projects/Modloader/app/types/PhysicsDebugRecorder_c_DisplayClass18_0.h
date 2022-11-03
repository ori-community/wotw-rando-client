#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicsDebugRecorder_c_DisplayClass18_0 {
        inline app::PhysicsDebugRecorder_c_DisplayClass18_0__Class** type_info = (app::PhysicsDebugRecorder_c_DisplayClass18_0__Class**)(modloader::win::memory::resolve_rva(0x04722878));
        inline app::PhysicsDebugRecorder_c_DisplayClass18_0__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicsDebugRecorder_c_DisplayClass18_0__Class>(type_info, "PhysicsDebugTools", "PhysicsDebugRecorder", "<>c__DisplayClass18_0");
        }
        inline app::PhysicsDebugRecorder_c_DisplayClass18_0* create() {
            return il2cpp::create_object<app::PhysicsDebugRecorder_c_DisplayClass18_0>(get_class());
        }
    } // namespace PhysicsDebugRecorder_c_DisplayClass18_0
} // namespace app::classes::types
