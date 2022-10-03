#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PressAOrRightCutsceneState {
        namespace {
            app::PressAOrRightCutsceneState__Class* type_info_ref = nullptr;
        }
        app::PressAOrRightCutsceneState__Class** type_info = &type_info_ref;
        inline app::PressAOrRightCutsceneState__Class* get_class() {
            return il2cpp::get_class<app::PressAOrRightCutsceneState__Class>(type_info, "", "PressAOrRightCutsceneState");
        }
        inline app::PressAOrRightCutsceneState* create() {
            return il2cpp::create_object<app::PressAOrRightCutsceneState>(get_class());
        }
    } // namespace PressAOrRightCutsceneState
} // namespace app::classes::types
