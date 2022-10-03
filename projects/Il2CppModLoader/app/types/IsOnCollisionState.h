#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsOnCollisionState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IsOnCollisionState__Class** type_info;
        inline app::IsOnCollisionState__Class* get_class() {
            return il2cpp::get_class<app::IsOnCollisionState__Class>(type_info, "", "IsOnCollisionState");
        }
        inline app::IsOnCollisionState* create() {
            return il2cpp::create_object<app::IsOnCollisionState>(get_class());
        }
    } // namespace IsOnCollisionState
} // namespace app::classes::types
