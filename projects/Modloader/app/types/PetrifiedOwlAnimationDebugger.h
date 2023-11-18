#pragma once
#include <Modloader/app/structs/PetrifiedOwlAnimationDebugger.h>
#include <Modloader/app/structs/PetrifiedOwlAnimationDebugger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlAnimationDebugger {
        inline app::PetrifiedOwlAnimationDebugger__Class** type_info() {
            static app::PetrifiedOwlAnimationDebugger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlAnimationDebugger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlAnimationDebugger__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlAnimationDebugger__Class>(type_info(), "Moon", "PetrifiedOwlAnimationDebugger");
        }
        inline app::PetrifiedOwlAnimationDebugger* create() {
            return il2cpp::create_object<app::PetrifiedOwlAnimationDebugger>(get_class());
        }
    } // namespace PetrifiedOwlAnimationDebugger
} // namespace app::classes::types
