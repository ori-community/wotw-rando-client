#pragma once
#include <Modloader/app/structs/AnimatorCondition_AnimatorMode__Enum.h>
#include <Modloader/app/structs/AnimatorCondition_AnimatorMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimatorCondition_AnimatorMode__Enum {
        inline app::AnimatorCondition_AnimatorMode__Enum__Class** type_info() {
            static app::AnimatorCondition_AnimatorMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimatorCondition_AnimatorMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimatorCondition_AnimatorMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimatorCondition_AnimatorMode__Enum__Class>(type_info(), "", "AnimatorCondition", "AnimatorMode");
        }
        inline app::AnimatorCondition_AnimatorMode__Enum* create() {
            return il2cpp::create_object<app::AnimatorCondition_AnimatorMode__Enum>(get_class());
        }
    } // namespace AnimatorCondition_AnimatorMode__Enum
} // namespace app::classes::types
