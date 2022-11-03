#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CarryableRigidBody_c {
        inline app::CarryableRigidBody_c__Class** type_info = (app::CarryableRigidBody_c__Class**)(modloader::win::memory::resolve_rva(0x047721C0));
        inline app::CarryableRigidBody_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CarryableRigidBody_c__Class>(type_info, "", "CarryableRigidBody", "<>c");
        }
        inline app::CarryableRigidBody_c* create() {
            return il2cpp::create_object<app::CarryableRigidBody_c>(get_class());
        }
    } // namespace CarryableRigidBody_c
} // namespace app::classes::types
