#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayAnimationCutsceneState_FacingMode__Enum {
        namespace {
            inline app::PlayAnimationCutsceneState_FacingMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PlayAnimationCutsceneState_FacingMode__Enum__Class** type_info = &type_info_ref;
        inline app::PlayAnimationCutsceneState_FacingMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayAnimationCutsceneState_FacingMode__Enum__Class>(type_info, "", "PlayAnimationCutsceneState", "FacingMode");
        }
        inline app::PlayAnimationCutsceneState_FacingMode__Enum* create() {
            return il2cpp::create_object<app::PlayAnimationCutsceneState_FacingMode__Enum>(get_class());
        }
    } // namespace PlayAnimationCutsceneState_FacingMode__Enum
} // namespace app::classes::types
