#pragma once
#include <Modloader/app/structs/SandWormEntity_BodyPhysicsMode__Enum.h>
#include <Modloader/app/structs/SandWormEntity_BodyPhysicsMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormEntity_BodyPhysicsMode__Enum {
        inline app::SandWormEntity_BodyPhysicsMode__Enum__Class** type_info() {
            static app::SandWormEntity_BodyPhysicsMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormEntity_BodyPhysicsMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormEntity_BodyPhysicsMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SandWormEntity_BodyPhysicsMode__Enum__Class>(type_info(), "", "SandWormEntity", "BodyPhysicsMode");
        }
        inline app::SandWormEntity_BodyPhysicsMode__Enum* create() {
            return il2cpp::create_object<app::SandWormEntity_BodyPhysicsMode__Enum>(get_class());
        }
    } // namespace SandWormEntity_BodyPhysicsMode__Enum
} // namespace app::classes::types
