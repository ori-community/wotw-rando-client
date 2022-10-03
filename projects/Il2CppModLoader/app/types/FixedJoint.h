#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FixedJoint {
        namespace {
            app::FixedJoint__Class* type_info_ref = nullptr;
        }
        app::FixedJoint__Class** type_info = &type_info_ref;
        inline app::FixedJoint__Class* get_class() {
            return il2cpp::get_class<app::FixedJoint__Class>(type_info, "UnityEngine", "FixedJoint");
        }
        inline app::FixedJoint* create() {
            return il2cpp::create_object<app::FixedJoint>(get_class());
        }
        inline app::FixedJoint__Array* create_array(int size) {
            return il2cpp::array_new<app::FixedJoint__Array>(get_class(), size);
        }
    } // namespace FixedJoint
} // namespace app::classes::types
