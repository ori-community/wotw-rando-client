#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CutsceneButtonPressedTransition_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CutsceneButtonPressedTransition_c__Class** type_info;
        inline app::CutsceneButtonPressedTransition_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CutsceneButtonPressedTransition_c__Class>(type_info, "", "CutsceneButtonPressedTransition", "<>c");
        }
        inline app::CutsceneButtonPressedTransition_c* create() {
            return il2cpp::create_object<app::CutsceneButtonPressedTransition_c>(get_class());
        }
    } // namespace CutsceneButtonPressedTransition_c
} // namespace app::classes::types
