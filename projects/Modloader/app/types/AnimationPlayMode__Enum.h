#pragma once
#include <Modloader/app/structs/AnimationPlayMode__Enum.h>
#include <Modloader/app/structs/AnimationPlayMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationPlayMode__Enum {
        inline app::AnimationPlayMode__Enum__Class** type_info() {
            static app::AnimationPlayMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationPlayMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationPlayMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::AnimationPlayMode__Enum__Class>(type_info(), "UnityEngine", "AnimationPlayMode");
        }
        inline app::AnimationPlayMode__Enum* create() {
            return il2cpp::create_object<app::AnimationPlayMode__Enum>(get_class());
        }
    } // namespace AnimationPlayMode__Enum
} // namespace app::classes::types
