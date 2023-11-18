#pragma once
#include <Modloader/app/structs/AnimationPlayer__Array.h>
#include <Modloader/app/structs/AnimationPlayer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationPlayer__Array {
        inline app::AnimationPlayer__Array__Class** type_info() {
            static app::AnimationPlayer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationPlayer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationPlayer__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationPlayer__Array__Class>(type_info(), "Moon", "AnimationPlayer[]");
        }
        inline app::AnimationPlayer__Array* create() {
            return il2cpp::create_object<app::AnimationPlayer__Array>(get_class());
        }
    } // namespace AnimationPlayer__Array
} // namespace app::classes::types
