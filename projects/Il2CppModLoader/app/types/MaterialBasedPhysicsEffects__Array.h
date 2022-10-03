#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaterialBasedPhysicsEffects__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MaterialBasedPhysicsEffects__Array__Class** type_info;
        inline app::MaterialBasedPhysicsEffects__Array__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedPhysicsEffects__Array__Class>(type_info, "", "MaterialBasedPhysicsEffects[]");
        }
        inline app::MaterialBasedPhysicsEffects__Array* create() {
            return il2cpp::create_object<app::MaterialBasedPhysicsEffects__Array>(get_class());
        }
    } // namespace MaterialBasedPhysicsEffects__Array
} // namespace app::classes::types
