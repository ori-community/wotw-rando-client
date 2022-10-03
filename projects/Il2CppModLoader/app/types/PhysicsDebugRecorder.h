#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicsDebugRecorder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PhysicsDebugRecorder__Class** type_info;
        inline app::PhysicsDebugRecorder__Class* get_class() {
            return il2cpp::get_class<app::PhysicsDebugRecorder__Class>(type_info, "PhysicsDebugTools", "PhysicsDebugRecorder");
        }
        inline app::PhysicsDebugRecorder* create() {
            return il2cpp::create_object<app::PhysicsDebugRecorder>(get_class());
        }
    } // namespace PhysicsDebugRecorder
} // namespace app::classes::types
