#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicsUtils {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PhysicsUtils__Class** type_info;
        inline app::PhysicsUtils__Class* get_class() {
            return il2cpp::get_class<app::PhysicsUtils__Class>(type_info, "", "PhysicsUtils");
        }
        inline app::PhysicsUtils* create() {
            return il2cpp::create_object<app::PhysicsUtils>(get_class());
        }
    } // namespace PhysicsUtils
} // namespace app::classes::types
