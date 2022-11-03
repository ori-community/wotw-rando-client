#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicsEffects {
        inline app::PhysicsEffects__Class** type_info = (app::PhysicsEffects__Class**)(modloader::win::memory::resolve_rva(0x0478D418));
        inline app::PhysicsEffects__Class* get_class() {
            return il2cpp::get_class<app::PhysicsEffects__Class>(type_info, "", "PhysicsEffects");
        }
        inline app::PhysicsEffects* create() {
            return il2cpp::create_object<app::PhysicsEffects>(get_class());
        }
    } // namespace PhysicsEffects
} // namespace app::classes::types
