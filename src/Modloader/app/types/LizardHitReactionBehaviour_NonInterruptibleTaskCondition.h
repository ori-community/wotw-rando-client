#pragma once
#include <Modloader/app/structs/LizardHitReactionBehaviour_NonInterruptibleTaskCondition.h>
#include <Modloader/app/structs/LizardHitReactionBehaviour_NonInterruptibleTaskCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardHitReactionBehaviour_NonInterruptibleTaskCondition {
        inline app::LizardHitReactionBehaviour_NonInterruptibleTaskCondition__Class** type_info() {
            static app::LizardHitReactionBehaviour_NonInterruptibleTaskCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LizardHitReactionBehaviour_NonInterruptibleTaskCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LizardHitReactionBehaviour_NonInterruptibleTaskCondition__Class* get_class() {
            return il2cpp::get_nested_class<app::LizardHitReactionBehaviour_NonInterruptibleTaskCondition__Class>(type_info(), "", "LizardHitReactionBehaviour", "NonInterruptibleTaskCondition");
        }
        inline app::LizardHitReactionBehaviour_NonInterruptibleTaskCondition* create() {
            return il2cpp::create_object<app::LizardHitReactionBehaviour_NonInterruptibleTaskCondition>(get_class());
        }
    } // namespace LizardHitReactionBehaviour_NonInterruptibleTaskCondition
} // namespace app::classes::types
