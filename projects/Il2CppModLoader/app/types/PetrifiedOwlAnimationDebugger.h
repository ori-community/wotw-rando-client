#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlAnimationDebugger {
        namespace {
            app::PetrifiedOwlAnimationDebugger__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlAnimationDebugger__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlAnimationDebugger__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlAnimationDebugger__Class>(type_info, "Moon", "PetrifiedOwlAnimationDebugger");
        }
        inline app::PetrifiedOwlAnimationDebugger* create() {
            return il2cpp::create_object<app::PetrifiedOwlAnimationDebugger>(get_class());
        }
    } // namespace PetrifiedOwlAnimationDebugger
} // namespace app::classes::types
