#pragma once
#include <Modloader/app/structs/FixedJoint.h>
#include <Modloader/app/structs/FixedJoint__Array.h>
#include <Modloader/app/structs/FixedJoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixedJoint {
        inline app::FixedJoint__Class** type_info() {
            static app::FixedJoint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FixedJoint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FixedJoint__Class* get_class() {
            return il2cpp::get_class<app::FixedJoint__Class>(type_info(), "UnityEngine", "FixedJoint");
        }
        inline app::FixedJoint* create() {
            return il2cpp::create_object<app::FixedJoint>(get_class());
        }
        inline app::FixedJoint__Array* create_array(int size) {
            return il2cpp::array_new<app::FixedJoint__Array>(get_class(), size);
        }
        inline app::FixedJoint__Array* create_array(const std::vector<app::FixedJoint*>& items) {
            return il2cpp::array_new<app::FixedJoint__Array>(get_class(), items);
        }
    } // namespace FixedJoint
} // namespace app::classes::types
