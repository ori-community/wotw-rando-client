#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicsUtils_Mask__Enum {
        namespace {
            app::PhysicsUtils_Mask__Enum__Class* type_info_ref = nullptr;
        }
        app::PhysicsUtils_Mask__Enum__Class** type_info = &type_info_ref;
        inline app::PhysicsUtils_Mask__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicsUtils_Mask__Enum__Class>(type_info, "", "PhysicsUtils", "Mask");
        }
        inline app::PhysicsUtils_Mask__Enum* create() {
            return il2cpp::create_object<app::PhysicsUtils_Mask__Enum>(get_class());
        }
    } // namespace PhysicsUtils_Mask__Enum
} // namespace app::classes::types
