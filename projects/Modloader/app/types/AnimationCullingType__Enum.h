#pragma once
#include <Modloader/app/structs/AnimationCullingType__Enum.h>
#include <Modloader/app/structs/AnimationCullingType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationCullingType__Enum {
        inline app::AnimationCullingType__Enum__Class** type_info() {
            static app::AnimationCullingType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationCullingType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationCullingType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AnimationCullingType__Enum__Class>(type_info(), "UnityEngine", "AnimationCullingType");
        }
        inline app::AnimationCullingType__Enum* create() {
            return il2cpp::create_object<app::AnimationCullingType__Enum>(get_class());
        }
    } // namespace AnimationCullingType__Enum
} // namespace app::classes::types
