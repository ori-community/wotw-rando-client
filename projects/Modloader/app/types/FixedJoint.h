#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FixedJoint {
        namespace {
            inline app::FixedJoint__Class* type_info_ref = nullptr;
        }
        inline app::FixedJoint__Class** type_info = &type_info_ref;
        inline app::FixedJoint__Class* get_class() {
            return il2cpp::get_class<app::FixedJoint__Class>(type_info, "UnityEngine", "FixedJoint");
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
