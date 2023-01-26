#pragma once
#include <Modloader/app/structs/HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array.h>
#include <Modloader/app/structs/HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array {
        inline app::HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class** type_info() {
            static app::HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class* get_class() {
            return il2cpp::get_class<app::HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class>(type_info(), "", "HornBugHitReactionBehaviour+NonInterruptibleTaskCondition[]");
        }
        inline app::HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array* create() {
            return il2cpp::create_object<app::HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array>(get_class());
        }
    } // namespace HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array
} // namespace app::classes::types
