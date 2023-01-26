#pragma once
#include <Modloader/app/structs/AnimationPostprocess__Array.h>
#include <Modloader/app/structs/AnimationPostprocess__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationPostprocess__Array {
        inline app::AnimationPostprocess__Array__Class** type_info() {
            static app::AnimationPostprocess__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationPostprocess__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationPostprocess__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationPostprocess__Array__Class>(type_info(), "Moon", "AnimationPostprocess[]");
        }
        inline app::AnimationPostprocess__Array* create() {
            return il2cpp::create_object<app::AnimationPostprocess__Array>(get_class());
        }
    } // namespace AnimationPostprocess__Array
} // namespace app::classes::types
