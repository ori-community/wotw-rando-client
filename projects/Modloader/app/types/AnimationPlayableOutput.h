#pragma once
#include <Modloader/app/structs/AnimationPlayableOutput.h>
#include <Modloader/app/structs/AnimationPlayableOutput__Boxed.h>
#include <Modloader/app/structs/AnimationPlayableOutput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationPlayableOutput {
        inline app::AnimationPlayableOutput__Class** type_info() {
            static app::AnimationPlayableOutput__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationPlayableOutput__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationPlayableOutput__Class* get_class() {
            return il2cpp::get_class<app::AnimationPlayableOutput__Class>(type_info(), "UnityEngine.Animations", "AnimationPlayableOutput");
        }
        inline app::AnimationPlayableOutput* create() {
            return il2cpp::create_object<app::AnimationPlayableOutput>(get_class());
        }
        inline app::AnimationPlayableOutput__Boxed* box(app::AnimationPlayableOutput value) {
            return il2cpp::box_value<app::AnimationPlayableOutput__Boxed>(get_class(), value);
        }
    } // namespace AnimationPlayableOutput
} // namespace app::classes::types
