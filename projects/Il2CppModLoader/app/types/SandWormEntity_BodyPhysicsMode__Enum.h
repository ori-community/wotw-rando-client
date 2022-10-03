#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormEntity_BodyPhysicsMode__Enum {
        namespace {
            app::SandWormEntity_BodyPhysicsMode__Enum__Class* type_info_ref = nullptr;
        }
        app::SandWormEntity_BodyPhysicsMode__Enum__Class** type_info = &type_info_ref;
        inline app::SandWormEntity_BodyPhysicsMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SandWormEntity_BodyPhysicsMode__Enum__Class>(type_info, "", "SandWormEntity", "BodyPhysicsMode");
        }
        inline app::SandWormEntity_BodyPhysicsMode__Enum* create() {
            return il2cpp::create_object<app::SandWormEntity_BodyPhysicsMode__Enum>(get_class());
        }
    } // namespace SandWormEntity_BodyPhysicsMode__Enum
} // namespace app::classes::types
