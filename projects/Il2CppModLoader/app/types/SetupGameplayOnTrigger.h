#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetupGameplayOnTrigger {
        namespace {
            app::SetupGameplayOnTrigger__Class* type_info_ref = nullptr;
        }
        app::SetupGameplayOnTrigger__Class** type_info = &type_info_ref;
        inline app::SetupGameplayOnTrigger__Class* get_class() {
            return il2cpp::get_class<app::SetupGameplayOnTrigger__Class>(type_info, "", "SetupGameplayOnTrigger");
        }
        inline app::SetupGameplayOnTrigger* create() {
            return il2cpp::create_object<app::SetupGameplayOnTrigger>(get_class());
        }
    } // namespace SetupGameplayOnTrigger
} // namespace app::classes::types
