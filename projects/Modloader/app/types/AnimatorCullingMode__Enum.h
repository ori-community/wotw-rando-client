#pragma once
#include <Modloader/app/structs/AnimatorCullingMode__Enum.h>
#include <Modloader/app/structs/AnimatorCullingMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimatorCullingMode__Enum {
        inline app::AnimatorCullingMode__Enum__Class** type_info() {
            static app::AnimatorCullingMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimatorCullingMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimatorCullingMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::AnimatorCullingMode__Enum__Class>(type_info(), "UnityEngine", "AnimatorCullingMode");
        }
        inline app::AnimatorCullingMode__Enum* create() {
            return il2cpp::create_object<app::AnimatorCullingMode__Enum>(get_class());
        }
    } // namespace AnimatorCullingMode__Enum
} // namespace app::classes::types
