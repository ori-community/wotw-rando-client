#pragma once
#include <Modloader/app/structs/SetupGameplayOnTrigger.h>
#include <Modloader/app/structs/SetupGameplayOnTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetupGameplayOnTrigger {
        inline app::SetupGameplayOnTrigger__Class** type_info() {
            static app::SetupGameplayOnTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetupGameplayOnTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetupGameplayOnTrigger__Class* get_class() {
            return il2cpp::get_class<app::SetupGameplayOnTrigger__Class>(type_info(), "", "SetupGameplayOnTrigger");
        }
        inline app::SetupGameplayOnTrigger* create() {
            return il2cpp::create_object<app::SetupGameplayOnTrigger>(get_class());
        }
    } // namespace SetupGameplayOnTrigger
} // namespace app::classes::types
