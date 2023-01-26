#pragma once
#include <Modloader/app/structs/PressAOrRightCutsceneState.h>
#include <Modloader/app/structs/PressAOrRightCutsceneState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PressAOrRightCutsceneState {
        inline app::PressAOrRightCutsceneState__Class** type_info() {
            static app::PressAOrRightCutsceneState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PressAOrRightCutsceneState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PressAOrRightCutsceneState__Class* get_class() {
            return il2cpp::get_class<app::PressAOrRightCutsceneState__Class>(type_info(), "", "PressAOrRightCutsceneState");
        }
        inline app::PressAOrRightCutsceneState* create() {
            return il2cpp::create_object<app::PressAOrRightCutsceneState>(get_class());
        }
    } // namespace PressAOrRightCutsceneState
} // namespace app::classes::types
