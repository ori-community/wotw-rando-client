#pragma once
#include <Modloader/app/structs/HornBugHitReactionBehaviour_NonInterruptibleTaskCondition.h>
#include <Modloader/app/structs/HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array.h>
#include <Modloader/app/structs/HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornBugHitReactionBehaviour_NonInterruptibleTaskCondition {
        inline app::HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Class** type_info() {
            static app::HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Class* get_class() {
            return il2cpp::get_nested_class<app::HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Class>(type_info(), "", "HornBugHitReactionBehaviour", "NonInterruptibleTaskCondition");
        }
        inline app::HornBugHitReactionBehaviour_NonInterruptibleTaskCondition* create() {
            return il2cpp::create_object<app::HornBugHitReactionBehaviour_NonInterruptibleTaskCondition>(get_class());
        }
        inline app::HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array* create_array(int size) {
            return il2cpp::array_new<app::HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array>(get_class(), size);
        }
        inline app::HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array* create_array(const std::vector<app::HornBugHitReactionBehaviour_NonInterruptibleTaskCondition*>& items) {
            return il2cpp::array_new<app::HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array>(get_class(), items);
        }
    } // namespace HornBugHitReactionBehaviour_NonInterruptibleTaskCondition
} // namespace app::classes::types
