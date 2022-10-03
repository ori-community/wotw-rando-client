#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HoldRightCutsceneState {
        namespace {
            app::HoldRightCutsceneState__Class* type_info_ref = nullptr;
        }
        app::HoldRightCutsceneState__Class** type_info = &type_info_ref;
        inline app::HoldRightCutsceneState__Class* get_class() {
            return il2cpp::get_class<app::HoldRightCutsceneState__Class>(type_info, "", "HoldRightCutsceneState");
        }
        inline app::HoldRightCutsceneState* create() {
            return il2cpp::create_object<app::HoldRightCutsceneState>(get_class());
        }
    } // namespace HoldRightCutsceneState
} // namespace app::classes::types
