#pragma once
#include <Modloader/app/structs/JointDrive.h>
#include <Modloader/app/structs/JointDrive__Boxed.h>
#include <Modloader/app/structs/JointDrive__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JointDrive {
        inline app::JointDrive__Class** type_info() {
            static app::JointDrive__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JointDrive__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JointDrive__Class* get_class() {
            return il2cpp::get_class<app::JointDrive__Class>(type_info(), "UnityEngine", "JointDrive");
        }
        inline app::JointDrive* create() {
            return il2cpp::create_object<app::JointDrive>(get_class());
        }
        inline app::JointDrive__Boxed* box(app::JointDrive value) {
            return il2cpp::box_value<app::JointDrive__Boxed>(get_class(), value);
        }
    } // namespace JointDrive
} // namespace app::classes::types
