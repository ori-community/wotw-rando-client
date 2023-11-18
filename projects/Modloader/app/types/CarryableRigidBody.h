#pragma once
#include <Modloader/app/structs/CarryableRigidBody.h>
#include <Modloader/app/structs/CarryableRigidBody__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CarryableRigidBody {
        inline app::CarryableRigidBody__Class** type_info() {
            static app::CarryableRigidBody__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CarryableRigidBody__Class**)(modloader::win::memory::resolve_rva(0x04710A70));
            }
            return cache;
        }
        inline app::CarryableRigidBody__Class* get_class() {
            return il2cpp::get_class<app::CarryableRigidBody__Class>(type_info(), "", "CarryableRigidBody");
        }
        inline app::CarryableRigidBody* create() {
            return il2cpp::create_object<app::CarryableRigidBody>(get_class());
        }
    } // namespace CarryableRigidBody
} // namespace app::classes::types
