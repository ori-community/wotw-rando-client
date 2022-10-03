#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HumanBone {
        namespace {
            app::HumanBone__Class* type_info_ref = nullptr;
        }
        app::HumanBone__Class** type_info = &type_info_ref;
        inline app::HumanBone__Class* get_class() {
            return il2cpp::get_class<app::HumanBone__Class>(type_info, "UnityEngine", "HumanBone");
        }
        inline app::HumanBone* create() {
            return il2cpp::create_object<app::HumanBone>(get_class());
        }
        inline app::HumanBone__Boxed* box(app::HumanBone value) {
            return il2cpp::box_value<app::HumanBone__Boxed>(get_class(), value);
        }
    } // namespace HumanBone
} // namespace app::classes::types
