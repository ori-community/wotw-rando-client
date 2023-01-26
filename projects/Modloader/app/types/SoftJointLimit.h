#pragma once
#include <Modloader/app/structs/SoftJointLimit.h>
#include <Modloader/app/structs/SoftJointLimit__Boxed.h>
#include <Modloader/app/structs/SoftJointLimit__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoftJointLimit {
        inline app::SoftJointLimit__Class** type_info() {
            static app::SoftJointLimit__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoftJointLimit__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoftJointLimit__Class* get_class() {
            return il2cpp::get_class<app::SoftJointLimit__Class>(type_info(), "UnityEngine", "SoftJointLimit");
        }
        inline app::SoftJointLimit* create() {
            return il2cpp::create_object<app::SoftJointLimit>(get_class());
        }
        inline app::SoftJointLimit__Boxed* box(app::SoftJointLimit value) {
            return il2cpp::box_value<app::SoftJointLimit__Boxed>(get_class(), value);
        }
    } // namespace SoftJointLimit
} // namespace app::classes::types
