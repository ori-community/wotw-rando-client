#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicsLimitTest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PhysicsLimitTest__Class** type_info;
        inline app::PhysicsLimitTest__Class* get_class() {
            return il2cpp::get_class<app::PhysicsLimitTest__Class>(type_info, "", "PhysicsLimitTest");
        }
        inline app::PhysicsLimitTest* create() {
            return il2cpp::create_object<app::PhysicsLimitTest>(get_class());
        }
    } // namespace PhysicsLimitTest
} // namespace app::classes::types
