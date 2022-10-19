#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CutsceneButtonPressedTransition {
        namespace {
            inline app::CutsceneButtonPressedTransition__Class* type_info_ref = nullptr;
        }
        inline app::CutsceneButtonPressedTransition__Class** type_info = &type_info_ref;
        inline app::CutsceneButtonPressedTransition__Class* get_class() {
            return il2cpp::get_class<app::CutsceneButtonPressedTransition__Class>(type_info, "", "CutsceneButtonPressedTransition");
        }
        inline app::CutsceneButtonPressedTransition* create() {
            return il2cpp::create_object<app::CutsceneButtonPressedTransition>(get_class());
        }
    } // namespace CutsceneButtonPressedTransition
} // namespace app::classes::types
