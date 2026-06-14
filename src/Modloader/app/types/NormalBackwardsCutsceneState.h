#pragma once
#include <Modloader/app/structs/NormalBackwardsCutsceneState.h>
#include <Modloader/app/structs/NormalBackwardsCutsceneState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NormalBackwardsCutsceneState {
        inline app::NormalBackwardsCutsceneState__Class** type_info() {
            static app::NormalBackwardsCutsceneState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NormalBackwardsCutsceneState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NormalBackwardsCutsceneState__Class* get_class() {
            return il2cpp::get_class<app::NormalBackwardsCutsceneState__Class>(type_info(), "", "NormalBackwardsCutsceneState");
        }
        inline app::NormalBackwardsCutsceneState* create() {
            return il2cpp::create_object<app::NormalBackwardsCutsceneState>(get_class());
        }
    } // namespace NormalBackwardsCutsceneState
} // namespace app::classes::types
