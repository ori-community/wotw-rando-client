#pragma once
#include <Modloader/app/structs/AnimationEndedCondition.h>
#include <Modloader/app/structs/AnimationEndedCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationEndedCondition {
        inline app::AnimationEndedCondition__Class** type_info() {
            static app::AnimationEndedCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationEndedCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationEndedCondition__Class* get_class() {
            return il2cpp::get_class<app::AnimationEndedCondition__Class>(type_info(), "fsm", "AnimationEndedCondition");
        }
        inline app::AnimationEndedCondition* create() {
            return il2cpp::create_object<app::AnimationEndedCondition>(get_class());
        }
    } // namespace AnimationEndedCondition
} // namespace app::classes::types
