#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HoldRightCutsceneState__Class.h>
#include <Modloader/app/structs/HoldRightCutsceneState.h>

namespace app::classes::types {
    namespace HoldRightCutsceneState {
        namespace {
            inline app::HoldRightCutsceneState__Class* type_info_ref = nullptr;
        }
        inline app::HoldRightCutsceneState__Class** type_info = &type_info_ref;
        inline app::HoldRightCutsceneState__Class* get_class() {
            return il2cpp::get_class<app::HoldRightCutsceneState__Class>(type_info, "", "HoldRightCutsceneState");
        }
        inline app::HoldRightCutsceneState* create() {
            return il2cpp::create_object<app::HoldRightCutsceneState>(get_class());
        }
    } // namespace HoldRightCutsceneState
} // namespace app::classes::types
