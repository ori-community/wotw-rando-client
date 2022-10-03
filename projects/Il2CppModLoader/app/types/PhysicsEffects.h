#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicsEffects {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PhysicsEffects__Class** type_info;
        inline app::PhysicsEffects__Class* get_class() {
            return il2cpp::get_class<app::PhysicsEffects__Class>(type_info, "", "PhysicsEffects");
        }
        inline app::PhysicsEffects* create() {
            return il2cpp::create_object<app::PhysicsEffects>(get_class());
        }
    } // namespace PhysicsEffects
} // namespace app::classes::types
