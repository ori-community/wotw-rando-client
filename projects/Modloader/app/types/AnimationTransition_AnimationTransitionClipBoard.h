#pragma once
#include <Modloader/app/structs/AnimationTransition_AnimationTransitionClipBoard.h>
#include <Modloader/app/structs/AnimationTransition_AnimationTransitionClipBoard__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationTransition_AnimationTransitionClipBoard {
        inline app::AnimationTransition_AnimationTransitionClipBoard__Class** type_info() {
            static app::AnimationTransition_AnimationTransitionClipBoard__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationTransition_AnimationTransitionClipBoard__Class**)(modloader::win::memory::resolve_rva(0x0472D9A0));
            }
            return cache;
        }
        inline app::AnimationTransition_AnimationTransitionClipBoard__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationTransition_AnimationTransitionClipBoard__Class>(type_info(), "Moon", "AnimationTransition", "AnimationTransitionClipBoard");
        }
        inline app::AnimationTransition_AnimationTransitionClipBoard* create() {
            return il2cpp::create_object<app::AnimationTransition_AnimationTransitionClipBoard>(get_class());
        }
    } // namespace AnimationTransition_AnimationTransitionClipBoard
} // namespace app::classes::types
