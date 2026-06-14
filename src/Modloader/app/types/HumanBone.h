#pragma once
#include <Modloader/app/structs/HumanBone.h>
#include <Modloader/app/structs/HumanBone__Boxed.h>
#include <Modloader/app/structs/HumanBone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HumanBone {
        inline app::HumanBone__Class** type_info() {
            static app::HumanBone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HumanBone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HumanBone__Class* get_class() {
            return il2cpp::get_class<app::HumanBone__Class>(type_info(), "UnityEngine", "HumanBone");
        }
        inline app::HumanBone* create() {
            return il2cpp::create_object<app::HumanBone>(get_class());
        }
        inline app::HumanBone__Boxed* box(app::HumanBone value) {
            return il2cpp::box_value<app::HumanBone__Boxed>(get_class(), value);
        }
    } // namespace HumanBone
} // namespace app::classes::types
