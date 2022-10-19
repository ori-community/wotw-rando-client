#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationPlayableOutput {
        namespace {
            inline app::AnimationPlayableOutput__Class* type_info_ref = nullptr;
        }
        inline app::AnimationPlayableOutput__Class** type_info = &type_info_ref;
        inline app::AnimationPlayableOutput__Class* get_class() {
            return il2cpp::get_class<app::AnimationPlayableOutput__Class>(type_info, "UnityEngine.Animations", "AnimationPlayableOutput");
        }
        inline app::AnimationPlayableOutput* create() {
            return il2cpp::create_object<app::AnimationPlayableOutput>(get_class());
        }
        inline app::AnimationPlayableOutput__Boxed* box(app::AnimationPlayableOutput value) {
            return il2cpp::box_value<app::AnimationPlayableOutput__Boxed>(get_class(), value);
        }
    } // namespace AnimationPlayableOutput
} // namespace app::classes::types
