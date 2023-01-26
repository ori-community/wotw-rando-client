#pragma once
#include <Modloader/app/structs/ForceRigidBodyWakeUp.h>
#include <Modloader/app/structs/ForceRigidBodyWakeUp__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ForceRigidBodyWakeUp {
        inline app::ForceRigidBodyWakeUp__Class** type_info() {
            static app::ForceRigidBodyWakeUp__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ForceRigidBodyWakeUp__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ForceRigidBodyWakeUp__Class* get_class() {
            return il2cpp::get_class<app::ForceRigidBodyWakeUp__Class>(type_info(), "", "ForceRigidBodyWakeUp");
        }
        inline app::ForceRigidBodyWakeUp* create() {
            return il2cpp::create_object<app::ForceRigidBodyWakeUp>(get_class());
        }
    } // namespace ForceRigidBodyWakeUp
} // namespace app::classes::types
