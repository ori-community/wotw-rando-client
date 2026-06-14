#pragma once
#include <Modloader/app/structs/JointState__Array.h>
#include <Modloader/app/structs/JointState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JointState__Array {
        inline app::JointState__Array__Class** type_info() {
            static app::JointState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JointState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JointState__Array__Class* get_class() {
            return il2cpp::get_class<app::JointState__Array__Class>(type_info(), "", "JointState[]");
        }
        inline app::JointState__Array* create() {
            return il2cpp::create_object<app::JointState__Array>(get_class());
        }
    } // namespace JointState__Array
} // namespace app::classes::types
