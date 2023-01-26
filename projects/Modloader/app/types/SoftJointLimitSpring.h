#pragma once
#include <Modloader/app/structs/SoftJointLimitSpring.h>
#include <Modloader/app/structs/SoftJointLimitSpring__Boxed.h>
#include <Modloader/app/structs/SoftJointLimitSpring__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoftJointLimitSpring {
        inline app::SoftJointLimitSpring__Class** type_info() {
            static app::SoftJointLimitSpring__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoftJointLimitSpring__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoftJointLimitSpring__Class* get_class() {
            return il2cpp::get_class<app::SoftJointLimitSpring__Class>(type_info(), "UnityEngine", "SoftJointLimitSpring");
        }
        inline app::SoftJointLimitSpring* create() {
            return il2cpp::create_object<app::SoftJointLimitSpring>(get_class());
        }
        inline app::SoftJointLimitSpring__Boxed* box(app::SoftJointLimitSpring value) {
            return il2cpp::box_value<app::SoftJointLimitSpring__Boxed>(get_class(), value);
        }
    } // namespace SoftJointLimitSpring
} // namespace app::classes::types
