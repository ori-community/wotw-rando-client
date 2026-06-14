#pragma once
#include <Modloader/app/structs/CutsceneButtonPressedTransition.h>
#include <Modloader/app/structs/CutsceneButtonPressedTransition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CutsceneButtonPressedTransition {
        inline app::CutsceneButtonPressedTransition__Class** type_info() {
            static app::CutsceneButtonPressedTransition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CutsceneButtonPressedTransition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CutsceneButtonPressedTransition__Class* get_class() {
            return il2cpp::get_class<app::CutsceneButtonPressedTransition__Class>(type_info(), "", "CutsceneButtonPressedTransition");
        }
        inline app::CutsceneButtonPressedTransition* create() {
            return il2cpp::create_object<app::CutsceneButtonPressedTransition>(get_class());
        }
    } // namespace CutsceneButtonPressedTransition
} // namespace app::classes::types
