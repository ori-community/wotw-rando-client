#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PressAOrRightCutsceneState__Class.h>
#include <Modloader/app/structs/PressAOrRightCutsceneState.h>

namespace app::classes::types {
    namespace PressAOrRightCutsceneState {
        namespace {
            inline app::PressAOrRightCutsceneState__Class* type_info_ref = nullptr;
        }
        inline app::PressAOrRightCutsceneState__Class** type_info = &type_info_ref;
        inline app::PressAOrRightCutsceneState__Class* get_class() {
            return il2cpp::get_class<app::PressAOrRightCutsceneState__Class>(type_info, "", "PressAOrRightCutsceneState");
        }
        inline app::PressAOrRightCutsceneState* create() {
            return il2cpp::create_object<app::PressAOrRightCutsceneState>(get_class());
        }
    } // namespace PressAOrRightCutsceneState
} // namespace app::classes::types
