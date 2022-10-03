#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicsHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PhysicsHelper__Class** type_info;
        inline app::PhysicsHelper__Class* get_class() {
            return il2cpp::get_class<app::PhysicsHelper__Class>(type_info, "", "PhysicsHelper");
        }
        inline app::PhysicsHelper* create() {
            return il2cpp::create_object<app::PhysicsHelper>(get_class());
        }
    } // namespace PhysicsHelper
} // namespace app::classes::types
