#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LocalPhysicsMode__Enum {
        namespace {
            inline app::LocalPhysicsMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LocalPhysicsMode__Enum__Class** type_info = &type_info_ref;
        inline app::LocalPhysicsMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::LocalPhysicsMode__Enum__Class>(type_info, "UnityEngine.SceneManagement", "LocalPhysicsMode");
        }
        inline app::LocalPhysicsMode__Enum* create() {
            return il2cpp::create_object<app::LocalPhysicsMode__Enum>(get_class());
        }
    } // namespace LocalPhysicsMode__Enum
} // namespace app::classes::types
