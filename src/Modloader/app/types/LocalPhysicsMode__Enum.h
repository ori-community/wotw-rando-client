#pragma once
#include <Modloader/app/structs/LocalPhysicsMode__Enum.h>
#include <Modloader/app/structs/LocalPhysicsMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocalPhysicsMode__Enum {
        inline app::LocalPhysicsMode__Enum__Class** type_info() {
            static app::LocalPhysicsMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocalPhysicsMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocalPhysicsMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::LocalPhysicsMode__Enum__Class>(type_info(), "UnityEngine.SceneManagement", "LocalPhysicsMode");
        }
        inline app::LocalPhysicsMode__Enum* create() {
            return il2cpp::create_object<app::LocalPhysicsMode__Enum>(get_class());
        }
    } // namespace LocalPhysicsMode__Enum
} // namespace app::classes::types
