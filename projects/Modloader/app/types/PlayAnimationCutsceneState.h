#pragma once
#include <Modloader/app/structs/PlayAnimationCutsceneState.h>
#include <Modloader/app/structs/PlayAnimationCutsceneState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayAnimationCutsceneState {
        inline app::PlayAnimationCutsceneState__Class** type_info() {
            static app::PlayAnimationCutsceneState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayAnimationCutsceneState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayAnimationCutsceneState__Class* get_class() {
            return il2cpp::get_class<app::PlayAnimationCutsceneState__Class>(type_info(), "", "PlayAnimationCutsceneState");
        }
        inline app::PlayAnimationCutsceneState* create() {
            return il2cpp::create_object<app::PlayAnimationCutsceneState>(get_class());
        }
    } // namespace PlayAnimationCutsceneState
} // namespace app::classes::types
