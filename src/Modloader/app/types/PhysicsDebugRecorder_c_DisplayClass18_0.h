#pragma once
#include <Modloader/app/structs/PhysicsDebugRecorder_c_DisplayClass18_0.h>
#include <Modloader/app/structs/PhysicsDebugRecorder_c_DisplayClass18_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicsDebugRecorder_c_DisplayClass18_0 {
        inline app::PhysicsDebugRecorder_c_DisplayClass18_0__Class** type_info() {
            static app::PhysicsDebugRecorder_c_DisplayClass18_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PhysicsDebugRecorder_c_DisplayClass18_0__Class**)(modloader::win::memory::resolve_rva(0x04722878));
            }
            return cache;
        }
        inline app::PhysicsDebugRecorder_c_DisplayClass18_0__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicsDebugRecorder_c_DisplayClass18_0__Class>(type_info(), "PhysicsDebugTools", "PhysicsDebugRecorder", "<>c__DisplayClass18_0");
        }
        inline app::PhysicsDebugRecorder_c_DisplayClass18_0* create() {
            return il2cpp::create_object<app::PhysicsDebugRecorder_c_DisplayClass18_0>(get_class());
        }
    } // namespace PhysicsDebugRecorder_c_DisplayClass18_0
} // namespace app::classes::types
