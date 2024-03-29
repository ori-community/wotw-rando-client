#pragma once
#include <Modloader/app/structs/SplitTurnAnimationMoonTimeline_c.h>
#include <Modloader/app/structs/SplitTurnAnimationMoonTimeline_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SplitTurnAnimationMoonTimeline_c {
        inline app::SplitTurnAnimationMoonTimeline_c__Class** type_info() {
            static app::SplitTurnAnimationMoonTimeline_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SplitTurnAnimationMoonTimeline_c__Class**)(modloader::win::memory::resolve_rva(0x047836D0));
            }
            return cache;
        }
        inline app::SplitTurnAnimationMoonTimeline_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SplitTurnAnimationMoonTimeline_c__Class>(type_info(), "", "SplitTurnAnimationMoonTimeline", "<>c");
        }
        inline app::SplitTurnAnimationMoonTimeline_c* create() {
            return il2cpp::create_object<app::SplitTurnAnimationMoonTimeline_c>(get_class());
        }
    } // namespace SplitTurnAnimationMoonTimeline_c
} // namespace app::classes::types
