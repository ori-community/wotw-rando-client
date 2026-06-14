#pragma once
#include <Modloader/app/structs/ChallengeShrineTrigger_ShrineTriggerType__Enum.h>
#include <Modloader/app/structs/ChallengeShrineTrigger_ShrineTriggerType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChallengeShrineTrigger_ShrineTriggerType__Enum {
        inline app::ChallengeShrineTrigger_ShrineTriggerType__Enum__Class** type_info() {
            static app::ChallengeShrineTrigger_ShrineTriggerType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChallengeShrineTrigger_ShrineTriggerType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChallengeShrineTrigger_ShrineTriggerType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ChallengeShrineTrigger_ShrineTriggerType__Enum__Class>(type_info(), "", "ChallengeShrineTrigger", "ShrineTriggerType");
        }
        inline app::ChallengeShrineTrigger_ShrineTriggerType__Enum* create() {
            return il2cpp::create_object<app::ChallengeShrineTrigger_ShrineTriggerType__Enum>(get_class());
        }
    } // namespace ChallengeShrineTrigger_ShrineTriggerType__Enum
} // namespace app::classes::types
