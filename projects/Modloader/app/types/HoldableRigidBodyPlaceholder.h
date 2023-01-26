#pragma once
#include <Modloader/app/structs/HoldableRigidBodyPlaceholder.h>
#include <Modloader/app/structs/HoldableRigidBodyPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HoldableRigidBodyPlaceholder {
        inline app::HoldableRigidBodyPlaceholder__Class** type_info() {
            static app::HoldableRigidBodyPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HoldableRigidBodyPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HoldableRigidBodyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::HoldableRigidBodyPlaceholder__Class>(type_info(), "", "HoldableRigidBodyPlaceholder");
        }
        inline app::HoldableRigidBodyPlaceholder* create() {
            return il2cpp::create_object<app::HoldableRigidBodyPlaceholder>(get_class());
        }
    } // namespace HoldableRigidBodyPlaceholder
} // namespace app::classes::types
