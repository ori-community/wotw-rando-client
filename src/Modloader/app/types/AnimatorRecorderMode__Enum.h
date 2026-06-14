#pragma once
#include <Modloader/app/structs/AnimatorRecorderMode__Enum.h>
#include <Modloader/app/structs/AnimatorRecorderMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimatorRecorderMode__Enum {
        inline app::AnimatorRecorderMode__Enum__Class** type_info() {
            static app::AnimatorRecorderMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimatorRecorderMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimatorRecorderMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::AnimatorRecorderMode__Enum__Class>(type_info(), "UnityEngine", "AnimatorRecorderMode");
        }
        inline app::AnimatorRecorderMode__Enum* create() {
            return il2cpp::create_object<app::AnimatorRecorderMode__Enum>(get_class());
        }
    } // namespace AnimatorRecorderMode__Enum
} // namespace app::classes::types
