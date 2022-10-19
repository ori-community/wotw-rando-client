#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CrabHitReactionBehaviour_NonInterruptibleTaskCondition {
        namespace {
            inline app::CrabHitReactionBehaviour_NonInterruptibleTaskCondition__Class* type_info_ref = nullptr;
        }
        inline app::CrabHitReactionBehaviour_NonInterruptibleTaskCondition__Class** type_info = &type_info_ref;
        inline app::CrabHitReactionBehaviour_NonInterruptibleTaskCondition__Class* get_class() {
            return il2cpp::get_nested_class<app::CrabHitReactionBehaviour_NonInterruptibleTaskCondition__Class>(type_info, "", "CrabHitReactionBehaviour", "NonInterruptibleTaskCondition");
        }
        inline app::CrabHitReactionBehaviour_NonInterruptibleTaskCondition* create() {
            return il2cpp::create_object<app::CrabHitReactionBehaviour_NonInterruptibleTaskCondition>(get_class());
        }
    } // namespace CrabHitReactionBehaviour_NonInterruptibleTaskCondition
} // namespace app::classes::types
