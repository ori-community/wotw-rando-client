#pragma once
#include <Modloader/app/structs/PhysicsDebugRecorder.h>
#include <Modloader/app/structs/PhysicsDebugRecorder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicsDebugRecorder {
        inline app::PhysicsDebugRecorder__Class** type_info() {
            static app::PhysicsDebugRecorder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PhysicsDebugRecorder__Class**)(modloader::win::memory::resolve_rva(0x04782EE0));
            }
            return cache;
        }
        inline app::PhysicsDebugRecorder__Class* get_class() {
            return il2cpp::get_class<app::PhysicsDebugRecorder__Class>(type_info(), "PhysicsDebugTools", "PhysicsDebugRecorder");
        }
        inline app::PhysicsDebugRecorder* create() {
            return il2cpp::create_object<app::PhysicsDebugRecorder>(get_class());
        }
    } // namespace PhysicsDebugRecorder
} // namespace app::classes::types
