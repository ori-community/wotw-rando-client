#pragma once
#include <Modloader/app/structs/HoldRightCutsceneState.h>
#include <Modloader/app/structs/HoldRightCutsceneState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HoldRightCutsceneState {
        inline app::HoldRightCutsceneState__Class** type_info() {
            static app::HoldRightCutsceneState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HoldRightCutsceneState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HoldRightCutsceneState__Class* get_class() {
            return il2cpp::get_class<app::HoldRightCutsceneState__Class>(type_info(), "", "HoldRightCutsceneState");
        }
        inline app::HoldRightCutsceneState* create() {
            return il2cpp::create_object<app::HoldRightCutsceneState>(get_class());
        }
    } // namespace HoldRightCutsceneState
} // namespace app::classes::types
