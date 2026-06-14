#pragma once
#include <Modloader/app/structs/MovingCutsceneState.h>
#include <Modloader/app/structs/MovingCutsceneState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MovingCutsceneState {
        inline app::MovingCutsceneState__Class** type_info() {
            static app::MovingCutsceneState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MovingCutsceneState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MovingCutsceneState__Class* get_class() {
            return il2cpp::get_class<app::MovingCutsceneState__Class>(type_info(), "", "MovingCutsceneState");
        }
        inline app::MovingCutsceneState* create() {
            return il2cpp::create_object<app::MovingCutsceneState>(get_class());
        }
    } // namespace MovingCutsceneState
} // namespace app::classes::types
