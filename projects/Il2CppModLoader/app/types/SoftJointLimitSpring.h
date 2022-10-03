#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoftJointLimitSpring {
        namespace {
            app::SoftJointLimitSpring__Class* type_info_ref = nullptr;
        }
        app::SoftJointLimitSpring__Class** type_info = &type_info_ref;
        inline app::SoftJointLimitSpring__Class* get_class() {
            return il2cpp::get_class<app::SoftJointLimitSpring__Class>(type_info, "UnityEngine", "SoftJointLimitSpring");
        }
        inline app::SoftJointLimitSpring* create() {
            return il2cpp::create_object<app::SoftJointLimitSpring>(get_class());
        }
        inline app::SoftJointLimitSpring__Boxed* box(app::SoftJointLimitSpring value) {
            return il2cpp::box_value<app::SoftJointLimitSpring__Boxed>(get_class(), value);
        }
    } // namespace SoftJointLimitSpring
} // namespace app::classes::types
