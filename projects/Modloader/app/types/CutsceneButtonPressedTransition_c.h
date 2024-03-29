#pragma once
#include <Modloader/app/structs/CutsceneButtonPressedTransition_c.h>
#include <Modloader/app/structs/CutsceneButtonPressedTransition_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CutsceneButtonPressedTransition_c {
        inline app::CutsceneButtonPressedTransition_c__Class** type_info() {
            static app::CutsceneButtonPressedTransition_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CutsceneButtonPressedTransition_c__Class**)(modloader::win::memory::resolve_rva(0x04741048));
            }
            return cache;
        }
        inline app::CutsceneButtonPressedTransition_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CutsceneButtonPressedTransition_c__Class>(type_info(), "", "CutsceneButtonPressedTransition", "<>c");
        }
        inline app::CutsceneButtonPressedTransition_c* create() {
            return il2cpp::create_object<app::CutsceneButtonPressedTransition_c>(get_class());
        }
    } // namespace CutsceneButtonPressedTransition_c
} // namespace app::classes::types
