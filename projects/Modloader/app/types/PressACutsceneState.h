#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PressACutsceneState {
        namespace {
            inline app::PressACutsceneState__Class* type_info_ref = nullptr;
        }
        inline app::PressACutsceneState__Class** type_info = &type_info_ref;
        inline app::PressACutsceneState__Class* get_class() {
            return il2cpp::get_class<app::PressACutsceneState__Class>(type_info, "", "PressACutsceneState");
        }
        inline app::PressACutsceneState* create() {
            return il2cpp::create_object<app::PressACutsceneState>(get_class());
        }
    } // namespace PressACutsceneState
} // namespace app::classes::types
