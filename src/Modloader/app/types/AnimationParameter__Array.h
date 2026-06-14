#pragma once
#include <Modloader/app/structs/AnimationParameter__Array.h>
#include <Modloader/app/structs/AnimationParameter__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationParameter__Array {
        inline app::AnimationParameter__Array__Class** type_info() {
            static app::AnimationParameter__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationParameter__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationParameter__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationParameter__Array__Class>(type_info(), "Moon", "AnimationParameter[]");
        }
        inline app::AnimationParameter__Array* create() {
            return il2cpp::create_object<app::AnimationParameter__Array>(get_class());
        }
    } // namespace AnimationParameter__Array
} // namespace app::classes::types
