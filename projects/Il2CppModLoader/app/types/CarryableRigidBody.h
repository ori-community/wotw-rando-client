#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CarryableRigidBody {
        inline app::CarryableRigidBody__Class** type_info = (app::CarryableRigidBody__Class**)(modloader::win::memory::resolve_rva(0x04710A70));
        inline app::CarryableRigidBody__Class* get_class() {
            return il2cpp::get_class<app::CarryableRigidBody__Class>(type_info, "", "CarryableRigidBody");
        }
        inline app::CarryableRigidBody* create() {
            return il2cpp::create_object<app::CarryableRigidBody>(get_class());
        }
    } // namespace CarryableRigidBody
} // namespace app::classes::types
