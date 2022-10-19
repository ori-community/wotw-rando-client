#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NormalBackwardsCutsceneState {
        namespace {
            inline app::NormalBackwardsCutsceneState__Class* type_info_ref = nullptr;
        }
        inline app::NormalBackwardsCutsceneState__Class** type_info = &type_info_ref;
        inline app::NormalBackwardsCutsceneState__Class* get_class() {
            return il2cpp::get_class<app::NormalBackwardsCutsceneState__Class>(type_info, "", "NormalBackwardsCutsceneState");
        }
        inline app::NormalBackwardsCutsceneState* create() {
            return il2cpp::create_object<app::NormalBackwardsCutsceneState>(get_class());
        }
    } // namespace NormalBackwardsCutsceneState
} // namespace app::classes::types
