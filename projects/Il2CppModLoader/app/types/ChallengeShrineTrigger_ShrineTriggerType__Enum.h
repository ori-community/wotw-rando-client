#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChallengeShrineTrigger_ShrineTriggerType__Enum {
        namespace {
            app::ChallengeShrineTrigger_ShrineTriggerType__Enum__Class* type_info_ref = nullptr;
        }
        app::ChallengeShrineTrigger_ShrineTriggerType__Enum__Class** type_info = &type_info_ref;
        inline app::ChallengeShrineTrigger_ShrineTriggerType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ChallengeShrineTrigger_ShrineTriggerType__Enum__Class>(type_info, "", "ChallengeShrineTrigger", "ShrineTriggerType");
        }
        inline app::ChallengeShrineTrigger_ShrineTriggerType__Enum* create() {
            return il2cpp::create_object<app::ChallengeShrineTrigger_ShrineTriggerType__Enum>(get_class());
        }
    } // namespace ChallengeShrineTrigger_ShrineTriggerType__Enum
} // namespace app::classes::types
