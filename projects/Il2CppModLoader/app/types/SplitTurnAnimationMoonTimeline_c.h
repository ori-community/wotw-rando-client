#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SplitTurnAnimationMoonTimeline_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SplitTurnAnimationMoonTimeline_c__Class** type_info;
        inline app::SplitTurnAnimationMoonTimeline_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SplitTurnAnimationMoonTimeline_c__Class>(type_info, "", "SplitTurnAnimationMoonTimeline", "<>c");
        }
        inline app::SplitTurnAnimationMoonTimeline_c* create() {
            return il2cpp::create_object<app::SplitTurnAnimationMoonTimeline_c>(get_class());
        }
    } // namespace SplitTurnAnimationMoonTimeline_c
} // namespace app::classes::types
