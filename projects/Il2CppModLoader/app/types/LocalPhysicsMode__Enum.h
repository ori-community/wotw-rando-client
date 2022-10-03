#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocalPhysicsMode__Enum {
        namespace {
            app::LocalPhysicsMode__Enum__Class* type_info_ref = nullptr;
        }
        app::LocalPhysicsMode__Enum__Class** type_info = &type_info_ref;
        inline app::LocalPhysicsMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::LocalPhysicsMode__Enum__Class>(type_info, "UnityEngine.SceneManagement", "LocalPhysicsMode");
        }
        inline app::LocalPhysicsMode__Enum* create() {
            return il2cpp::create_object<app::LocalPhysicsMode__Enum>(get_class());
        }
    } // namespace LocalPhysicsMode__Enum
} // namespace app::classes::types
