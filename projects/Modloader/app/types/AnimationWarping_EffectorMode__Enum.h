#pragma once
#include <Modloader/app/structs/AnimationWarping_EffectorMode__Enum.h>
#include <Modloader/app/structs/AnimationWarping_EffectorMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationWarping_EffectorMode__Enum {
        inline app::AnimationWarping_EffectorMode__Enum__Class** type_info() {
            static app::AnimationWarping_EffectorMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationWarping_EffectorMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationWarping_EffectorMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationWarping_EffectorMode__Enum__Class>(type_info(), "RootMotion.Demos", "AnimationWarping", "EffectorMode");
        }
        inline app::AnimationWarping_EffectorMode__Enum* create() {
            return il2cpp::create_object<app::AnimationWarping_EffectorMode__Enum>(get_class());
        }
    } // namespace AnimationWarping_EffectorMode__Enum
} // namespace app::classes::types
