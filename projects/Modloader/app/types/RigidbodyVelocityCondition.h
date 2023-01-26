#pragma once
#include <Modloader/app/structs/RigidbodyVelocityCondition.h>
#include <Modloader/app/structs/RigidbodyVelocityCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RigidbodyVelocityCondition {
        inline app::RigidbodyVelocityCondition__Class** type_info() {
            static app::RigidbodyVelocityCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RigidbodyVelocityCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RigidbodyVelocityCondition__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyVelocityCondition__Class>(type_info(), "", "RigidbodyVelocityCondition");
        }
        inline app::RigidbodyVelocityCondition* create() {
            return il2cpp::create_object<app::RigidbodyVelocityCondition>(get_class());
        }
    } // namespace RigidbodyVelocityCondition
} // namespace app::classes::types
