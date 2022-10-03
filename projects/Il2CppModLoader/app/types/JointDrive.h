#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JointDrive {
        namespace {
            app::JointDrive__Class* type_info_ref = nullptr;
        }
        app::JointDrive__Class** type_info = &type_info_ref;
        inline app::JointDrive__Class* get_class() {
            return il2cpp::get_class<app::JointDrive__Class>(type_info, "UnityEngine", "JointDrive");
        }
        inline app::JointDrive* create() {
            return il2cpp::create_object<app::JointDrive>(get_class());
        }
        inline app::JointDrive__Boxed* box(app::JointDrive value) {
            return il2cpp::box_value<app::JointDrive__Boxed>(get_class(), value);
        }
    } // namespace JointDrive
} // namespace app::classes::types
