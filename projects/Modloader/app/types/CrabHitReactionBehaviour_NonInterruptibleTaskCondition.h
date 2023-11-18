#pragma once
#include <Modloader/app/structs/CrabHitReactionBehaviour_NonInterruptibleTaskCondition.h>
#include <Modloader/app/structs/CrabHitReactionBehaviour_NonInterruptibleTaskCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrabHitReactionBehaviour_NonInterruptibleTaskCondition {
        inline app::CrabHitReactionBehaviour_NonInterruptibleTaskCondition__Class** type_info() {
            static app::CrabHitReactionBehaviour_NonInterruptibleTaskCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrabHitReactionBehaviour_NonInterruptibleTaskCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrabHitReactionBehaviour_NonInterruptibleTaskCondition__Class* get_class() {
            return il2cpp::get_nested_class<app::CrabHitReactionBehaviour_NonInterruptibleTaskCondition__Class>(type_info(), "", "CrabHitReactionBehaviour", "NonInterruptibleTaskCondition");
        }
        inline app::CrabHitReactionBehaviour_NonInterruptibleTaskCondition* create() {
            return il2cpp::create_object<app::CrabHitReactionBehaviour_NonInterruptibleTaskCondition>(get_class());
        }
    } // namespace CrabHitReactionBehaviour_NonInterruptibleTaskCondition
} // namespace app::classes::types
