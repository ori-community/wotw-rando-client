#pragma once
#include <Modloader/app/structs/PlayAnimationCutsceneState_FacingMode__Enum.h>
#include <Modloader/app/structs/PlayAnimationCutsceneState_FacingMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayAnimationCutsceneState_FacingMode__Enum {
        inline app::PlayAnimationCutsceneState_FacingMode__Enum__Class** type_info() {
            static app::PlayAnimationCutsceneState_FacingMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayAnimationCutsceneState_FacingMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayAnimationCutsceneState_FacingMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayAnimationCutsceneState_FacingMode__Enum__Class>(type_info(), "", "PlayAnimationCutsceneState", "FacingMode");
        }
        inline app::PlayAnimationCutsceneState_FacingMode__Enum* create() {
            return il2cpp::create_object<app::PlayAnimationCutsceneState_FacingMode__Enum>(get_class());
        }
    } // namespace PlayAnimationCutsceneState_FacingMode__Enum
} // namespace app::classes::types
