#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NickHitReactionBehaviour_NonInterruptibleTaskCondition {
        namespace {
            inline app::NickHitReactionBehaviour_NonInterruptibleTaskCondition__Class* type_info_ref = nullptr;
        }
        inline app::NickHitReactionBehaviour_NonInterruptibleTaskCondition__Class** type_info = &type_info_ref;
        inline app::NickHitReactionBehaviour_NonInterruptibleTaskCondition__Class* get_class() {
            return il2cpp::get_nested_class<app::NickHitReactionBehaviour_NonInterruptibleTaskCondition__Class>(type_info, "", "NickHitReactionBehaviour", "NonInterruptibleTaskCondition");
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
