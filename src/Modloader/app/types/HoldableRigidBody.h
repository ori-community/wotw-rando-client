#pragma once
#include <Modloader/app/structs/HoldableRigidBody.h>
#include <Modloader/app/structs/HoldableRigidBody__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HoldableRigidBody {
        inline app::HoldableRigidBody__Class** type_info() {
            static app::HoldableRigidBody__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HoldableRigidBody__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HoldableRigidBody__Class* get_class() {
            return il2cpp::get_class<app::HoldableRigidBody__Class>(type_info(), "", "HoldableRigidBody");
        }
        inline app::HoldableRigidBody* create() {
            return il2cpp::create_object<app::HoldableRigidBody>(get_class());
        }
    } // namespace HoldableRigidBody
} // namespace app::classes::types
