#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IsOnCollisionState {
        inline app::IsOnCollisionState__Class** type_info = (app::IsOnCollisionState__Class**)(modloader::win::memory::resolve_rva(0x04790050));
        inline app::IsOnCollisionState__Class* get_class() {
            return il2cpp::get_class<app::IsOnCollisionState__Class>(type_info, "", "IsOnCollisionState");
        }
        inline app::IsOnCollisionState* create() {
            return il2cpp::create_object<app::IsOnCollisionState>(get_class());
        }
    } // namespace IsOnCollisionState
} // namespace app::classes::types
