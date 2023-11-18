#pragma once
#include <Modloader/app/structs/SplitTurnAnimationMoonTimeline__Array.h>
#include <Modloader/app/structs/SplitTurnAnimationMoonTimeline__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SplitTurnAnimationMoonTimeline__Array {
        inline app::SplitTurnAnimationMoonTimeline__Array__Class** type_info() {
            static app::SplitTurnAnimationMoonTimeline__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SplitTurnAnimationMoonTimeline__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SplitTurnAnimationMoonTimeline__Array__Class* get_class() {
            return il2cpp::get_class<app::SplitTurnAnimationMoonTimeline__Array__Class>(type_info(), "", "SplitTurnAnimationMoonTimeline[]");
        }
        inline app::SplitTurnAnimationMoonTimeline__Array* create() {
            return il2cpp::create_object<app::SplitTurnAnimationMoonTimeline__Array>(get_class());
        }
    } // namespace SplitTurnAnimationMoonTimeline__Array
} // namespace app::classes::types
