#pragma once
#include <Modloader/app/structs/PlayerTriggerSetup_TriggerSetupState__Enum.h>
#include <Modloader/app/structs/PlayerTriggerSetup_TriggerSetupState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerTriggerSetup_TriggerSetupState__Enum {
        inline app::PlayerTriggerSetup_TriggerSetupState__Enum__Class** type_info() {
            static app::PlayerTriggerSetup_TriggerSetupState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerTriggerSetup_TriggerSetupState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerTriggerSetup_TriggerSetupState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerTriggerSetup_TriggerSetupState__Enum__Class>(type_info(), "", "PlayerTriggerSetup", "TriggerSetupState");
        }
        inline app::PlayerTriggerSetup_TriggerSetupState__Enum* create() {
            return il2cpp::create_object<app::PlayerTriggerSetup_TriggerSetupState__Enum>(get_class());
        }
    } // namespace PlayerTriggerSetup_TriggerSetupState__Enum
} // namespace app::classes::types
