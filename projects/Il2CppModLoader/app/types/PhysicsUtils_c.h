#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicsUtils_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PhysicsUtils_c__Class** type_info;
        inline app::PhysicsUtils_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicsUtils_c__Class>(type_info, "", "PhysicsUtils", "<>c");
        }
        inline app::PhysicsUtils_c* create() {
            return il2cpp::create_object<app::PhysicsUtils_c>(get_class());
        }
    } // namespace PhysicsUtils_c
} // namespace app::classes::types
