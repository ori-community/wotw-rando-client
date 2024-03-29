#pragma once
#include <Modloader/app/structs/NickHitReactionBehaviour_NonInterruptibleTaskCondition.h>
#include <Modloader/app/structs/NickHitReactionBehaviour_NonInterruptibleTaskCondition__Array.h>
#include <Modloader/app/structs/NickHitReactionBehaviour_NonInterruptibleTaskCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NickHitReactionBehaviour_NonInterruptibleTaskCondition {
        inline app::NickHitReactionBehaviour_NonInterruptibleTaskCondition__Class** type_info() {
            static app::NickHitReactionBehaviour_NonInterruptibleTaskCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NickHitReactionBehaviour_NonInterruptibleTaskCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NickHitReactionBehaviour_NonInterruptibleTaskCondition__Class* get_class() {
            return il2cpp::get_nested_class<app::NickHitReactionBehaviour_NonInterruptibleTaskCondition__Class>(type_info(), "", "NickHitReactionBehaviour", "NonInterruptibleTaskCondition");
        }
        inline app::NickHitReactionBehaviour_NonInterruptibleTaskCondition* create() {
            return il2cpp::create_object<app::NickHitReactionBehaviour_NonInterruptibleTaskCondition>(get_class());
        }
        inline app::NickHitReactionBehaviour_NonInterruptibleTaskCondition__Array* create_array(int size) {
            return il2cpp::array_new<app::NickHitReactionBehaviour_NonInterruptibleTaskCondition__Array>(get_class(), size);
        }
        inline app::NickHitReactionBehaviour_NonInterruptibleTaskCondition__Array* create_array(const std::vector<app::NickHitReactionBehaviour_NonInterruptibleTaskCondition*>& items) {
            return il2cpp::array_new<app::NickHitReactionBehaviour_NonInterruptibleTaskCondition__Array>(get_class(), items);
        }
    } // namespace NickHitReactionBehaviour_NonInterruptibleTaskCondition
} // namespace app::classes::types
