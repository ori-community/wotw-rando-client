#pragma once
#include <Modloader/app/structs/AnimationEntry__Array.h>
#include <Modloader/app/structs/AnimationEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationEntry__Array {
        inline app::AnimationEntry__Array__Class** type_info() {
            static app::AnimationEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationEntry__Array__Class>(type_info(), "", "AnimationEntry[]");
        }
        inline app::AnimationEntry__Array* create() {
            return il2cpp::create_object<app::AnimationEntry__Array>(get_class());
        }
    } // namespace AnimationEntry__Array
} // namespace app::classes::types
