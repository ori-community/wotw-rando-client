#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationTransition_AnimationTransitionClipBoard {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationTransition_AnimationTransitionClipBoard__Class** type_info;
        inline app::AnimationTransition_AnimationTransitionClipBoard__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationTransition_AnimationTransitionClipBoard__Class>(type_info, "Moon", "AnimationTransition", "AnimationTransitionClipBoard");
        }
        inline app::AnimationTransition_AnimationTransitionClipBoard* create() {
            return il2cpp::create_object<app::AnimationTransition_AnimationTransitionClipBoard>(get_class());
        }
    } // namespace AnimationTransition_AnimationTransitionClipBoard
} // namespace app::classes::types
