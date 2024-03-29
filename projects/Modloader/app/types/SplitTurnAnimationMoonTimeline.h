#pragma once
#include <Modloader/app/structs/SplitTurnAnimationMoonTimeline.h>
#include <Modloader/app/structs/SplitTurnAnimationMoonTimeline__Array.h>
#include <Modloader/app/structs/SplitTurnAnimationMoonTimeline__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SplitTurnAnimationMoonTimeline {
        inline app::SplitTurnAnimationMoonTimeline__Class** type_info() {
            static app::SplitTurnAnimationMoonTimeline__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SplitTurnAnimationMoonTimeline__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SplitTurnAnimationMoonTimeline__Class* get_class() {
            return il2cpp::get_class<app::SplitTurnAnimationMoonTimeline__Class>(type_info(), "", "SplitTurnAnimationMoonTimeline");
        }
        inline app::SplitTurnAnimationMoonTimeline* create() {
            return il2cpp::create_object<app::SplitTurnAnimationMoonTimeline>(get_class());
        }
        inline app::SplitTurnAnimationMoonTimeline__Array* create_array(int size) {
            return il2cpp::array_new<app::SplitTurnAnimationMoonTimeline__Array>(get_class(), size);
        }
        inline app::SplitTurnAnimationMoonTimeline__Array* create_array(const std::vector<app::SplitTurnAnimationMoonTimeline*>& items) {
            return il2cpp::array_new<app::SplitTurnAnimationMoonTimeline__Array>(get_class(), items);
        }
    } // namespace SplitTurnAnimationMoonTimeline
} // namespace app::classes::types
