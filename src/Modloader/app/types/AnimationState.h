#pragma once
#include <Modloader/app/structs/AnimationState.h>
#include <Modloader/app/structs/AnimationState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationState {
        inline app::AnimationState__Class** type_info() {
            static app::AnimationState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationState__Class**)(modloader::win::memory::resolve_rva(0x0472B288));
            }
            return cache;
        }
        inline app::AnimationState__Class* get_class() {
            return il2cpp::get_class<app::AnimationState__Class>(type_info(), "UnityEngine", "AnimationState");
        }
        inline app::AnimationState* create() {
            return il2cpp::create_object<app::AnimationState>(get_class());
        }
    } // namespace AnimationState
} // namespace app::classes::types
