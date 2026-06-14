#pragma once
#include <Modloader/app/structs/FixedJoint__Array.h>
#include <Modloader/app/structs/FixedJoint__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixedJoint__Array {
        inline app::FixedJoint__Array__Class** type_info() {
            static app::FixedJoint__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FixedJoint__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FixedJoint__Array__Class* get_class() {
            return il2cpp::get_class<app::FixedJoint__Array__Class>(type_info(), "UnityEngine", "FixedJoint[]");
        }
        inline app::FixedJoint__Array* create() {
            return il2cpp::create_object<app::FixedJoint__Array>(get_class());
        }
    } // namespace FixedJoint__Array
} // namespace app::classes::types
