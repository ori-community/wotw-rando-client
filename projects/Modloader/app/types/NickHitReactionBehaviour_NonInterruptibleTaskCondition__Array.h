#pragma once
#include <Modloader/app/structs/NickHitReactionBehaviour_NonInterruptibleTaskCondition__Array.h>
#include <Modloader/app/structs/NickHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NickHitReactionBehaviour_NonInterruptibleTaskCondition__Array {
        inline app::NickHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class** type_info() {
            static app::NickHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NickHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NickHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class* get_class() {
            return il2cpp::get_class<app::NickHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class>(type_info(), "", "NickHitReactionBehaviour+NonInterruptibleTaskCondition[]");
        }
        inline app::NickHitReactionBehaviour_NonInterruptibleTaskCondition__Array* create() {
            return il2cpp::create_object<app::NickHitReactionBehaviour_NonInterruptibleTaskCondition__Array>(get_class());
        }
    } // namespace NickHitReactionBehaviour_NonInterruptibleTaskCondition__Array
} // namespace app::classes::types
