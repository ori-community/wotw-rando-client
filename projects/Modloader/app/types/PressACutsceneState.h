#pragma once
#include <Modloader/app/structs/PressACutsceneState.h>
#include <Modloader/app/structs/PressACutsceneState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PressACutsceneState {
        inline app::PressACutsceneState__Class** type_info() {
            static app::PressACutsceneState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PressACutsceneState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PressACutsceneState__Class* get_class() {
            return il2cpp::get_class<app::PressACutsceneState__Class>(type_info(), "", "PressACutsceneState");
        }
        inline app::PressACutsceneState* create() {
            return il2cpp::create_object<app::PressACutsceneState>(get_class());
        }
    } // namespace PressACutsceneState
} // namespace app::classes::types
