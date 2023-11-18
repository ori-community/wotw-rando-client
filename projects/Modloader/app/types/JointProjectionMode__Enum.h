#pragma once
#include <Modloader/app/structs/JointProjectionMode__Enum.h>
#include <Modloader/app/structs/JointProjectionMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JointProjectionMode__Enum {
        inline app::JointProjectionMode__Enum__Class** type_info() {
            static app::JointProjectionMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JointProjectionMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JointProjectionMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::JointProjectionMode__Enum__Class>(type_info(), "UnityEngine", "JointProjectionMode");
        }
        inline app::JointProjectionMode__Enum* create() {
            return il2cpp::create_object<app::JointProjectionMode__Enum>(get_class());
        }
    } // namespace JointProjectionMode__Enum
} // namespace app::classes::types
